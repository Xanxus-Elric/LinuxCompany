/*************************************************************************
	> File Name: Class.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Wed 31 Oct 2018 05:07:04 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include "Class.h"
#include <cstring>

Person::Person()
{
    this->Message = new char[1024];

    if (this->Message == NULL)
    {
        cout << "new Message fail" << endl;
    }

    strcpy(this->Message, "Welcome to MR");
    cout << this->Message << endl;
}

Person::~Person()
{
    if (this->Message == NULL)
    {
        cout << "fail to allocate the Message" << endl;
    }

    strcpy(this->Message, "Good Bye");
    cout << this->Message << endl;

    delete[] Message;
}
