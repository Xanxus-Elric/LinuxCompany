/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Sat 03 Nov 2018 02:23:38 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include <bitset>

using std::bitset;

int main()
{
#if 0
    //The first method
    unsigned long i = 0;

    int j = 1;
    int k = 2;

    while(1) 
    {       
        if (j > 21)
        {
            break;
        }
        i |= (1 << j);

        if (k > 21)
        {
            break;
        }
        i |= (1 << k);

        j += k;
        k += j;
    }

    bitset<32> bs(i);

    cout << "the count of 1 on bitset bs: " << bs.count() << endl;
#endif

#if 1
    //The second method
    unsigned long i = 0;

    int j = 1;
    int k = 2;

    bitset<32> bs;

    while(1)
    {
        if (j > 21)
        {
            break;
        }

        bs.set(j);

        if (k > 21)
        {
            break;
        }
        bs.set(k);

        j += k;
        k += j;
    }

    cout << "the count of 1 on bitset bs: " << bs.count() << endl;

#endif

    return 0;
}
