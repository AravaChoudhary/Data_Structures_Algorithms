#include<iostream>
#include<vector>
#include<forward_list>

using namespace std;

int main()
{
    // Forward Iterator
    forward_list<int> list;
    list.push_front(10);
    list.push_front(20);
    list.push_front(30);
    list.push_front(40);

    forward_list<int>::iterator it = list.begin();

    // Write
    while(it != list.end()) {
        (*it) = (*it) + 5;
        it++;
    }

    // Read
    it = list.begin();
    while(it != list.end()) {
        cout<<*it<<" ";
        it++;
    }

    // //let's try moving backward --> This  will give error  because , it cannot be moved backwards
    // forward_list<int>::iterator it = list.end();
    // while(it != list.begin()) {
    //     cout<<*it<<" ";
    //     --it; <-- This will cause error
    // }
    
    return 0;
}