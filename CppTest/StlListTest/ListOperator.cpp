/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Fri 12 Oct 2018 09:07:52 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include <list>
#include <iterator>

//create a List Container contain elements whose type is integer
typedef list<int> IntList;


void PutList(IntList List, string Name)
{
    IntList::iterator pList;

    cout << "The elements of the " << Name << " : ";
    for (pList = List.begin(); pList != List.end(); pList++)
    {
        cout << *pList << " ";
    }
    cout << endl;
}


//Test the container of the integer
int main()
{
    IntList FirstList;      //create a container instance with none
    IntList SecondList(10, 6);      //create a container instance with ten elements(=6)
    IntList ThirdList(SecondList.begin(), --SecondList.end());      //according the SecondList, create a container with nine elements(=6)

    IntList::iterator i;

    //show the elements of the List Container
    PutList(FirstList, "FirstList");
    PutList(SecondList, "SecondList");
    PutList(ThirdList, "ThirdList");

    //Add two elements to the tail of FirstList
    FirstList.push_back(2);
    FirstList.push_back(4);

    PutList(FirstList, "FirstList");

    //Add two elements to the head of FirstList
    FirstList.push_front(5);
    FirstList.push_front(7);

    PutList(FirstList, "FirstList");
    
    FirstList.insert(++FirstList.begin(), 3, 9);

    PutList(FirstList, "FirstList");

    //Call Library Function to show the elements of the FirstList
    cout << "FirstList.front()" << FirstList.front() << endl;
    cout << "FirstList.back()" << FirstList.back() << endl;

    //delete one elements from the head of the FirstList
    FirstList.pop_front();
    PutList(FirstList, "FirstList");

    //delete one elements from the tail of the FirstList
    FirstList.pop_back();
    PutList(FirstList, "FirstList");

    //erase the second elements of the FirstList
    FirstList.erase(++FirstList.begin());
    PutList(FirstList, "FirstList");

    //reset the SecondList as eight elements(=1)
    SecondList.assign(8, 1);
    PutList(SecondList, "SecondList");

    //Show the information of the list
    cout << "MAX OF THE FirstList" << FirstList.max_size() << endl;
    cout << "SIZE OF THE FirstList" << FirstList.size() << endl;
    cout << "FirstList.empty()" << FirstList.empty() << endl;

    //the operator between the two List Container
    cout << "FirstList < ThirdList" << (FirstList < ThirdList) << endl;
    cout << "FirstList > ThirdList" << (FirstList > ThirdList) << endl;

    PutList(FirstList, "before sort");
    FirstList.sort();
    PutList(FirstList, "after sort");

    //insert all the elements of the ThirdList to the FirstList
    FirstList.splice(++FirstList.begin(), ThirdList);
    PutList(FirstList, "List1");
    PutList(ThirdList, "List3");

}
