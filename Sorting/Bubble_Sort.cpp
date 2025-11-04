#include<iostream>
#include<vector>

using namespace std;

void BubbleSort(vector<int>& arr, int n) {

    for(int i = 0; i < n; i++) {

        for(int j = 0; j < (n - i - 1); j++) {

            if(arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}


void OptimizedBubbleSort(vector<int>& arr, int n) {

    int flag;

    for(int i = 0; i < n; i++) {

        flag = 0;
        for(int j = 0; j < (n - i - 1); j++) {

            if(arr[j] > arr[j + 1]) {

                swap(arr[j], arr[j + 1]);
                flag = 1;
            }
        }

        if(flag == 0)
            break;
    }
}


int main() {

    vector<int> arr;
    int n;

    cout<<"\n BUBBLE SORT"<<endl;

    cout<<"\nEnter the Array Size : ";
    cin>>n;
    
    cout<<"Enter Array Elements : "<<endl;
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }

    cout<<"\n After Sorting"<<endl;
    OptimizedBubbleSort(arr, n);

    for(int i = 0; i < n; i++) {
        cout<<arr[i]<<endl;
    }

    return 0;
}

// Time Complexity --> O(N^2)

// For Optimized Bubble Sort
    // i) Best Case : O(N)
    // ii) Worst Case : O(N^2)

// Space Complexity --> O(1)