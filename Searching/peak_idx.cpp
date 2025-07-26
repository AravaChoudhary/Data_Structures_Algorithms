#include<iostream>
#include<vector>

using namespace std;

int bruteforce(vector<int> arr , int n) {
    
    int max = INT_MIN;
    int max_idx = -1;

    for(int i = 0; i < n; i++) {
        if(arr[i] > max) {
            max = arr[i];
            max_idx = i;
        }
    }

    return max_idx;
} 

int optimized(vector<int> arr , int n) {

    int s = 0;
    int l = n - 1;
    int mid;

    while(s < l) {
        mid = s + (l - s) / 2;

        // Moving Towards --> Right 
        if(arr[mid] < arr[mid + 1]) {
            s = mid + 1; 
        } else { //(arr[mid] > arr[mid + 1]) --> I am on answer OR answer is on left
            l = mid;
        }
    }

    return s;
}

int Store_and_Compute(vector<int>& arr , int n) {

    int s = 0;
    int l = n - 1;
    int mid;
    int ans_idx = -1;

    while(s <= l) {
        mid = s + (l - s) / 2;

        // Moving Towards --> Right 
        if(arr[mid] < arr[mid + 1]) {
            s = mid + 1; 
        } else { 
            ans_idx = mid; // Storing the Answer
            l = mid - 1;
        }
    }

    return ans_idx;
}

int main()
{
    vector<int> arr;
    int n;

    cout<<"Enter the Array Size : ";
    cin>>n;
    
    cout<<"Enter Array Elements : "<<endl;
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }

    cout<<"Brute Force Approach\nPeak Element Index is : "<<bruteforce(arr,n)<<endl;
    cout<<"\nOptimized Approach\nPeak Element Index is : "<<optimized(arr,n)<<endl;
    cout<<"\nStore & Compute Approach\nPeak Element Index is : "<<Store_and_Compute(arr,n)<<endl;

    return 0;
}

// LeetCode --> 852.