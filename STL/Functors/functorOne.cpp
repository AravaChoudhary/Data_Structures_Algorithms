// Functor --> Funtion Object is called a Functor
#include<iostream>

using namespace std;

class functorOne {
public:
    bool operator()(int a , int b) {
        return a > b;
    }
};

int main()
{
    functorOne cmp;

    if(cmp(23,22) == true) {
        cout<<"23 is greater than 22"<<endl;
    } else {
        cout<<"23 is smaller than 22"<<endl;
    }

    return 0;
}