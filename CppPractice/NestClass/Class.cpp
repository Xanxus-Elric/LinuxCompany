/*************************************************************************
	> File Name: Class.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Thu 01 Nov 2018 01:19:41 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include "Class.h"
#include <string.h>

void List::SetNodeTag(int Tag)
{
    //the class List don't have permission to access the nest class's private data
    //so set the class List as friend class as Node class
    node.Tag = Tag;
}

void List::SetNodeName(const char* Name)
{
    //the class List have the permission to access the nest class's public data
    strcpy(node.Name, Name);
}
