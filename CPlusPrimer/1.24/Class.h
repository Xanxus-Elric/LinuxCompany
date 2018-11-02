/*************************************************************************
	> File Name: Class.h
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Fri 02 Nov 2018 02:21:44 PM CST
 ************************************************************************/

#ifndef _CLASS_H
#define _CLASS_H

#ifdef _cplusplus
extern "C"{
#endif

    class Sale{
        public:
            char    ISBN[128];
            int     count;
            float   price;

            friend int IsSameISBN(Sale& Src1, Sale& Src2);
            Sale& operator+=(Sale& Src);
            Sale& operator=(Sale& Src);
            friend ostream& operator<<(ostream& cout, Sale& Src);
            friend istream& operator>>(istream& cin, Sale& Des);
    };


#ifdef _cplusplus
}
#endif

#endif
