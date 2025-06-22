#include<iostream>
#include<algorithm>
using namespace std;

void Sort_0s_and_1s(int arr[] , int n)
{
    int zerocount = 0;
    int onecount = 0;

    //counting
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == 0)
            zerocount++;
        else
            onecount++;
    }

    //Insertion
    int i = 0;
    for(i; i < zerocount; i++)
    {
        arr[i] = 0;
    }

    for(i; i < n; i++)
    {
        arr[i] = 1;
    }

    // Can also use fill function
    // fill(arr, arr + zerocount, 0);
    // fill(arr + zerocount, arr + n, 1);

}

int main()
{
    int arr2[] = {0,1,1,1,0,0,1,1};
    int size2 = 8;

    cout<<"Sorted 0s & 1s using sort function : ";
    sort(arr2, arr2+size2); // TC --> O(n logn)

    for(int i = 0; i < size2; i++)
    {
        cout<<arr2[i];
    }

    cout<<"\nSorted 0s & 1s : ";
    Sort_0s_and_1s(arr2,size2);
    for(int i = 0;i<size2;i++)
    {
        cout<<arr2[i];
    }
}

// LeetCode - 75