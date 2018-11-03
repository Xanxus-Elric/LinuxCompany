/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 02:57:12 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    //allocate pool to store the array on the heap
    int *pa = new int[10];

    delete [] pa;

    return 0;
}
