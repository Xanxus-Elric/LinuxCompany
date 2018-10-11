/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Thu 11 Oct 2018 09:45:51 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include "Class.h"

int main()
{
    Base b;
    cout << "Base:" << endl;

    b.VirFunc1();
    b.VirFunc2();
    b.Func();

    DerivedClass1 c1;
    cout << "Derived Class 1:" << endl;

    c1.VirFunc1();
    c1.VirFunc2();
    c1.Func();

    DerivedClass2 c2;

    cout << "Derived Class 2:" << endl;

    c2.VirFunc1();
    c2.VirFunc2();
    c2.Func();
}
