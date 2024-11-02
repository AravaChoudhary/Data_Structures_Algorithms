#include<iostream>

using namespace std;

void moveNegative(int arr[] , int n)
{
    int l = 0 , h = n - 1;

    while(l < h)
    {
        if(arr[l] < 0)
        {
            l++;
        }
        else if(arr[h] > 0)
        {
            h--;
        }
        else {
            swap(arr[l] , arr[h]);
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

    cout<<"\nArray after Shifting -VE Numbers in the left"<<endl;
    moveNegative(arr,n);
    for(int i = 0; i < n ; i++)
    {
        cout<<arr[i]<<" ";
    } cout<<endl;


    return 0;
}