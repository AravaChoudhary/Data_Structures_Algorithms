#include<iostream>

using namespace std;

int ReturnUnique(int arr[] , int n)
{
    int i = 1, j = 0;

    while(i < n)
    {
        if(arr[i] == arr[j])
            i++;
        else
            arr[++j] = arr[i++];
    }

    return j + 1;
}

int main()
{
    int arr[] = {0,0,1,1,1,2,2,3,3,4};
    int size = 10;

    cout<<"\nTWO POINTER Approach\n";
    cout<<"Number of Unique Elements : ";
    cout<<ReturnUnique(arr,size)<<endl;

    return 0;
}

// LeetCode - 26.