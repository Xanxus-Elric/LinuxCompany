/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Thu 11 Oct 2018 09:02:49 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include "Class.h"

int main()
{
    RoundTable Cir_Table(15.0, 2.0, Yellow);

    cout << "Height: " << Cir_Table.RetHeight() << endl;
    cout << "Size: " << Cir_Table.SizeofCircle() << endl;
    cout << "Color: " << Cir_Table.GetColor() << endl;
}
