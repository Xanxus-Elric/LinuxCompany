/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 02:59:47 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include <vector>
#include <iterator>

using std::vector;

int main()
{
    vector<int> vec;
    vector<int>::iterator iter;

    int value;
    int *pa;
    int i = 0;
    
    while(cin >> value)
    {
        vec.push_back(value);
    }

    pa = new int[vec.size()];

    for (iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << *iter << " ";
        pa[i++] = *iter;
    }
    
    cout << endl;

    for (int i = 0; i < vec.size(); i++)
    {
        cout << *(pa + i) << " ";
    }

    cout << endl;

    delete[] pa;

    return 0;
}
