#include<iostream>
#include<vector>
#include<unordered_map>
#include<map>
#include<algorithm>

using namespace std;

vector<int> bruteforce(vector<int> arr , int n) { // TC --> O(n^2)
    int break_point = (n / 3);
    vector<int> ans;
            
    for(int i = 0; i < n; i++) {
                
        int count = 0;
                
        for(int j = 0; j < n; j++) {
            if(arr[j] == arr[i]) 
                count++;
        }
        
        if (count > break_point && find(ans.begin(), ans.end(), arr[i]) == ans.end()) 
            ans.push_back(arr[i]);
    }
            
    sort(ans.begin() , ans.end());
    return ans;
}

vector<int> using_hash_map(vector<int>& arr , int n) {
    vector<int> ans;
    map<int,int> mpp;
    int break_pt = (int)(n / 3) + 1;

    for(int i = 0; i < n; i++) {
        mpp[arr[i]]++;
        if(mpp[arr[i]] == break_pt) {
            ans.push_back(arr[i]);
        }
        if(ans.size() == 2) break;
    }

    sort(ans.begin() , ans.end());
    return ans;
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

    cout<<"Brute Force Approach"<<endl;
    bruteforce(arr,n);

    cout<<"Optimized Approach"<<endl;
    using_hash_map(arr,n);

    return 0;
}

// LeetCode --> 229