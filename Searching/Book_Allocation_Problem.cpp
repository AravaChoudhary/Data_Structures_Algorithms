#include<iostream>
#include<vector>

using namespace std;



int main() {

    vector<int> arr;
    int n, k, m;

    cout<<"\nBook Allocation Problem"<<endl;

    cout<<"\nEnter The Number of Books (Array Size) : ";
    cin>>n;
    
    cout<<"Enter the Array Elements : "<<endl; // Where each element arr[i] represents the number of pages in the i-th book
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }

    cout<<"\nEnter The number of students : ";
    cin>>k;


    cout<<"\nTwo Pointer Approach"<<endl;

    return 0;

}

// GfG Problem.