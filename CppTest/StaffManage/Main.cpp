/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Wed 10 Oct 2018 10:56:05 AM CST
 ************************************************************************/

#include "StaffClass.h"
#include<iostream>
using namespace std;

void SetStaffInfo(Staff &StaffMember)
{
    cout << "Please reset the Staff's Name:" << endl;
    cin >> StaffMember.Name;
    cout << "Please reset the Staff's Age:" << endl;
    cin >> StaffMember.Age;
    cout << "Please reset the Staff's Salary:" << endl;
    cin >> StaffMember.Salary;
}

int main()
{
    int i;
    Staff *StaffArray = new Staff[5];
    
    for (i = 0; i < 5; i++)
    {
        StaffArray[i].ShowStaffInfo();
    }

    SetStaffInfo(StaffArray[3]);

    for (i = 0; i < 5; i++)
    {
        StaffArray[i].ShowStaffInfo();
    }
}



