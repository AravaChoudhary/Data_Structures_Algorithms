#include<iostream>

using namespace std;

// There are two types of Memory
// Stack Memory --> Stores temporary variable and smaller in size
// Heap Memory --> Larger memory and stores large size data structures.
//  new and delete keywords are used for allocation and deallocation of the memory.
//  example --> new int -> when i am creating this it gives an address, so it has to 
//              be stored in a pointer, so this is one of the use case of pointers.

int main() {

    cout<<"\nInteger"<<endl;
    cout<<"\nStack Memory"<<endl;
    int a = 5;
    cout<<a<<endl;
    
    cout<<"\nHeap Memory"<<endl;
    int * ptr = new int;
    *ptr = 5;
    cout<<*ptr<<endl;
 
    delete ptr;     // Deallocated using delete keyword.
    
    cout<<"\nArray"<<endl;
    cout<<"\nStack Memory"<<endl;
    int arr[5] = {0};
    cout<<arr[0]<<arr[1]<<arr[2]<<endl;

    cout<<"\nHeap Memory"<<endl;
    int * brr = new int[5];
    cout<<brr[0]<<brr[1]<<brr[2]<<endl;


    cout<<"\n2D - Array"<<endl;
    cout<<"\nStack Memory"<<endl;
    // int arr[2][4] = {
    //                     {2,4,6,8},
    //                     {1,2,3,4}
    //                 };

    cout<<"\nHeap Memory"<<endl;
    // 4 rows and 3 columns
    int * * array = new int * [4];
    for(int i = 0; i < 4; i++)
        array[i] = new int[3];  // create one 1D Array for each pointer  

    // taking input
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++)
            cin>>array[i][j];
    }

    // Printing 2D Array
    cout<<"\nPrinting 2D Array"<<endl;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 3; j++)
            cout<<array[i][j]<<" ";
        cout<<endl;
    }

    // Deallocation
    for(int i = 0; i < 4; i++)
        delete [] array[i];

    return 0;
}






