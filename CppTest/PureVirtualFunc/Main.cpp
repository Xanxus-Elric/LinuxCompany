/*************************************************************************
	> File Name: Class.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Thu 11 Oct 2018 10:11:55 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include "Class.h" 

int main()
{
    DerivedClass d;
    d.VirtualFunc();

    ResetClass r;
    r.VirtualFunc();
}
