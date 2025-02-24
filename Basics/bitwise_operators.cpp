#include<iostream>

using namespace std;

int main() {
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    bool result = n & 1;
    if(result == 0)
        cout<<"Even Number"<<endl;
    else
        cout<<"Odd Number"<<endl;

    return 0;
}