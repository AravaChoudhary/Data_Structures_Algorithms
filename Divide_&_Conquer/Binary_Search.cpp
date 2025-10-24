#include<iostream>

using namespace std;

int BinarySearch(vector<int> arr, int start, int end, int target) {

    if(start > end)
        return -1;

    int mid = start + (end - start) / 2;

    if(arr[mid] == target)
        return mid;

    if(target > arr[mid])
        BinarySearch(arr, mid + 1, end, target);
    else
        BinarySearch(arr, start, mid - 1, target);
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

    cout<<"\nEnter the Target : ";
    cin>>target;

    cout<<"\nBinary Search"<<endl;
    int ans = BinarySearch(arr, 0, (n - 1), target);
    if(ans == -1)
        cout<<"Target NOT FOUND\n";
    else
        cout<<"Target FOUND at index "<<ans<<endl;

    return 0;
}


// Time Complexity -> O(log n)
// Space Complexity -> O(log n)