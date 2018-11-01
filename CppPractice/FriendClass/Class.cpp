/*************************************************************************
	> File Name: Class.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Thu 01 Nov 2018 01:52:41 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include "Class.h"
#include <string.h>

void Node::OutputName()
{
    cout << "Node.Name: " << Name << endl;
}

void Node::SetName(const char* InputName)
{
    strcpy(this->Name, InputName);
}

Node::Node()
{
    memset(Name, 0, 128);
}

void List::Output()
{
    node.SetName("Hello World");
    node.OutputName();
}
