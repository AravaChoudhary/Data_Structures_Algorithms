#include<iostream>
#include<numeric>

using namespace std;

// Approach
// 1) Sum the elements of the array
// 2) if(sum % 2 != 0) --> Return FALSE
// 3) Target Sum = sum / 2 
// 4) Find a SubSet with 
//     Subset Sum = sum / 2

bool Solve(vector<int>& nums, int target, int i) {

    int n = nums.size();

    if(target < 0 or i == n)
        return false;

    if(target == 0)
        return true;

    bool include = Solve(nums, target - nums[i], i + 1);
    bool exclude = Solve(nums, target, i + 1);

    return (include or exclude);
}


bool canPartition(vector<int>& nums) {

    int sum = accumulate(nums.begin(), nums.end(), 0);

    if(sum % 2 != 0)    // Odd Sum -> Array can't be devided
        return false;
        
    int target = sum >> 1;

    return Solve(nums, target, 0);
}


int main() {

    int n;
    cout<<"\nEnter the Size of Array : ";
    cin>>n;

    vector<int> nums;
    cout<<"\nEnter the Array : ";
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        nums.push_back(value);
    }

    int ans = canPartition(nums);
    if(ans == 1)
        cout<<"\nPartition can be Done"<<endl;
    else
        cout<<"\nPartition can't be Done"<<endl;

    return 0;
}

// Done with the Recursive Approach - Time Complexity can be improved using Dynamic Programming Approach.

// Time Complexity -> O(2^n)
// Space Complexity -> O(n)

// LeetCode - 416.