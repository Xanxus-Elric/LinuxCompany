/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 05:20:11 PM CST
 ************************************************************************/

#include<iostream>
#include <list>
#include <deque>
#include <iterator>

using namespace std;
using std::deque;
using std::list;

int main()
{   
    int input;

    list<int> Src;
    deque<int> EvenDeque;
    deque<int> OldDeque;

    while(cin >> input)
    {
        Src.push_back(input);
    }

    //traverse the list
    for (list<int>::iterator iter = Src.begin(); iter != Src.end(); iter++)
    {
        if (!(*iter % 2))
        {
            EvenDeque.push_back(*iter);
        }
        else
        {
            OldDeque.push_back(*iter);
        }
    }

    for (list<int>::iterator iter = Src.begin(); iter != Src.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    for(deque<int>::iterator iter = EvenDeque.begin(); iter != EvenDeque.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    for (deque<int>::iterator iter = OldDeque.begin(); iter != OldDeque.end(); iter++)
    {
        cout << *iter << " ";
    }
    cout << endl;

    return 0;
}
