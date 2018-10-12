/*************************************************************************
	> File Name: TemplateSwap.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Fri 12 Oct 2018 10:41:59 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

template <typename T>
void Swap(T &x, T &y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
}

typedef struct _Student
{
    int Number;
    string Name;
    float score;
}Student;

int main()
{
    //Test the template of the Swap functiona
    int m = 3, n = 5;
    cout << "m = " << m << "n = " << n << endl;
    Swap(m , n);
    cout << "m = " << m << "n = " << n << endl;

    Student S1 = {
        12, "zhanghua", 97.5
    };

    Student S2 = {
        15, "Liming", 99.2
    };

    cout << S1.Name << " : " << S1.score << endl;
    cout << S2.Name << " : " << S2.score << endl;

    Swap(S1.score, S2.score);
    
    cout << S1.Name << " : " << S1.score << endl;
    cout << S2.Name << " : " << S2.score << endl;
}
