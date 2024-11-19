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

}

int main()
{
    vector<int> arr;
    arr.push_back(3);
    arr.push_back(1);
    arr.push_back(2);

    using_in_built_STL(arr);

    optimized(arr);

    return 0;
}