/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 09:41:11 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

int main()
{
    string word;

    cout << "please input the word string" << endl;
    cout << "Enter Ctrl+D to quit" << endl;

    while(cin >> word)
    {
        cout << "new word: " << word << " ";
        string::size_type size = word.size();
        cout << "the size of the word: " << size << endl;
    }
    return 0;
}
