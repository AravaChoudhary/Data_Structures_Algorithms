#include<iostream>
using namespace std;

void rotateArray(int arr[], int n, int shift)
{
    int final_shift = shift % n;

    if(final_shift == 0)
        return ; // no need to shift

    // Step 1 : copy last final_shift elements to a temp array
    int temp[10000];
    int index = 0;

    for(int i = n - final_shift; i < n; i++)
    {
        temp[index] = arr[i];
        index++;
    }

    // Step 2 : Shift Array elements by final_shift places
    for(int i = n - 1; i >= 0; i--)
    {
        if(i - final_shift >= 0)
        {
            arr[i] = arr[i - final_shift];
        }
    }

    // Step 3 : Copy temp elements into the Original Array
    for(int i = 0; i < final_shift; i++)
    {
        arr[i] = temp[i];
    }
}

int main()
{
    int arr[] = {10,20,30,40,50,60};
    int size = 6;
    int shift = 4; // Cyclically Rotate the Array by 2 places
    
    cout<<"\nBefore Shifting : \n";
    for(int i = 0; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    rotateArray(arr,size,shift);

    cout<<"\n\nAfter Shifting : \n";
    for(int i = 0; i < size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    
    return 0;
}

// LeetCode - 189.