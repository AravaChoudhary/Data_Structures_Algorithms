#include<iostream>
#include<vector>

using namespace std;

void SelectionSort(vector<int>& arr, int n) {

    for(int i = 0; i < n; i++) {
        
        int min_idx = i; // ith element is the smallest elemet.

        for(int j = i + 1; j < n; j++) {
            
            if(arr[j] < arr[min_idx])
                min_idx = j;
        }

        // Swap ith and min_idx element
        swap(arr[i], arr[min_idx]); 

    }
}


int main() {

    vector<int> arr;
    int n;

    cout<<"\n SELECTION SORT"<<endl;

    cout<<"\nEnter the Array Size : ";
    cin>>n;
    
    cout<<"Enter Array Elements : "<<endl;
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }

    cout<<"\n After Sorting"<<endl;
    SelectionSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<endl;
    }
    
    return 0;

}

// Time Complexity --> O(N^2)
// Space Complexity --> O(1)
