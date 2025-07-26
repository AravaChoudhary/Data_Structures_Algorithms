#include<iostream>
#include<vector>

using namespace std;

int BinarySearchApproach(vector<int> nums) {
    int n = nums.size();
    int s = 0;
    int l = n - 1;
    sort(nums.begin() , nums.end());
    int ansIdx = -1;

    while(s <= l) {
        int mid = s + (l - s) / 2;
        int number = nums[mid];
        int idx = mid;
        int diff = number - idx;

        if(diff == 0) {
            // go to right
            s = mid + 1;
        }
        else if(diff == 1) {
            //possibily it can be ans , so using store and compute
            ansIdx = idx;
            l = mid - 1;
        }
    }

    if(ansIdx == -1)
        return n;
    return ansIdx;
}

int MathematicalApproach(vector<int> nums) {

    int n = nums.size();
    // int total_sum = n * (n + 1) / 2;

    int total_sum = ((n + 1) * (nums[0] + nums[n - 1])) / 2;

    int sum_ip = 0;
    for(int i = 0; i < n; i++)
        sum_ip += nums[i];

    int ans = total_sum - sum_ip;
    
    return ans;
}

int TryApproach(vector<int> nums) {
    int n = nums.size();
    int s = 0;
    int l = n - 1;
    sort(nums.begin() , nums.end());
    int ansIdx = -1;

    while(s <= l) {
        int mid = s + (l - s) / 2;
        int number = nums[mid];
        int idx = mid;
        int diff = number - idx;

        if(number == idx) {
            // go to right
            s = mid + 1;
        }
        else if(number > idx) {
            //possibily it can be ans , so using store and compute
            ansIdx = idx;
            l = mid - 1;
        }
    }

    if(ansIdx == -1)
        return n;
    return ansIdx;
}


int main()
{
    vector<int> nums;
    nums.push_back(8);
    nums.push_back(6);
    nums.push_back(4);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(9);
    nums.push_back(7);
    nums.push_back(0);
    nums.push_back(1);

    cout<<"The Missing Number is : "<<BinarySearchApproach(nums)<<endl;
    cout<<"The Missing Number is : "<<MathematicalApproach(nums)<<endl;
    cout<<"The Missing Number is : "<<TryApproach(nums)<<endl;

    return 0;
}

// LeetCode --> 268