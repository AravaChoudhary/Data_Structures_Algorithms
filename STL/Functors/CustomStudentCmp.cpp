#include<iostream>
#include<vector>
#include<algorithm>

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

        if(a.age == b.age) {
            return a.name > b.name;
        }

        // return a.age < b.age; // Sorted on the basis of Age (Ascending)
        return a.age > b.age; // Descending
    }
};

int main()
{
    vector<Student> arr;
    arr.push_back(Student("Arava",20));
    arr.push_back(Student("Nainika",21));
    arr.push_back(Student("Naina",26));
    arr.push_back(Student("Ambra",26));

    sort(arr.begin(),arr.end(),comparator());
    cout<<"Name  Age"<<endl;
    for(Student a : arr) {
        cout<<a.name<<"  "<<a.age<<endl;
    }

    return 0;
}