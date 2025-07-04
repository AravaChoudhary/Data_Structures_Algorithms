#include<iostream>

using namespace std;

void CountingMethod(int arr[] , int n) // TC --> O(n)
{
    int zeros,ones,twos;
    zeros = ones = twos = 0;

    // Counting Number of 0s , 1s & 2s
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
        {
            zeros++;
        }
        else if(arr[i] == 1)
        {
            ones++;
        }
        else {
            twos++;
        }
    }

    // Spreading ones , twos and zeros
    int i = 0;
    while(zeros--)
    {
        arr[i] = 0;
        i++;
    }

    while(ones--)
    {
        arr[i] = 1;
        i++;
    }

    while(twos--)
    {
        arr[i] = 2;
        i++;
    }
}

void  ThreePtrApproach(int arr[] , int n) // TC --> O(n)
{
    int l,m,h;
    l = m = 0, h = n - 1;

    while(m <= h)
    {
        if(arr[m] == 0)
        {
            swap(arr[l] , arr[m]);
            l++;
            m++;
        }
        else if(arr[m] == 1)
        {
            m++;
        }
        else {
            swap(arr[m] , arr[h]);
            h--;
        }
    }

}

int main()
{
    int n, arr[50];
    cout<<"\nEnter the Size of the Array : ";
    cin>>n;

    cout<<"\nEnter the Array Elements : \n";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    cout<<"\nCounting Method"<<endl;
    CountingMethod(arr,n);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    } cout<<endl;

    cout<<"\nThree Pointer Approach"<<endl;
    ThreePtrApproach(arr,n);
    for(int i = 0; i < n; i++)
    {
        cout<<arr[i]<<" ";
    } cout<<endl;

    return 0;
}


// LeetCode - 75. 