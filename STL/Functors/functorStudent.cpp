#include<iostream>

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

// Functor
class StudentComparator {
public:
    bool operator()(Student a , Student b) {
        return a.age < b.age;
    }
};

int main()
{
    Student s1;
    Student s2;

    s1.age = 20;
    s1.name = "Arava";

    s2.age = 21;
    s2.name = "Nainika";

    StudentComparator scmp;

    if(scmp(s1,s2)) {
        cout<<"Arava is younger than Nainika";
    } else {
        cout<<"Nainika is younger than Arava";
    }
    cout<<endl;

    return 0;
}