#include<iostream>
#include<queue>

using namespace std;

int main()
{
    // Creation
    queue<int> q;

    // Insertion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<"Size : "<<q.size()<<endl;

    q.pop();
    cout<<"Size : "<<q.size()<<endl;

    cout<<"Front -> "<<q.front()<<endl;
    cout<<"Back -> "<<q.back()<<endl;

    if(q.empty() == true) {
        cout<<"Queue is Empty"<<endl;
    } else {
        cout<<"Queue is NOT Empty"<<endl;
    }

    cout<<"Swapping"<<endl;
    queue<int> first;
    queue<int> second;

    first.push(10);
    first.push(20);
    first.push(30);
    first.push(40);

    second.push(11);
    second.push(12);
    second.push(13);
    second.push(14);

    first.swap(second);
    cout<<first.front()<<" "<<first.back()<<endl;

    return 0;
}