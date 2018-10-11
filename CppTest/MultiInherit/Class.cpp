/*************************************************************************
	> File Name: Class.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Thu 11 Oct 2018 09:03:41 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include "Class.h"

const float PI = 3.14;

Circle::Circle(float r):Radius(r)
{
    
}

float Circle::SizeofCircle()
{
    return PI*PI*(this->Radius);
}

Table::Table(float H):Height(H)
{

}

float Table::RetHeight()
{
    return this->Height;
}

RoundTable::RoundTable(float h, float r, Color c):Table(h), Circle(r), TableColor(c)
{

}

int RoundTable::GetColor()
{
    return this->TableColor;
}


