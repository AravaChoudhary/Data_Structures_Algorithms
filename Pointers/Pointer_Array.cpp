#include<iostream>

using namespace std;

int main() {

    int arr[] = {10,20,30,40,50};
    int *ptr = arr;
    cout<<"\nHello Ptr : "<<ptr<<endl;
    cout<<arr + 1<<endl;

    cout<<"\nPointer to Character"<<endl;
    char ch[100] = "AravaChoudhary";
    cout<<"Base Address : "<<&ch<<endl;
    char *cptr = ch;
    
    cout<<"ch[0] : "<<ch[0]<<endl;
    cout<<"&cptr : "<<&cptr<<endl;
    cout<<"*cptr : "<<*cptr<<endl;
    cout<<"*(cptr + 3) : "<<*(cptr + 3)<<endl;
    cout<<"cptr : "<<cptr<<endl;    // Special Dhyaan Rakhna hai iska.
    cout<<"cptr + 3 : "<<(cptr + 3)<<endl;   

    cout<<"\n"<<endl;
    char race[100]="racecar";
    char *rtpr = &race[0];
    cout<<"race: "<<race<<endl;
    cout<<"&race: "<<&race<<endl;
    cout<<"*(race+3): "<<*(race+3)<<endl;
    cout<<"rtpr: "<<rtpr<<endl;
    cout<<"&rtpr: "<<&rtpr<<endl;
    cout<<"*(rtpr+3): "<<*(rtpr+3)<<endl;
    cout<<"rtpr+2: "<<rtpr+2<<endl;
    cout<<"*rtpr: "<<*rtpr<<endl;
    cout<<"rtpr+4: "<<rtpr+4<<endl;
   
    return 0;
}