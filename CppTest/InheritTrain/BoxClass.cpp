/*************************************************************************
	> File Name: BoxClass.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Wed 10 Oct 2018 03:22:36 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include "BoxClass.h"

Box::Box()
{
    cout << "please input the length: " << endl;
    cin >> this->Length;

    cout << "please input the width: " << endl;
    cin >> this->Width;

    cout << "please input the height: " << endl;
    cin >> this->Height;
}

Box::~Box()
{
    
}

void Box::ShowtheInfo(void)
{
    cout << "Length: " << this->Length << endl;
    cout << "Width: " << this->Width << endl;
    cout << "Height: " << this->Height << endl;
}

ColorBox::ColorBox()
{
    cout << "please input the Box's color: " << endl;
    cin >> this->Color;
}

ColorBox::~ColorBox()
{
    
}

void ColorBox::ShowtheInfo(void)
{
    Box::ShowtheInfo();
    cout << "Color: " << this->Color << endl;
}
