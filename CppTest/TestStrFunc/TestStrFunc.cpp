/*************************************************************************
	> File Name: TestStrFunc.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Wed 10 Oct 2018 02:22:45 PM CST
 ************************************************************************/

#include <string>
#include<iostream>
using namespace std;

int main()
{
    string str1 = "this";
    string str2 = "book";

    cout << "str1: " << str1 << endl;
    cout << "str2: " << str2 << endl;

    cout << "str1.Length = " << str1.length() << endl;
    cout << "str1.Length = " << str2.length() << endl;

    str1.append(str2);
    cout << "str1: " << str1 << endl;

    int pos = str1.find('b');
    cout << "str1[" << pos << "]" << str1[pos] << endl;

    str1.insert(pos, " is a ");
    cout << str1 << endl;

    str1.assign("Good");
    cout << str1 << endl;

    return 0;
}

