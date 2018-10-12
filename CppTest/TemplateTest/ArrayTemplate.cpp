/*************************************************************************
	> File Name: ArrayTemplate.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Fri 12 Oct 2018 10:53:49 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

template <typename T>
void ShowArray(T Array[], int ArraySize)
{
    int i; 
    for (i = 0; i < ArraySize; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl;
}

template <typename T>
void SortArray(T Array[], int ArraySize)
{
    int i, j;
    T temp;
    for (i = 0; i < ArraySize; i++)
    {
        for (j = 0; j < ArraySize - i - 1; j++)
        {
            if (Array[j+1] > Array[j])
            {
                temp = Array[j+1];
                Array[j+1] = Array[j];
                Array[j] = temp;
            }
        }
    }
}

int main()
{
    int a[] = {1, 5, 2, 7, 9, 0, 10, 4};
    ShowArray(a, sizeof(a)/sizeof(a[0]));
    SortArray(a, sizeof(a)/sizeof(a[0]));
    ShowArray(a, sizeof(a)/sizeof(a[0]));
}
