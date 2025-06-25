#include<iostream>
using namespace std;

void printAllPairs(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        // for every i , we are looping variable j from start to end
        for(int j = 0;j<n;j++)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}

void variation_1(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j = i;j<n;j++)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;

        }
    }
}

void variation_2(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;

        }
    }
}

void variation_3(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}

void variation_4(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>=0;j--)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}

void variation_5(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=n-1;j>i;j--)
        {
            cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
        }
    }
}

void variation_6(int arr[] , int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            cout<<arr[i]<<","<<arr[j]<<endl;
        }
    }
}

int main()
{
    int arr[] = {10,20,30,40};
    int size = 4;

    cout<<"\nAll Pairs in the Array :  \n";
    printAllPairs(arr,size);

    cout<<"Variation 1 : \n";
    variation_1(arr,size);

    cout<<"Variation 2 : \n";
    variation_2(arr,size);

    cout<<"Variation 3 : \n";
    variation_3(arr,size);

    cout<<"Variation 4 : \n";
    variation_4(arr,size);

    cout<<"Variation 5 : \n";
    variation_5(arr,size);

    cout<<"Variation 6 : \n";
    variation_6(arr,size);
}