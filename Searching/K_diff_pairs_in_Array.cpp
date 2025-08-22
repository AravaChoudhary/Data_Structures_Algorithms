#include<iostream>
#include<vector>
#include<set>

using namespace std;

int TwoPointerApproach(vector<int>& arr, int k) {

    int n = arr.size();
    int i = 0, j = 1;
    sort(arr.begin(), arr.end());

    set<pair<int,int>> ans;

    while(j < n) {

        int diff = arr[j] - arr[i];
        
        if(diff == k) {
            ans.insert({arr[i], arr[j]});
            i++;
            j++;
        }
        
        else if(diff > k)
            i++;
        
        else
            j++;

        if(i == j)
            j++;
    }

    return ans.size();

}


int BinarySearch(vector<int>& arr, int start, int x) {

    int n = arr.size();
    int end = n - 1;

    while(start <= end) {

        int mid = start + (end - start) / 2;

        if(arr[mid] == x)
            return mid;

        else if(x > arr[mid])
            start = mid + 1;

        else
            end = mid - 1;
    }

    return -1;
}

int BinarySearchApproch(vector<int>& arr, int k) {

    int n = arr.size();
    sort(arr.begin(), arr.end());

    set<pair<int,int>> ans;

    for(int i = 0; i < n; i ++) {

        if(BinarySearch(arr, i + 1, arr[i] + k) != -1)
            ans.insert({arr[i] , arr[i] + k});        
    }

    return ans.size();
}


int main() {

    vector<int> arr;
    int n, k;

    cout<<"K-Diff Pairs in an Array"<<endl;

    cout<<"\nEnter the Array Size : ";
    cin>>n;
    
    cout<<"Enter the Array Elements : "<<endl;
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }

    cout<<"\nEnter K : ";
    cin>>k;


    cout<<"\nTwo Pointer Approach"<<endl;
    cout<<"The number of Unique K-Diff pairs in the array : "<<TwoPointerApproach(arr, k)<<endl;

    cout<<"\nBinary Search Approach"<<endl;
    cout<<"The number of Unique K-Diff pairs in the array : "<<BinarySearchApproch(arr, k)<<endl;

    return 0;

}

// LeetCode - 532.