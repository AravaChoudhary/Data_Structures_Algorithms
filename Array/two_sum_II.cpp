#include<iostream>

using namespace std;

vector<int> brute_force(vector<int> arr, int target) {

    int n = arr.size();

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(arr[i] + arr[j] == target)
                return {i + 1 , j + 1};
        }
    }

    return {};
}


vector<int> two_pointer_approach(vector<int> arr, int target) {
    
    int n = arr.size();

    int start = 0;
    int end = n - 1;

    while(start < end) {

        int sum = arr[start] + arr[end];

        if(sum == target)
            return {start + 1, end + 1};
        else if(sum < target)
            start++;
        else
            end--;
    }

    return {};
}


int main() {

    int n;
    cout<<"\nEnter the Size of the Array : ";
    cin>>n;

    vector<int> nums(n);
    cout<<"\nEnter a Sorted Array : \n";
    for(int i = 0; i < n; i++) {
        cin>>nums[i];
    }

    int target;
    cout<<"\nEnter the Target Value : ";
    cin>>target;

    vector<int> ans_bf;
    cout<<"\nBrute Force Approach\n";
    ans_bf = brute_force(nums, target);
    for(int i = 0; i < ans_bf.size(); i++) {
        cout<<ans_bf[i]<<" ";
    }

    vector<int> ans_tp;
    cout<<"\nTwo Pointer Approach\n";
    ans_tp = two_pointer_approach(nums, target);
    for(int i = 0; i < ans_bf.size(); i++) {
        cout<<ans_bf[i]<<" ";
    }

    return 0;
}

// LeetCode - 167.