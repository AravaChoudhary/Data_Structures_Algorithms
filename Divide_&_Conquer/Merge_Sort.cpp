#include<iostream>

using namespace std;

void Merge(vector<int>& arr, int low, int mid, int high) {

    vector<int> temp;

    int left = low;
    int right = mid + 1;

    while(left <= mid and right <= high) {

        if(arr[left] <= arr[right]) {

            temp.push_back(arr[left]);
            left++;
        }

        else {
            temp.push_back(arr[right]);
            right++;
        }
    }

    while(left <= mid) {
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high) {
        temp.push_back(arr[right]);
        right++;
    }

    for(int i = low; i <= high; i++)
        arr[i] = temp[i - low];
}


void MergeSort(vector<int>& arr, int low, int high) {

    if(low < high) {

        int mid = (low + high) / 2;

        MergeSort(arr, low, mid);
        MergeSort(arr, mid + 1, high);
        Merge(arr, low, mid, high);
    }
}


int main() {

    int n, target;
    cout<<"\nEnter the Array size : ";
    cin>>n;

    cout<<"\nEnter Array Elements"<<endl;
    vector<int> arr;
    for(int i = 0; i < n ; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }

    MergeSort(arr, 0, (n - 1));

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

// Time Complexity -> O(n * log n)
// Space Complexity -> O(n)

// LeetCode - 912.