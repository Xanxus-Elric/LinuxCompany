/*************************************************************************
	> File Name: StaffClass.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Wed 10 Oct 2018 10:56:20 AM CST
 ************************************************************************/

#include "StaffClass.h"
#include<iostream>
using namespace std;

Staff::Staff()
{
    cout << "Please input the Staff's Name:" << endl;
    cin >> this->Name;

    cout << "Please input the Staff's Salary:" << endl;
    cin >> this->Salary;

    cout << "Please input the Staff's Age:" << endl;
    cin >> this->Age;
}

Staff::~Staff()
{
    
}

void Staff::ShowStaffInfo(void)
{
    cout << "Name: " << this->Name;
    cout << "\t";
    cout << "Age: " << this->Age;
    cout << "\t";
    cout << "Salary: " << this->Salary;
    cout << "\t" << endl;
}


AdminStaff::AdminStaff()
{
    cout << "Please initialize the Entry Password:" << endl;
    cin >> this->AdminPassword;

    this->LoginStatus = false;
}

AdminStaff::~AdminStaff()
{
}

void AdminStaff::ResetPassword(void)
{
    cout << "Please input the Reset Password:" << endl;
    cin >> AdminPassword;
}

