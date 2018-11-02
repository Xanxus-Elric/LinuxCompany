/*************************************************************************
	> File Name: Class.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Fri 02 Nov 2018 02:21:38 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include "Class.h"
#include <cstring>

int IsSameISBN(Sale& Src1, Sale& Src2)
{
    return (strcmp(Src1.ISBN, Src2.ISBN));
}

Sale& Sale::operator+=(Sale& Src)
{
    float TotalSale = (this->count * this->price) + (Src.count * Src.price);

    this->count += Src.count;
    this->price = TotalSale / this->count;

    return *this;
}

Sale& Sale::operator=(Sale& Src)
{
    strcpy(this->ISBN, Src.ISBN);
    this->count = Src.count;
    this->price = Src.price;

    return *this;
}

ostream& operator<<(ostream& cout, Sale& Src)
{
    cout << "ISBN       : " << Src.ISBN << endl;
    cout << "Sale       : " << Src.count << endl;
    cout << "SaleRoom   : " << Src.price << endl;

    return cout;
}

istream& operator>>(istream& cin, Sale& Des)
{
    cin >> Des.ISBN;
    cin >> Des.count;
    cin >> Des.price;

    return cin;
}





