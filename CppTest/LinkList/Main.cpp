/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Thu 11 Oct 2018 11:14:45 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include "ListClass.h" 

int main()
{
    //create a List contained the information of Contact Man
    List ContactMan;

    int InsertCount;

    cout << "Please input how many contact man do you want to insert" << endl;
    cin >> InsertCount;

    while(InsertCount--)
    {
        ContactMan.TailAdd();
    }

    cout << "Please input how many contact man do you want to insert" << endl;
    cin >> InsertCount;

    while(InsertCount--)
    {
        ContactMan.HeadAdd();
    }

    ContactMan.ShowNodeOnPostive();
    
    cout << "_______________" << endl;

    ContactMan.ShowNodeOnNegative();

    ContactMan.DeleteNode();

    ContactMan.ShowNodeOnPostive();

    ContactMan.ClearAll();

    ContactMan.ShowNodeOnPostive();
}
