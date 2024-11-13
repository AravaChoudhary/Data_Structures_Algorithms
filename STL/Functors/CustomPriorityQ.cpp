#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>

using namespace std;

class Student {
public:
    string name;
    int age;

    Student(){}

    Student(string n , int a) {
        this->name = n;
        this->age = a;
    }
};

class comparator {
public:
    bool operator()(Student a , Student b) {
        // Max Age, High Priority
        // return a.age < b.age;

        // Min Age
        return a.age > b.age;

    }
};

int main()
{
    priority_queue<Student,vector<Student>,comparator> pq;

    pq.push(Student("Arava",20));
    pq.push(Student("Nainika",21));
    pq.push(Student("Naina",26));
    pq.push(Student("Ambra",26));

    cout<<"Name  Age"<<endl;
    cout<<pq.top().name<<" "<<pq.top().age<<endl;

    // priority_queue<int> pq; // max-heap
    // priority_queue<int,vector<int>,greater<int>> pq2; // min-heap
    return 0;
}