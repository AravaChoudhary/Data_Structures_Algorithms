#include<iostream>
#include<vector>

using namespace std;

// ODD OCCURING ELEMENTS

// 1) All elements are occuring even number of times except one.
// 2) Elements repeat itself in pairs.
// 3) No pair repeats itself, no number can occur more then 2 times in a single stretch.
// 4) Find the element that occurs Odd Times.

// e.g --> arr - [1, 1 , 2 , 2, 3, 3, 4, 5, 5, 3, 3]


int FindOddOccuring(vector<int> arr, int n) {

    int s ,l ,mid;
    s = 0;
    l = n - 1;

    while(s <= l) {
        mid = s + (l - s) / 2;

        if(s == l) // If there is only a single element in the Array then 
            return s; // return index of that element only.

        //  CASE 1 : Duplicate does not exists.
        if(arr[mid] != arr[mid - 1] and arr[mid] != arr[mid + 1])
            return mid;

        // CASE 2 : Duplicate exists in the Left Index.
        if(arr[mid] == arr[mid - 1]) {
            int pairStartingIdx = mid - 1;
            if(pairStartingIdx & 1) // pairStartingIdx is odd and i am standing at right part
                // Move towards left
                l = mid - 1;
            else // pairStartingdx is even and i am standing at left part
                // Move towards right
                s = mid + 1;
        }

        // CASE 3 : Duplicate exits in the Right Index.
        else if(arr[mid] == arr[mid + 1]) {
            int pairStartingIdx = mid;
            if(pairStartingIdx & 1) // pairStartingIdx is odd and i am standing at right part
                // Move towards left
                l = mid - 1;
            else // pairStartingdx is even and i am standing at left part
                // Move towards right
                s = mid + 1;           
        }
    }

}

int main() {

    vector<int> arr;
    int n , ans;

    cout<<"SEARCHING IN A NEARLY SORTED ARRAY"<<endl;

    cout<<"\nEnter the Array Size : ";
    cin>>n;
    
    cout<<"Enter Array Elements : "<<endl;
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }

    ans = FindOddOccuring(arr, n);
    cout<<"\nOdd Occuring Element in the Array is : "<<ans<<endl;

    return 0;
}

// LeetCode - 540.