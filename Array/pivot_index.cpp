#include<iostream>
using namespace std;

int brute_force(int arr[] , int n )
{
    int k;
    for(k = 0; k < n; k++)
    {
        int lsum = 0;
        int rsum = 0;

        for(int i = 0; i <= (k - 1); i++)
        {
            lsum = lsum + arr[i];
        }

        for(int j = k + 1; j <= (n-1); j++)
        {
            rsum = rsum + arr[j];
        }

        // cout<<lsum<<" "<<rsum<<endl;

        if(rsum == lsum)
            return k;
    }
    return -1;
}

int prefix_sum_approach(int arr[], int n) {

    vector<int> lsum(n,0);
    vector<int> rsum(n,0);

    for(int i = 1; i < n; i++) {
        lsum[i] = lsum[i - 1] + arr[i - 1];
    }

    for(int i = n - 2; i >= 0; i--) {
        rsum[i] = rsum[i + 1] + arr[i + 1]; 
    }    

    for(int i = 0; i< n; i++)
    {
        if(lsum[i] == rsum[i]) 
            return i;
    }

    return -1;

}

int main()
{
    int arr[] = {1,7,3,6,5,6};
    int size = 6;

    cout<<"\nBrute Force\nPivot Index is : ";
    cout<<brute_force(arr, size)<<endl;

    cout<<"\nOptimized\nPivot Index is : "; 
    cout<<prefix_sum_approach(arr, size)<<endl;

    return 0;
}

// LeetCode - 724.