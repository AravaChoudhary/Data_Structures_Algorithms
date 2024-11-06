#include<iostream>
#include<list>

using namespace std;

int main()
{
    // Creation
    list<int> my_list;

    // Insertion
    my_list.push_back(10);
    // 10
    my_list.push_back(20);
    // 10 -> 20
    my_list.push_back(30);
    // 10 -> 20 -> 30
    my_list.push_back(40);
    // 10 -> 20 -> 30 ->40
    my_list.push_front(50);
    // 50 -> 10 -> 20 -> 30 -> 40
    my_list.push_front(60);
    // 60 -> 50 -> 10 -> 20 -> 30 -> 40
    my_list.pop_front();
    // 50 -> 10 -> 20 -> 30 -> 40
    my_list.pop_back(); 
    // 50 -> 10 -> 20 -> 30

    cout<<"List Size : "<<my_list.size()<<endl;
    // my_list.clear() to empty the list

    cout<<"Front Element : "<<my_list.front()<<endl;
    cout<<"Last Element : "<<my_list.back()<<endl;

    if(my_list.empty() == true) {
        cout<<"List is Empty"<<endl;
    } else {
        cout<<"List is NOT Empty"<<endl;
    }

    // Traversing on the List using Iterator
    cout<<"\nTraversing on the List using Iterator"<<endl;
    list<int>::iterator it = my_list.begin();
    while(it != my_list.end()) {
        cout<<*it<<" ";
        it++;
    } cout<<endl;

    return 0;
}