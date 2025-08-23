#include<iostream>
#include<vector>

using namespace std;

int BinarySearch(vector<int> arr, int start, int end, int x) {

    while(start <= end) {

        int mid = start + (end - start) / 2;

        if(arr[mid] == x)
            return mid;

        else if(arr[mid] > x)
            end = mid - 1;
        
        else
            start = mid + 1;
    }

    return -1;
}

int ExponentialSearch(vector<int>& arr, int x) {

    int n = arr.size();

    if(arr[0] == x)
        return 0;

    int i = 1;

    while(i < n and arr[i] <= x)
        i = i * 2;        

    return BinarySearch(arr, (i / 2), min(i , n - 1), x);

}

int main() {

    vector<int> arr;
    int n, x;

    cout<<"\nExponential Search"<<endl;

    cout<<"\nEnter the Array Size : ";
    cin>>n;
    
    cout<<"Enter the Array Elements : "<<endl;
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }

    cout<<"\nEnter the element that you wanna Search : ";
    cin>>x;

    int ans = ExponentialSearch(arr, x);
    cout<<"\nElement Found at Index : "<<ans<<endl;

    return 0;

}

// Time Complexity --> O( log (2^(log m - 1)))