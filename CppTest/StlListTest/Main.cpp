/*************************************************************************
	> File Name: Main.cpp
	> Author: 
	> Mail: wangrq@farsight.com.cn
	> Created Time: Fri 12 Oct 2018 10:00:24 AM CST
 ************************************************************************/

#include<iostream>
using namespace std;

#include <list>
#include <iterator>

typedef list<int> IntList;

int main()
{
    //create a List container instance with no integer elements
    IntList MyList;

    IntList::iterator FrontIterator;
    IntList::reverse_iterator BackIterator;

    MyList.push_back(3);
    MyList.push_back(4);

    MyList.push_front(2);
    MyList.push_front(1);

    //show the elements of the list from the begin to the end
    for (FrontIterator = MyList.begin(); FrontIterator != MyList.end(); FrontIterator++)
    {
        cout << *FrontIterator << " ";
    }
    cout << endl;

    //show the elements of the list from the end to the begin
    for (BackIterator = MyList.rbegin(); BackIterator != MyList.rend(); BackIterator++)
    {
        cout << *BackIterator << " ";
    }
    cout << endl;

    MyList.resize(10);

    //reset the list
    for (FrontIterator = MyList.begin(); FrontIterator != MyList.end(); FrontIterator++)
    {
        cout << "please add: ";
        cin >> *FrontIterator;
        cout << endl;
    }

    //show the elements of the list from the begin to the end
    for (FrontIterator = MyList.begin(); FrontIterator != MyList.end(); FrontIterator++)
    {
        cout << *FrontIterator << " ";
    }
    cout << endl;

}
