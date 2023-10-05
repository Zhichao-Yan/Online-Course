#define _xopen_source 600
#define _posix_c_source 200112l
#include <stdio.h>
#include <sys/time.h>
#include <string.h>
#include <limits.h>
#include <stdlib.h>
#include <stdint.h>
#include <assert.h>
#include <stdlib.h>
#include <pthread.h>

#define NTHR 8
#define N 8000000L
#define TNUM (N / NTHR)

int nums[N] = {0};
int snums[N] = {0};

pthread_barrier_t barrier;

int x = 0;
int cmp(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;
    return x - y;
}
void merge()
{
    uint64_t idx[NTHR];// 整个数值分为8段，每段1000000个数据
    uint64_t i, minidx, sidx;
    int num;
    for (i = 0; i < NTHR; i++) idx[i] = i * TNUM;// 每段的起始位置
    for (sidx = 0; sidx < N; sidx++)// all N = 8000000 numbers
    {
        num = 0x7fffffff;
        // 这里每轮比较，都是将每一段的最小值拿出来比较，每一段的最小值比较出来就是整个最小值
        for (i = 0; i < NTHR; i++)
        {
            if ((idx[i] < (i + 1) * TNUM) && (nums[idx[i]] < num))
            {
                num = nums[idx[i]];// 得到二者较小值
                minidx = i;//该较小值所在的段
            }
        }
        snums[sidx] = nums[idx[minidx]];// 给snums[sidx]赋值，得到当前800000个数中的最小值
        idx[minidx]++;// 注意，现在minidx段段最小值的位置往后移动1位
    }
}

void *worker(void *args)
{
    uint64_t idx = (u_int64_t)args;
    qsort(&nums[idx], TNUM, sizeof(int), cmp);
    pthread_barrier_wait(&barrier);
    return NULL;
}

int main()
{
    int i = 0, ret = 0;
    pthread_t tid;

    // init numbers array
    srandom(time(NULL));
    for (i = 0; i < N; i++)
        nums[i] = random() % 100;

    // init barrier
    pthread_barrier_init(&barrier, NULL, NTHR + 1);

    // create NTHR threads
    for (i = 0; i < NTHR; i++)
    {
        ret = pthread_create(&tid, NULL, worker, (void *)(i * TNUM));
        if (ret != 0)
        {
            puts(strerror(ret));
            exit(ret);
        }
    }
    // wait here
    pthread_barrier_wait(&barrier);
    merge();
    pthread_barrier_destroy(&barrier);

    // check whether if increase order
    for (i = 1; i < N; i++)
        assert(snums[i] >= snums[i - 1]);
    //print sorted result
    // for (i = 0; i < N; i++)
    //     printf("%d%c", snums[i], i == N - 1 ? '\n' : ' ');
    return 0;
}
