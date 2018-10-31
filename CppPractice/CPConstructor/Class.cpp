/*************************************************************************
	> File Name: Class.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Wed 31 Oct 2018 04:49:38 PM CST
 ************************************************************************/

#include<iostream>
using namespace std;
#include "Class.h"

Person::Person(int index, short age, double salary)
{
    this->index = index;
    this->age = age;
    this->salary = salary;
}

Person::Person(Person &CopyPerson)
{
    this->index = CopyPerson.index;
    this->age   = CopyPerson.age;
    this->salary = CopyPerson.salary;
}

int Person::getIndex()
{
    return this->index;
}

short Person::getAge()
{
    return this->age;
}

double Person::getSalary()
{
    return this->salary;
}

