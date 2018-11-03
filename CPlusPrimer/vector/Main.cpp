/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 01:36:54 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include <vector>

using std::vector;

int main()
{
    vector<int> vec[3];

    for (vector<int>::size_type index = 0; index != 10; index++)
    {
        for (int i = 0; i != 3; i++)
        {
            vec[i].push_back(42);
        }
    }

    for (int i = 0; i != 3; i++)
    {
        for (vector<int>::size_type index = 0; index != vec[i].size(); index++)
        {
            cout << vec[i][index] << " ";
        }

        cout << endl;
    }
}
