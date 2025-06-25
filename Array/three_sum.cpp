#include<iostream>
using namespace std;

bool ThreeSum(int nums[], int n, int target)
{
    for(int i = 0; i < n; i++)
        {
            for(int j = i + 1; j < n ; j++)
            {
                for(int k = j + 1; k < n; k++)
                {
                    if(nums[i] + nums[j] + nums[k] == target)
                    {
                        cout<<nums[i]<<","<<nums[j]<<","<<nums[k]<<endl;
                    }
                }
        }
    }
}

int main()
{
    int arr[] = {10,20,30,40};
    int size = 4;
    int target = 70;

    cout<<"Three Sum : ";
    ThreeSum(arr,size,target);


    return 0;
}

// LeetCode - 15.