/*************************************************************************
	> File Name: DateClass.h
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Wed 10 Oct 2018 02:48:34 PM CST
 ************************************************************************/

#ifndef _DATECLASS_H
#define _DATECLASS_H

#include <iostream>
using namespace std;

#ifdef _cplusplus
extern "C" {
#endif

    class Date
    {
        friend void operator>> (istream &input, Date &Dt);
        friend void operator<< (ostream &output, Date &Dt);

        private:
            int Year;
            int Month;
            int Day;

        public:
            Date();
            ~Date();
    };





#ifdef _cplusplus
}
#endif

#endif
