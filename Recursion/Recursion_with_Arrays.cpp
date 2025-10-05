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


void Maxiumum_in_Array(int arr[], int size, int index, int &max_element) {

    // Base Case
    if(index == size)
        return ;

    // Recursive Call
    // Ek case mera
    max_element = max(max_element, arr[index]);
    // Baaki sab Recursion karega
    Maxiumum_in_Array(arr, size, index + 1, max_element); 
}


void Minimum_in_Array(int arr[], int size, int index, int &min_element) {

    // Base Case
    if(index == size)
        return ;

    // Recursive Call
    // Ek case mera
    min_element = min(min_element, arr[index]);
    // Baaki sab Recursion karega
    Minimum_in_Array(arr, size, index + 1, min_element); 
}


void printAllOdds(int arr[], int size, int index) {

    // Base Case
    if(index == size)   
        return ;

    if(arr[index] & 1)
        cout << arr[index] << " ";

    // Recursive Call
    printAllOdds(arr, size, index + 1);
}


void printAllEvens(int arr[], int size, int index) {

    // Base Case
    if(index == size)   
        return ;

    if((arr[index] % 2) == 0)
        cout << arr[index] << " ";

    // Recursive Call
    printAllEvens(arr, size, index + 1);
}


int main() {

    int arr[] = {11, 20, 35, 40, 50, 67, -34, 564};
    int size = 8;
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


    int max_element = INT_MIN;
    Maxiumum_in_Array(arr, size, index, max_element);
    cout<<"\nMaximum Element of the Array is "<<max_element<<endl;

    int min_element = INT_MAX;
    Minimum_in_Array(arr, size, index, min_element);
    cout<<"\nMinimum Element of the Array is "<<min_element<<endl;

    cout<<"\nPrinting All Odds"<<endl;
    printAllOdds(arr, size, index);

    cout<<"\nPrinting All Evens"<<endl;
    printAllEvens(arr, size, index);
 
    return 0;
}