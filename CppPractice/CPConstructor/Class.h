/*************************************************************************
	> File Name: Class.h
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Wed 31 Oct 2018 04:49:27 PM CST
 ************************************************************************/

#ifndef _CLASS_H
#define _CLASS_H

#ifdef _cplusplus
extern "C" {
#endif

class Person
{
    public:
        Person(int index, short age, double salary);
        Person(Person &CopyPerson);
          
        int index;
        short age;
        double salary;
        
        int getIndex();
        short getAge();
        double getSalary();

};

#ifdef _cpluscplus
}
#endif

#endif
