#include<iostream>
using namespace std;

void rotateArray(int arr[], int n, int shift) {

    int final_shift = shift % n;

    if(final_shift == 0)
        return;

    // Copying
    int temp[100], idx = 0;

    for(int i = n - final_shift; i < n; i++) {
        temp[idx] = arr[i];
        idx++;
    }

    // Shifting
    for(int i= n - 1; i >= 0; i--) {
        if(i - final_shift >= 0)
            arr[i] = arr[i - final_shift];
    }

    // Temp arr --> Main Array remaining elements
    for(int i = 0; i < final_shift; i++) {
        arr[i] = temp[i];
    }


}

int main() {
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