#include<iostream>
#include<vector>

using namespace std;

vector<int> TwoPointerApproach(vector<int>& arr, int k, int x) {

    int n = arr.size();
    int low = 0, high = n - 1;
    
    while(high - low >= k) {
        
        if(x - arr[low] > arr[high] - x)
            low++;
        else
            high--;
    }


    vector<int> ans;
    for(int i = low; i <= high; i++)
        ans.push_back(arr[i]);

    return ans;

}

int LowerBound(vector<int>& arr, int x) {

    int n = arr.size();
    int start = 0, end = n - 1;
    int ans = end;

    while(start <= end) {

        int mid = start + (end - start) / 2;

        if(arr[mid] >= x) {
            ans = mid;
            end = mid - 1;
        }

        else if(arr[mid] < x)
            start = mid + 1;
        else
            end = mid - 1;
    }

    return ans;

}

vector<int> BinarySearchApproach(vector<int>& arr, int k, int x) {

    int n = arr.size();

    //Lower Bound
    int high = LowerBound(arr, x);
    int low = high - 1;

    while(k--) {

        if(low < 0)
            high++;

        else if(high >= n)
            low--;

        else if(x - arr[low] > arr[high] - x)
            high++;
        else
            low--;
    }

    vector<int> ans;
    for(int i = low + 1; i <= high - 1; i++)
        ans.push_back(arr[i]);

    return ans;
}

void print(vector<int>& arr) {

    for(int i = 0; i < arr.size(); i++)
        cout<<arr[i];
    cout<<endl;

}

int main() {

    vector<int> arr;
    int n, k, x;

    cout<<"\nK-Diff Pairs in an Array"<<endl;

    cout<<"\nEnter the Array Size : ";
    cin>>n;
    
    cout<<"Enter the Array Elements : "<<endl;
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }

    cout<<"\nEnter K : ";
    cin>>k;

    cout<<"\nEnter x : ";
    cin>>x;


    cout<<"\nTwo Pointer Approach"<<endl;
    cout<<k<<" elements closest to "<<x<<" are : ";
    
    vector<int> ans_tpa;
    ans_tpa = TwoPointerApproach(arr, k, x);
    print(ans_tpa);



    cout<<"\nBinary Search Approach"<<endl;
    cout<<k<<" elements closest to "<<x<<" are : ";

    vector<int> ans_bsa;
    ans_bsa = BinarySearchApproach(arr, k, x);
    print(ans_bsa);

    return 0;

}

// LeetCode - 658.