/*************************************************************************
	> File Name: Class.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Thu 01 Nov 2018 10:52:50 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include "Class.h"

int Book::Price = 100;

//Don't add 'static' here
void Book::OutputInfo()
{
    cout << "the price of book: " << Book::Price << endl;
}
