/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 11:11:42 AM CST
 ************************************************************************/

#include<iostream>
#include <vector>

using namespace std;
using std::vector;

int main()
{
    //declare a vector<int> distance
    vector<int> vec;
    vector<int>::size_type index;
    int input;

    while(cin >> input)
    {
        vec.push_back(input);
    }

    for (index = 0; index != vec.size(); index += 2)
    {
        if ((index + 1) >= vec.size())
        {
            cout << "the last element " << vec[index] << " can't be added" << endl;
            break;
        }

        cout << "the sum of every two elements: " << vec[index] + vec[index+1] << endl;
    }
    
    return 0;
}
