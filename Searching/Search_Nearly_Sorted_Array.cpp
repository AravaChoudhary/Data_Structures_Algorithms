#include<iostream>
#include<vector>

using namespace std;

// Q. Given a sorted array arr[] of size N, some elements of array are moved to either of the adjacent
// positions, i.e., arr[i] may be present at arr[i+1] or arr[i-1] i.e. arr[i] can only be swapped with
// either arr[i+1] or arr[i-1]. The task is to search for an element in this array.

// Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 40
// Output: 2
// Explanation: Output is index of 40 in given array i.e. 2

// Input: arr[] =  {10, 3, 40, 20, 50, 80, 70}, key = 90
// Output: -1
// Explanation: -1 is returned to indicate the element is not present

int BinarySearchApproach(vector<int> arr, int target) {

    int n = arr.size();
    int s = 0 , l = n - 1, mid;

    while(s <= l) {
        mid = s + (l - s) / 2;

        if(target == arr[mid])
            return mid;

        if(target == arr[mid - 1])
            return mid - 1;
        
        if(target == arr[mid + 1])
            return mid + 1;
        

        if(target > arr[mid])
            s = mid + 2;
        else
            l = mid - 2;
    }

    return -1;

}

int main() {

    vector<int> arr;
    int n , target , ans;

    cout<<"SEARCHING IN A NEARLY SORTED ARRAY"<<endl;

    cout<<"\nEnter the Array Size : ";
    cin>>n;
    
    cout<<"Enter Array Elements : "<<endl;
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }

    cout<<"Enter The Target Value : ";
    cin>>target;

    ans = BinarySearchApproach(arr, target);
    cout << "Element Found at Index: " << ans << endl;

    return 0;
}