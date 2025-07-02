#include<iostream>

using namespace std;

double bruteforce(int arr[] , int n , int k)
{
    int maxSum = INT_MIN;
    int i = 0, j = k - 1;

    while( j < n)
    {
        int sum = 0;

        for(int y = i; y <= j; y++)
        {
            sum = sum + arr[y];
        }

        maxSum = max(maxSum , sum);

        i++;
        j++;
    }

    double maxAvg = (double)maxSum / k;
    return maxAvg;
}

double optimized(int arr[] , int n , int k)
{
     // Double Sliding Window Method
    int sum = 0;
    int i = 0 , j = k - 1;

    for(int y = i; y <= j; y++)
    {
        sum = sum + arr[y]; 
    }

    int maxSum = sum;
    j++; 

    //here if j goes out of bound then while loop will not run
    while(j < n)
    {
        sum = sum - arr[i];
        sum = sum + arr[j];
        i++;
        j++;
        maxSum = max(maxSum , sum);
    }
 
    double maxAvg = (double)maxSum / k;
    return maxAvg;
}

int main()
{
    int arr[] = {1,12,-5,-6,50,3};
    int size = 5 , k = 4;

    cout<<"\nBrute Force Approach"<<endl;  // TC --> O(nlogn)
    cout<<"Max Average is : ";
    cout<<bruteforce(arr,size,k)<<endl;

    cout<<"\nOptimezed Approach"<<endl; // TC --> O(n)
    cout<<"Missing Number is : ";
    cout<<optimized(arr,size,k)<<endl;

    return 0;
}

// LeetCode - 643. 