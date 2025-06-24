#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void using_in_built_STL(vector<int>& arr) {
    int n = arr.size();

    cout<<"The Next Permutation will be : ";
    next_permutation(arr.begin() , arr.end());

    for(int i = 0 ; i < n; i++) {
        cout<<arr[i]<<" ";
    } cout<<endl;
}

// Implementing the next_permutation() function
void optimized(vector<int>& arr) {
    int n = arr.size();
    int idx = -1;

    for(int i = n - 2; i >=0; i--) {
        if(arr[i] < arr[i + 1]){
            idx = i;
            break;
        }
    }

    if(idx == -1) {
        reverse(arr.begin() , arr.end());
        return;
    }

    for(int i = n - 1; i >= idx; i--) {
        if(arr[i] > arr[idx]) {
            swap(arr[i] , arr[idx]);
            break;
        }
    }

    reverse(arr.begin() + (idx + 1) , arr.begin() + n);

    cout<<"The Next Permutation will be : ";
    for(int i = 0 ; i < n; i++) {
        cout<<arr[i]<<" ";
    } cout<<endl;

}

int main()
{
    vector<int> arr;
    arr.push_back(2);
    arr.push_back(4);
    arr.push_back(1);
    arr.push_back(7);
    arr.push_back(5);
    arr.push_back(0);


    // using_in_built_STL(arr);

    optimized(arr);

    return 0;
}

// LeetCode --> 31.