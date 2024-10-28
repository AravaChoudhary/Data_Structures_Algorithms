#include<iostream>
#include<algorithm>
using namespace std;


int FindUniqueNumber(int arr[] , int n)
{
    int ans = 0;

    for(int i = 0;i<n;i++)
    {
        ans = ans ^ arr[i];
    }

    return ans;
}


int main()
{
    int arr[] = {2,4,1,4,1};
    int size = 5;

    int ans = FindUniqueNumber(arr,size);
    cout<<"Unique Number is : "<<ans<<endl;
}