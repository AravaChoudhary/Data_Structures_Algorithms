#include<iostream>

using namespace std;

int SortingMethod(int arr[] , int n)
{
    int ans = n;
    sort(arr , arr + n);

    for(int i = 0; i < n; i++)
    {
        if(i == arr[i])
            continue;
        else
            return i;
    }
    return ans;
}

int XOR(int arr[] , int n)
    {
        int ans = 0;
        // 1) XOR all array values of nums[i]
        for(int i =0; i < n; i++)
        {
            ans ^= arr[i];
        }

        // 2) XOR all range items [0,N]
        for(int i = 0; i <= n; i++)
        {
            ans ^= i;
        }
        return ans;
    }

int main()
{
    int arr[] = {9,6,4,2,3,5,7,0,1};
    int size = 9;

    cout<<"\nBrute Force Approach"<<endl;  // TC --> O(nlogn)
    cout<<"Missing Number is : ";
    cout<<SortingMethod(arr,size)<<endl;

    cout<<"\nOptimezed Approach"<<endl; // TC --> O(n)
    cout<<"Missing Number is : ";
    cout<<XOR(arr,size)<<endl;
    return 0;
}