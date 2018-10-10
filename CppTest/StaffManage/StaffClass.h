/*************************************************************************
	> File Name: StaffClass.h
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Wed 10 Oct 2018 10:56:29 AM CST
 ************************************************************************/

#ifndef _STAFFCLASS_H
#define _STAFFCLASS_H

#ifdef _cplusplus
extern "C"{
#endif

    class Staff
    {
        friend void SetStaffInfo(Staff &StaffMember);

        private:
            char Name[20];
            int Age;
            int Salary;

        public:
            Staff();
            ~Staff();
            void ShowStaffInfo(void);
            
    };




#ifdef _cplusplus
}
#endif

#endif
