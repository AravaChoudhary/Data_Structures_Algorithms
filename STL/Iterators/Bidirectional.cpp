#include<iostream>
#include<forward_list>
#include<list>

using namespace std;

int main()
{
    //Bi-directional Iterator
    list<int> myList;
    myList.push_back(10);
    myList.push_back(20);
    myList.push_back(30);

    ///traverse using iterator 
    list<int>::iterator it = myList.begin();

    while(it != myList.end()) {
        //writing
        (*it) = (*it) + 2;
        //read
        cout << (*it) << " ";
        //forward move
        it++;
    }

    //let's try moving backward in list 
    list<int>::iterator it = myList.end();

    while( it != myList.begin()) {
        //backward move
        it--;
        *it = *it + 5;
        cout << *it << " ";
    }


    return 0;
}