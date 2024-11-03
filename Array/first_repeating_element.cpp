#include<iostream>

using namespace std;

int FirstRepeating(int arr[] , int n) // TC --> O(n^2)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(arr[i] == arr[j])
            {
                return i + 1;
            }
        }
    }

    return -1;
}

int Optimized(int arr[] , int n) // TC --> O(n) & SC --> O(n)
{
    unordered_map<int , int> hash;

    for(int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for(int i = 0; i < n; i++)
    {
        if(hash[arr[i]] > 1)
        {
            return i + 1;
        }
    }

    return -1;
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

    cout<<"First Reapeting Element is at index : "<<FirstRepeating(arr,n)<<endl;
    cout<<"First Reapeting Element is at index : "<<Optimized(arr,n)<<endl;

    return 0;
}