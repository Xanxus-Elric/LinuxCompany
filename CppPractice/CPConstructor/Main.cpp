/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Wed 31 Oct 2018 04:49:43 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include "Class.h"

int main()
{
    Person Pa(20, 30, 100);
    Person Pb(Pa);

    cout << "Index of Pa is " << Pb.getIndex() << endl;
    cout << "Age of Pa is   " << Pb.getAge() << endl;
    cout << "Salary of Pa is" << Pb.getSalary() << endl;
}
