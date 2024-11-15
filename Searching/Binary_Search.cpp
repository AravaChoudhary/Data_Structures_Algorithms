#include<iostream>
#include<vector>

using namespace std;

int BinarySearch(vector<int>& nums , int target)
{
    int n = nums.size();
    int s = 0;
    int l = n - 1;
    // int mid = (s + l) / 2; 

    while(s <= l) {
        int mid = s + (l - s) / 2; // this should be used
        if(nums[mid] == target) {
            return mid;
        }
        else if(nums[mid] > target) {
            l = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);
    arr.push_back(60);
    arr.push_back(70);
    arr.push_back(80);

    int target;
    cout<<"Enter the Target : ";
    cin>>target;

    cout<<"Element Found at : "<<BinarySearch(arr,target)<<endl;
    return 0;
}