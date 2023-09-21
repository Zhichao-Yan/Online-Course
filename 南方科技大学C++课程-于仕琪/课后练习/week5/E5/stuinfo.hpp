#ifndef STUINFO_H
#define STUINFO_H
struct stuinfo
{
    char name[20];
    double score[3];
    double ave;
};

void inputstu(stuinfo stu[] , int n);
void showstu(stuinfo stu[] , int n);
#endif