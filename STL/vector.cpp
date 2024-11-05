#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> marks;
    // marks.reserve(10); // We can reserve the Capacity of the vector , here , it's 10

    marks.push_back(10);
    marks.push_back(20);
    marks.push_back(30);
    marks.push_back(40);
    marks.push_back(50);
    marks.push_back(60);

    marks.insert(marks.begin() , 50);

    // marks.clear();  Removes all the elements of the vector and makes it clear
    //  marks.erase(marks.begin() , marks.end()); Erase all the values in the vector from begin to end

    cout<<"Capacity : "<<marks.capacity()<<endl;

    cout<<"Size : "<<marks.size()<<endl;

    cout<<"Max Size : "<<marks.max_size()<<endl;

    cout<<marks[0]<<endl;
    cout<<marks.at(0)<<endl;

    if(marks.empty() == true)
    {
        cout<<"Vector is Empty"<<endl;
    } else {
        cout<<"Vector is NOT Empty"<<endl;
    }

    marks.pop_back();
    cout<<"Size : "<<marks.size()<<endl;

    
    vector<int> miles(10);
    vector<int> distance(15,0);
    cout<<*(distance.begin())<<endl;


    cout<<"\nSwapping of two vectors\n"<<endl;
    
    vector<int> first;
    vector<int> second;

    first.push_back(10);
    first.push_back(11);
    first.push_back(12);
    first.push_back(13);
    first.push_back(14);
    first.push_back(15);

    second.push_back(10);
    second.push_back(20);
    second.push_back(30);
    second.push_back(40);
    second.push_back(50);
    second.push_back(60);

    first.swap(second);

    cout<<"First Vector : ";
    for(int i : first) {
        cout<<i<<" ";
    }

    cout<<endl;

    cout<<"Second Vector : ";
    for(int i : second) {
        cout<<i<<" ";
    }

    // Traversing The Vector
    cout<<"\n\nTraversing the Vector using an Iterator"<<endl;
    // 1) Create an Iterator
    vector<int>::iterator it = marks.begin();
    
    while(it <= marks.end()) {
        cout<<*it<<" ";
        it++;
    }

    return 0;
}