/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Tue 09 Oct 2018 05:37:30 PM CST
 ************************************************************************/

#include "SearchMax.h"

#include<iostream>
using namespace std;

const int NumberOfStudent = 7;

int main()
{
    int MaxScore = 0;
    int MaxNum = 0; //Initialize the MaxScore and MaxNum;
    int i;
    Student *StudentArray = new Student[NumberOfStudent];

    //Search the Max
    for (i = 0; i < NumberOfStudent; i++)
    {
        StudentArray[i].SearchMaxScore(MaxScore, MaxNum);
    }

    //show the Student Information
    StudentArray[MaxNum-1].ShowTheStudentInfo();

    delete[] StudentArray;

    return 0;
}
