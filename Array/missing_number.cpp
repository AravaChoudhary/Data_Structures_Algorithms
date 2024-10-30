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

int main()
{
    int arr[] = {9,6,4,2,3,5,7,0,1};
    int size = 9;

    cout<<"Missing Number is : ";
    cout<<SortingMethod(arr,size)<<endl;
    return 0;
}