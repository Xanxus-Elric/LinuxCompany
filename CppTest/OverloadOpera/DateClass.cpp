/*************************************************************************
	> File Name: DateClass.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Wed 10 Oct 2018 02:48:22 PM CST
 ************************************************************************/

#include "DateClass.h"

#include<iostream>
using namespace std;

void operator>> (istream &input, Date &Dt)
{
    cout << "please input the year :" << endl;
    cin >> Dt.Year;

    cout << "please input the month :" << endl;
    cin >> Dt.Month;

    cout << "please input the Day :" << endl;
    cin >> Dt.Day;
}

void operator<< (ostream &output, Date &Dt)
{
    output << Dt.Year << "/" << Dt.Month << "/" << Dt.Day << endl;
}

Date::Date()
{
    
}

Date::~Date()
{

}
