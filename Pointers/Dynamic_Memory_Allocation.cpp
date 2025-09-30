#include<iostream>

using namespace std;

// There are two types of Memory
// Stack Memory --> Stores temporary variable and smaller in size
// Heap Memory --> Larger memory and stores large size data structures.
//  new and delete keywords are used for allocation and deallocation of the memory.
//  example --> new int -> when i am creating this it gives an address, so it has to 
//              be stored in a pointer, so this is one of the use case of pointers.
int main() {

    cout<<"\nStack Memory"<<endl;
    int a = 5;
    cout<<a<<endl;
    
    cout<<"\nHeap Memory"<<endl;

    
    return 0;
}






