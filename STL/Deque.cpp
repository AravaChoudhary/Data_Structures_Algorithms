#include<iostream>
#include<deque>

using namespace std;

int main()
{
    // Creation
    deque<int> dq;

    // Insertion
    dq.push_back(10);
    // 10
    dq.push_back(20);
    // 10 , 20
    dq.push_back(30);
    // 10 , 20 , 30 
    dq.push_back(40);
    // 10 , 20 , 30 , 40

    dq.push_front(100);
    // 100 , 10 , 20 , 30 , 40
    dq.push_front(200);
    // 200 , 100 , 10 , 20 , 30 , 40
    dq.push_front(300);
    // 300 , 100 , 10 , 20 , 30 , 40
    dq.push_front(400);
    // 400 , 300 , 200 , 100 , 10 , 20 , 30 , 40

    cout<<"Size : "<<dq.size()<<endl;

    dq.pop_front();
    // 300 , 100 , 10 , 20 , 30 , 40

    dq.pop_back();
    // 300 , 100 , 10 , 20 , 30

    cout<<"Size : "<<dq.size()<<endl;

    cout<<"\nFront Back"<<endl;
    cout<<" "<<dq.front()<<"   "<<dq.back()<<"\n"<<endl;

     if(dq.empty() == true) {
        cout<<"\nDeque is Empty"<<endl;
    } else {
        cout<<"Deque is NOT Empty"<<endl;
    }

    dq.insert(dq.begin(),101);

    // Iterating the Deque
    cout<<"\nIterating the Deque"<<endl;
    deque<int>::iterator it = dq.begin();
    while(it != dq.end()) {
        cout<<*it<<" ";
        it++;
    } cout<<endl;

    return 0;
}