/*************************************************************************
	> File Name: Main2.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 09:37:38 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    string word;

    cout << "please input the word" << endl;
    cout << "Enter ctrl+d to quit" << endl;

    while(cin >> word)
    {
        cout << "new word: " << word << endl;
    }

    return 0;
}
