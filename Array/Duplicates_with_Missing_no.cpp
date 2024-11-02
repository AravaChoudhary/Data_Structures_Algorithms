#include<iostream>

using namespace std;

void Duplicates_with_Missing_no(int *arr , int n)
{
    for(int i = 0; i < n; i++)
    {
       int idx = abs(arr[i]);
       if(arr[idx - 1] > 0)
       {
            // Mark as Visited
            arr[idx - 1] = arr[idx - 1] * (-1);
       }

       for(int i = 0; i < n; i++)
       {
        if(arr[i] > 0)
            cout<<i + 1<<" ";
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

    Duplicates_with_Missing_no(arr , n);


    return 0;
}