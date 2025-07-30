#include<iostream>
#include<vector>

using namespace std;

int BinarySearch(int s , int l, int target , vector<int> arr) {
    while(s <= l) {
        int mid = s + (l - s) / 2;

        if(target == arr[mid]) {
            return mid;
        }
        if(target > arr[mid]) {
            s = mid + 1;
        }
        else {
            l = mid - 1;
        }
    }

    return -1;
}

int getpivotIndex(vector<int>& arr) {
    int n = arr.size();
    int s = 0;
    int l = n - 1;

    while(s <= l) {
        int mid = s + (l - s) / 2;

        if(s == l) return s;

        if(arr[mid] > arr[mid + 1] and mid + 1 < n) {
            return mid;
        }
        else if(arr[s] > arr[mid]) {
            l = mid - 1; // Going to --> Left
        } 
        else {
            s = mid + 1; // Going to --> Right
        }
    }

    return -1;
}


int main()
{
    vector<int> arr;
    int n , target , ans;

    cout<<"SEARCHING IN A SORTED ROTATED ARRAY"<<endl;

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
    
    int pivotIndex = getpivotIndex(arr);
    cout<<"\nPivot Index is : "<<pivotIndex<<endl;

    // Line A - Index --> 0 to pivotIndex
    // Line B - Index --> pivotIndex to n - 1 

    // if Target lies inside line A then Search in Line A 
    if(target >= arr[0] and target <= arr[pivotIndex]) {
        ans = BinarySearch(0, pivotIndex, target, arr);
    }

    // if Target lies inside line B then Search in Line B
    else {
        ans = BinarySearch(pivotIndex + 1 , n - 1, target, arr);
    }

    cout<<"\nTarget is present at : "<<ans<<endl;

    return 0;
}

// LeetCode --> 33.