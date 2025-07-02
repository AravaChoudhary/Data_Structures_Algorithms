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

// int main() {
//     int arr[] = {10,20,30,40,50,60};
//     int size = 6;
//     int shift = 4; // Cyclically Rotate the Array by 2 places
    
//     cout<<"\nBefore Shifting : \n";
//     for(int i = 0; i < size ; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     rotateArray(arr,size,shift);

//     cout<<"\n\nAfter Shifting : \n";
//     for(int i = 0; i < size ; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
//     return 0;
// }


int SortingMethod(int arr[], int n) {

    int ans = n;
    sort(arr, arr + n);

    for(int i = 0; i < n; i++) {
        if(i == arr[i])
            continue;
        else
            return i;
    }

    return ans;
}

int XOR(int arr[], int n) {

    int ans = 0;

    for(int i = 0; i < n; i++) {
        ans = ans ^ arr[i];
    }

    for(int i = 0; i <= n; i++) {
        ans = ans ^ i;
    }

    return ans;
}


// int main() {

//     int arr[] = {9,6,4,2,3,5,7,0,1};
//     int size = 9;

//     cout<<"\nSorting Method"<<endl;  // TC --> O(nlogn)
//     cout<<"Missing Number is : ";
//     cout<<SortingMethod(arr,size)<<endl;

//     cout<<"\nOptimezed Approach"<<endl; // TC --> O(n)
//     cout<<"Missing Number is : ";
//     cout<<XOR(arr,size)<<endl;
//     return 0;

//     return 0;
// }

int ReturnUnique(int arr[], int n) {

    int i = 1, j = 0;

    while(i < n) {
        
        if(arr[i] == arr[j])
            i++;
        else {
            j++;
            arr[j] = arr[i];
            i++;
        }
    }

    return j + 1;
}

double bruteforce(int arr[], int n, int k) {

    int max_sum = INT_MIN;
    int i = 0, j = k - 1;

    while(j < n) {

        int sum = 0;

        for(int y = i; y <= j; y++) {
            sum = sum + arr[y];
        }

        max_sum = max(max_sum, sum);

        i++;
        j++;
    }

    double max_avg = double(max_sum) / k;
    return max_avg; 

}

double optimized(int arr[], int n, int k) {

    int sum = 0;
    int i = 0, j = k - 1;

    for(int y = i; y <= j; y++) {
        sum = sum + arr[y];
    }

    int max_sum = sum;
    j++;


    while(j < n) {

        sum = sum - arr[i];
        sum = sum + arr[j];
        i++;
        j++;
        max_sum = max(max_sum, sum);
    }

    double maxAvg = (double)max_sum / k;
    return maxAvg;

}


int main()
{
    int arr[] = {1,12,-5,-6,50,3};
    int size = 5 , k = 4;

    cout<<"\nBrute Force Approach"<<endl;  // TC --> O(nlogn)
    cout<<"Max Average is : ";
    cout<<bruteforce(arr,size,k)<<endl;

    cout<<"\nOptimezed Approach"<<endl; // TC --> O(n)
    cout<<"Max Average is : ";
    cout<<optimized(arr,size,k)<<endl;

    return 0;
}