#include<iostream>

using namespace std;

int main() {


    int a = 5;
    cout<<a<<endl;

    int b = a;
    cout<<b<<endl;

    // int c = &a;
    // cout<<c<<endl;

    cout<<"\nPointers"<<endl;

    // int *ptr = &a;
    // cout<<a<<endl;
    // cout<<&a<<endl;
    // cout<<ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*ptr<<endl;   // #ptr --> value at ptr --> value at address stored in ptr, it is called. Derefrence operator.


    int *ptr = &a;
    cout<<sizeof(ptr)<<endl;

    char ch = 'a';
    char *cptr = &ch;
    cout<<sizeof(cptr)<<endl;

    long l = 1040;
    long *lptr = &l;
    cout<<sizeof(lptr)<<endl;


    // Not a godd practice --> Segmentation Fault.
    // int *ptrg;
    // cout<<*ptrg<<endl;

    int *ptr = 0;   // Null Pointer
    
    return 0;
}