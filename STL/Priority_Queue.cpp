#include<iostream>
#include<queue>

using namespace std;

int main()
{

    cout<<"Max Heap"<<endl;
    // Creation
    priority_queue<int> pq;
    // Max Heap --> Maximin Value in the pq will be given highest Priority

    pq.push(10);
    // 10
    pq.push(203);
    // 203 , 10
    pq.push(301);
    // 301 , 203 , 10
    pq.push(40);
    // 301 , 203 , 40 , 10

    // Top Element --> Highest Priority Element
    cout<<"Top Element : "<<pq.top()<<endl; // 301

    pq.pop(); // Highest Priority Element will be popped , i.e 301
    cout<<"Top Element : "<<pq.top()<<endl; // 203

    cout<<"Size : "<<pq.size()<<endl;

    if(pq.empty() == true) {
        cout<<"Queue is Empty"<<endl;
    } else {
        cout<<"Queue is NOT Empty"<<endl;
    }

    cout<<"\n\nMin Heap"<<endl;
    // Min-heap -> Minimum Value -> Highest Priority
    priority_queue<int, vector<int>, greater<int> > mpq;


    mpq.push(100);
    // 100
    mpq.push(450);
    // 450 , 100
    mpq.push(300);
    // 300 , 450 , 100
    mpq.push(400);
    // 400 , 300 , 450 , 100

    // Top Element --> Highest Priority Element
    cout<<"Top Element : "<<mpq.top()<<endl; // 100

    mpq.pop();
    cout<<"Top Element : "<<mpq.top()<<endl; // 300


    return 0;
}