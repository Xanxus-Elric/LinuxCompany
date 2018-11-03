/*************************************************************************
	> File Name: StringCat.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 10:57:10 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    string src;
    string total;

    cout << "please input several string" << endl;

    while(cin >> src) 
    {
        src += " ";
        total += src;
    }

    cout << "the total string is : " << total << endl;
    
    return 0;
}
