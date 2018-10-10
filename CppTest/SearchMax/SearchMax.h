/*************************************************************************
	> File Name: SearchMax.h
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Tue 09 Oct 2018 05:36:17 PM CST
 ************************************************************************/

#ifndef _SEARCHMAX_H
#define _SEARCHMAX_H
#ifdef _cplusplus
extern "C" {
#endif

class Student
{
    private:
        int     Num;            //the array number of the class Student array
        char    Name[20];
        int     Score;
        static int NumCount;

    public:
        Student();                 //Initialize the information of the Student Interface
        ~Student();                     //do nothing
        void SearchMaxScore(int &MaxScore, int &MaxNum);       //bubble sort to search the numer of the student who get the Max score
        void ShowTheStudentInfo(void);  //Put the information of the student on the screen
};

#ifdef _cplusplus
}
#endif
#endif
