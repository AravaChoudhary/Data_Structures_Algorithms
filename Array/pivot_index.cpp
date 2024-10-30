#include<iostream>
using namespace std;

int PivotIndex(int arr[] , int n )
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

int main()
{
    int arr[] = {1,7,3,6,5,6};
    int size = 6;

    PivotIndex(arr,size);
    return 0;
}