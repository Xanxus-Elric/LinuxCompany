/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Thu 01 Nov 2018 10:27:07 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include "Class.h"
int main()
{
    Book b;

    cout << "the price of the book before is: " << b.Price << endl;

    Book::Price = 100;

    cout << "the price of book is :" << b.Price << endl;
}
