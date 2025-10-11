#include<iostream>

using namespace std;

int Rob(vector<int> nums, int n, int i) {

    // Base Case
    if(i >= n)
        return 0;

    // Include
    int includeAns = nums[i] + Rob(nums, n, i + 2);

    // Exclude
    int excludeAns = 0 + Rob(nums, n, i + 1);

    return max(includeAns, excludeAns);
}


int main() {

    int n;
    cout<<"\nEnter the Number of Houses : ";
    cin>>n;

    vector<int> nums;
    cout<<"\nEnter the Money for each house : ";
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        nums.push_back(value);
    }

    int index = 0;
    int ans = Rob(nums, n, index);

    cout<<"\nMaximum Amount of money that can be Robbed is "<<ans<<endl;
    
    return 0;
}

// Done with the Recursion Approach - Time Complexity can be improved using Dynamic Programming Approach.

// Time Complexity -> O(2^n)
// Space Complexity -> O(n)

// LeetCode - 198.