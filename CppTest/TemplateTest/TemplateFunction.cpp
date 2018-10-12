/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Fri 12 Oct 2018 10:30:51 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

template <typename T>
T MaxValue(T a, T b)
{
    return (a > b ? a : b);
}

int main()
{
    double x = 1.3, y = 3.7, DoubleMax;
    DoubleMax = MaxValue(x, y);
    cout << "Max between x and y: " << DoubleMax << endl;

    int m = 5, n = 14, IntMax;
    IntMax = MaxValue(m, n);
    cout << "Max between m and n: " << IntMax << endl;
    
}
