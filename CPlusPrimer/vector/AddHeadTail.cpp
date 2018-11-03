/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 01:09:10 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include <vector>

using std::vector;

int main()
{
    vector<int> vec;
    vector<int>::size_type index;

    int input;

    while(cin >> input)
    {
        vec.push_back(input);
    }

    for (index = 0; index != vec.size(); index++)
    {
        if (index == (vec.size() - index -1))
        {
            cout << "there is one element can't be added" << endl;
            break;
        }
        else if (index > (vec.size() - index - 1))
        {
            break;
        }

        cout << "the sum of " << vec[index] << " and " << vec[vec.size() - index - 1] << " is : " << vec[index] + vec[vec.size() - index - 1] << endl;
    }

    return 0;
}
