#include<iostream>

using namespace std;

int main() {

    int n, target;
    cout<<"\nEnter the Array size : ";
    cin>>n;

    cout<<"\nEnter Array Elements"<<endl;
    vector<int> arr;
    for(int i = 0; i < n ; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }

    return 0;
}


// Time Complexity -> O(log n)
// Space Complexity -> O(log n)