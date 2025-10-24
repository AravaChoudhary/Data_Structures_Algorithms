#include<iostream>

using namespace std;

// Iterative Approach
pair<int, int> Max_Min_Algorithm(vector<int> arr) {

    int n = arr.size();

    int maximum, minimum;
    maximum = minimum = arr[0];

    for(int i = 1; i < n ; i++) {

        if(arr[i] > maximum)
            maximum = arr[i];
        
        else if(arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    return {maximum, minimum};
}


// Recursive Approach



int main() {

    int n;
    cout<<"\nEnter the Size of the Array : ";
    cin>>n;

    vector<int> arr;
    cout<<"\nEnter Array Elements : ";
    for(int i = 0; i < n ; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }

    pair<int, int> result = Max_Min_Algorithm(arr);
    cout<<"\nMaximum is "<<result.first<<"\nMinimum is "<<result.second<<endl; 

    return 0;
}