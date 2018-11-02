/*************************************************************************
	> File Name: Class.h
	> Author: 
	> Mail: 603819992@qq.com
	> Created Time: Fri 02 Nov 2018 09:03:44 AM CST
 ************************************************************************/

#ifndef _CLASS_H
#define _CLASS_H

#ifdef _cplusplus
extern "C" {
#endif

    class BookInfo{
        public:
            char    ISBN[128];
            float   price;
            int     count;

            friend istream& operator>>(istream& cin, BookInfo& info);
            friend ostream& operator<<(ostream& cout, BookInfo& info);
            BookInfo& operator+(BookInfo& Src);
    };

//>> operator overload 
istream& operator>>(istream& cin, BookInfo& info);
//<< operator overload
ostream& operator<<(ostream& cout, BookInfo& info);


#ifdef _cplusplus
}
#endif

#endif
