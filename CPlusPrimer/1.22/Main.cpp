/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Fri 02 Nov 2018 09:03:37 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include "Class.h"

int main()
{
    BookInfo Test1;
    BookInfo Test2;

    cout << "please input the first info" << endl;
    cin >> Test1;
    
    cout << "please input the second info" << endl;
    cin >> Test2;

    cout << Test1+Test2 << endl;
    return 0;
}
