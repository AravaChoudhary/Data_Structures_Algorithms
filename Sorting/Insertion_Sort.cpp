#include<iostream>
#include<vector>

using namespace std;

void InsertionSort(vector<int>& arr, int n) {

    for(int i = 0; i < n; i++) {

        int key = arr[i];
        int j = i - 1;

        // Move the elements of the Array[0.....i - 1] that are Greater than Key to one position ahead of their current position
        while(j >= 0 and arr[j] > key) {

            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key; // Insertion is done here.
    }        

}


int main() {

    vector<int> arr;
    int n;

    cout<<"\n INSERTION SORT"<<endl;

    cout<<"\nEnter the Array Size : ";
    cin>>n;
    
    cout<<"Enter Array Elements : "<<endl;
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }

    cout<<"\n After Sorting"<<endl;
    InsertionSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<endl;
    }
    
    return 0;

}

// Time Complexity --> O(N^2)
// Space Complexity --> O(1)