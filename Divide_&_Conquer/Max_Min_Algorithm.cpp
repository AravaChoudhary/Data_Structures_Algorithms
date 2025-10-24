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
pair<int, int> Recursive_Max_Min(vector<int> arr, int low, int high) {

    int n = arr.size();
    int maximum, minimum;

    // Base Case I
    if(low == high)
        return {arr[low], arr[low]};

    // Base Case II
    if(low == (high - 1)) {

        if(arr[low] < arr[high])
            return {arr[high], arr[low]};

        else 
            return {arr[low], arr[high]};
    }


    int mid = (low + high) / 2;
    pair<int, int> left = Recursive_Max_Min(arr, low, mid);
    pair<int, int> right = Recursive_Max_Min(arr, mid + 1, high);

    maximum = max(left.first, right.first);
    minimum = min(left.first, right.first);
    
    return {maximum, minimum};
}


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

    cout<<"\nIterative Approach"<<endl;
    pair<int, int> result_It = Max_Min_Algorithm(arr);
    cout<<"\nMaximum is "<<result_It.first<<"\nMinimum is "<<result_It.second<<endl; 

    cout<<"\nRecursiveApproach"<<endl;
    pair<int, int> result = Recursive_Max_Min(arr, 0, (n - 1));
    cout<<"\nMaximum is "<<result.first<<"\nMinimum is "<<result.second<<endl; 

    return 0;
}


// Iterative
    // - Time Complexity -> O(n)
    // - Space Complexity -> O(1)

// Recursive
    // - Time Complexity -> O(n)
    // - Space Complexity -> O(log n)