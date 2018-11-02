/*************************************************************************
	> File Name: Class.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Fri 02 Nov 2018 09:03:24 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include "Class.h"
#include <cstring>

istream& operator>>(istream& cin, BookInfo& info)
{
    cin >> info.ISBN;
    cin >> info.count;
    cin >> info.price;

    return cin;
}

ostream& operator<<(ostream& cout, BookInfo& info)
{
    cout << "the ISBN is    : " << info.ISBN << endl;
    cout << "the price is   : " << info.price << endl;
    cout << "the sale count : " << info.count << endl;
    cout << "the sale money : " << (info.count * info.price) << endl;

    return cout;
}

BookInfo& BookInfo::operator+(BookInfo& Src)
{
    this->count = this->count + Src.count;

    return *this;
}
