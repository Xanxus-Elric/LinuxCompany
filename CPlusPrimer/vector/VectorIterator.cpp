/*************************************************************************
	> File Name: VectorIterator.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 01:55:21 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include <vector>
#include <iterator>

using std::vector;

int main()
{
    vector<int> vec(10);
    vector<int>::iterator itr;

    int input = 14;

    for (itr = vec.begin(); itr != vec.end(); itr++)
    {
        *itr = (++input);
    }

    for (itr = vec.begin(); itr != vec.end(); itr++)
    {
        cout << *itr << " ";
    }
    
    cout << endl;

    for(itr = vec.begin(); itr != vec.end(); itr++)
    {
        *itr *= 2;
    }

    for (itr = vec.begin(); itr != vec.end(); itr++)
    {
        cout << *itr << " ";
    }

    cout << endl;

    return 0;

}
