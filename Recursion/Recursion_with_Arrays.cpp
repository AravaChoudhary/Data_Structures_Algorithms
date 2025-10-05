#include<iostream>

using namespace std;

void printArray(int arr[], int size, int index) {

    // Base Case
    if(index == size)    // Array se bahar aa gae ho
        return ;

    // Recursive Call
    cout<<arr[index]<<" ";
    printArray(arr, size, index + 1);
}


bool SearchArray(int arr[], int size, int index, int target) {

    // Base Case -> 2 Cases - Found or Not Found
    if(index == size)   // Not Found
        return false;

    if(arr[index] == target)    // Found at the index
        return true;

    // Recursive Call
    bool ans = SearchArray(arr, size, index + 1, target);
    return ans;
}





int main() {

    int arr[] = {10, 20, 30, 40, 50, 60};
    int size = 6;
    int index = 0;    // Start printing from this index

    cout<<"\nArray : ";
    printArray(arr, size, index);

    cout<<"\n\nSearching in Array"<<endl;
    int target;
    cout<<"\nEnter the Target : ";
    cin>>target;
    bool ans = SearchArray(arr,size, index, target);
    if(ans == 0)
        cout<<"\nTarget NOT FOUND\n";
    else
        cout<<"\nTarget FOUND\n";

    return 0;
}