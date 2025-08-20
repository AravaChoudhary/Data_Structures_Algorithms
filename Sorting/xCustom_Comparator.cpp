#include<iostream>
#include<vector>

using namespace std;

void print(vector<int>& v) {

    for(int i = 0; i < v.size() ; i++)
        cout<<v[i]<<" ";
    
    cout<<endl;
}

void printvv(vector<vector<int>>& v) {

    for(int i = 0; i < v.size() ; i++) {
        vector<int>& temp = v[i];
        int a = temp[0];
        int b = temp[1];    
        cout<<a<<" "<<b<<endl;
    }
    
    cout<<endl;
}

bool my_comparator(int& a, int & b) {
    
    // return a < b; // Increasing Order Sorting
    return a > b; // Decreasing Order Sorting
}

bool my_comparator_for_first_index(vector<int>& a, vector<int>& b) {

    // return a[0] < b[0]; // Increasing Order Sorting on basis of 0th Index
    // return a[1] > b[0]; // Decreasing Order Sorting on basis of 0th Index

    // return a[1] < b[1]; // Increasing Order Sorting on basis of 1th Index
    return a[1] > b[1]; // Decreasing Order Sorting on basis of 1th Index
}

int main() {
    
    // vector<int> v = {44, 55, 22, 11, 33};

    // sort(v.begin(), v.end());

    // sort(v.begin(), v.end(), my_comparator);
    // print(v);


    // Vector of Vector Sorting
    vector<vector<int>> v;
    int n;
    cout<<"Enter the Size : ";
    cin>>n;

    for(int i = 0 ; i < n; i++) {
        int a, b;
        cout<<"Enter a and b : ";
        cin>>a>>b;
        vector<int> temp;
        temp.push_back(a);
        temp.push_back(b);
        v.push_back(temp);
    }

    cout<<"\nHere are the Values"<<endl;
    printvv(v);

    cout<<"\nSorted by 0th Index"<<endl;
    sort(v.begin(), v.end());
    printvv(v);

    cout<<"\nSorted by 1th Index"<<endl;
    sort(v.begin(), v.end(), my_comparator_for_first_index);
    printvv(v);

    return 0;

}