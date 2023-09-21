#include "stuinfo.hpp"
#include <iostream>

void inputstu(stuinfo stu[] , int n)
{
    for(int i = 0; i < n; ++i)
    {
        std::cout << "输入学生的姓名：";
        std::cin.get();
        stuinfo s;
        std::cin.getline(s.name,20);
        std::cout << "输入学生的三门成绩：";
        std::cin >> s.score[0] >> s.score[1] >> s.score[2];
        s.ave = (s.score[0] + s.score[1] + s.score[2])/3;
        stu[i] = s;
    }
}

void showstu(stuinfo stu[] , int n)
{
    for(int i = 0; i < n; ++i)
    {
        std::cout << "姓名：" << stu[i].name;
        std::cout << "语文：" << stu[i].score[0];
        std::cout << "数学：" << stu[i].score[1];
        std::cout << "外语：" << stu[i].score[2];
        std::cout << "平均分：" << stu[i].ave;
        std::cout << std::endl;
    }
}   