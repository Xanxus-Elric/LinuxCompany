/*************************************************************************
	> File Name: SearchMax.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Tue 09 Oct 2018 05:35:57 PM CST
 ************************************************************************/

#include "SearchMax.h"

#include<iostream>
using namespace std;

int Student::NumCount = 1;

Student::Student()
{
    this->Num = this->NumCount;
    this->NumCount++;

    cout << "Please input the name of the student:" << endl;
    cin >> this->Name;

    cout << "Please input the score of the student:" << endl;
    cin >> this->Score;
}

Student::~Student()
{
    
}

void Student::SearchMaxScore(int &MaxScore, int &MaxNum)
{
    //compare the MaxScore with this instance's Score
    //if the score is bigger than MaxScore, replace the MaxScore with this instace's score and the Num with this instace's Num;
    if (MaxScore < this->Score)
    {
        MaxScore    = this->Score;
        MaxNum      = this->Num;
    }
}

void Student::ShowTheStudentInfo(void)
{
    cout << "The student who get the Max Score is:" << this->Name << endl;
    cout << "The Max Score is:" << this->Score << endl;
}



