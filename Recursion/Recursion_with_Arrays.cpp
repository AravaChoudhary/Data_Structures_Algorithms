#include<iostream>
#include<vector>

using namespace std;

void printArray(int arr[], int size, int index) {

    // Base Case
    if(index == size)    // Array se bahar aa gae ho
        return ;

    // Recursive Call
    cout<<arr[index]<<" ";
    printArray(arr, size, index + 1);
}

int main() {

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int index = 0;    // Start printing from this index

    cout<<"Array : ";
    printArray(arr, size, index);

    return 0;
}