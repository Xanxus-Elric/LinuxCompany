/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 03:54:26 PM CST
 ************************************************************************/

#include<iostream>
#include <vector>
#include <iterator>
using namespace std;
using std::string;
using std::iterator;

typedef struct _StrInfo{
    string flag;
    int count;
}StrInfo;

int main()
{
    vector<StrInfo> vec;
    vector<StrInfo>::iterator iter;
    string input;

    //input the first string to initialize the vector
    cin >> input;
    
    StrInfo info = {
        input, 1
    };

    vec.push_back(info);

    while(cin >> input)
    {
        //check out the vector to configure if the string has been existed
        for (iter = vec.begin(); iter != vec.end(); iter++)
        {
            if (iter->flag == input)
            {
                iter->count++;
            }
        }
        if (iter == vec.end())
        {
            info.flag = input;
            info.count = 1;

            vec.push_back(info);
        }
    }

    for (iter = vec.begin(); iter != vec.end(); iter++)
    {
        cout << "string:    " << iter->flag << endl;
        cout << "count:     " << iter->count << endl;
    }

    return 0;
}
