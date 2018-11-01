/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Thu 01 Nov 2018 01:19:34 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include "Class.h"
int main()
{
    List list;

    list.SetNodeTag(100);
    list.SetNodeName("Hello world");

    //the nest Node class just valid in List class 
    cout << list.node.Name << endl;
}
