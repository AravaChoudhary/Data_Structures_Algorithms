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

int main()
{
    vector<int> nums;
    nums.push_back(9);
    nums.push_back(6);
    nums.push_back(4);
    nums.push_back(2);
    nums.push_back(3);
    nums.push_back(5);
    nums.push_back(7);
    nums.push_back(0);
    nums.push_back(1);

    cout<<"The Missing Number is : "<<BinarySearchApproach(nums)<<endl;

    return 0;
}

// LeetCode --> 268