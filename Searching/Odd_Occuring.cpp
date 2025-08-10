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

        cout<<"mid : "<<mid<<endl;
        cout<<"arr[mid] : "<<arr[mid]<<endl;
        cout<<"s = "<<s<<" l = "<<l<<endl;

        if(s == l) // If there is only a single element in the Array then 
            return arr[s]; // return index of that element only.

        int current_value = arr[mid];  // Value at mid index
        int left_value = -1;  // Value at mid - 1 index , if exists
        int right_value = -1;  // Value at mid + 1 index , if exists

        if(mid - 1 >= 0)
            left_value = arr[mid - 1];

        if(mid + 1 < n)
            right_value = arr[mid + 1];


        //  CASE 1 : Duplicate does not exists.
        if(current_value != left_value and current_value != right_value)
            return current_value;

        // CASE 2 : Duplicate exists in the Left Index.
        if(current_value == left_value) {
            int pairStartingIdx = mid - 1;
            if(pairStartingIdx & 1) // pairStartingIdx is odd and i am standing at right part
                // Move towards left
                l = mid - 1;
            else // pairStartingdx is even and i am standing at left part
                // Move towards right
                s = mid + 1;
        }

        // CASE 3 : Duplicate exits in the Right Index.
        else if(current_value == right_value) {
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

int Optimized(vector<int>& arr, int n) {

    int s, l, mid;
    s = 0;
    l = n - 1;

    while (s < l) {
        int mid = s + (l - s) / 2;

            // Ensure mid is even for easier pair comparison
        if (mid % 2 == 1) {
            mid--;
        }

        if (arr[mid] == arr[mid + 1]) {
            // Unique element is in the right half
            s = mid + 2;
        } else {
            // Unique element is in the left half (including mid)
            l = mid;
        }
    }

        return arr[s];
}

int main() {

    vector<int> arr;
    int n , ans_bs, ans_o;

    cout<<"SEARCHING IN A NEARLY SORTED ARRAY"<<endl;

    cout<<"\nEnter the Array Size : ";
    cin>>n;
    
    cout<<"Enter Array Elements : "<<endl;
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }

    ans_bs = FindOddOccuring(arr, n); // Returns Index
    cout<<"\nOdd Occuring Element in the Array is : "<<ans_bs<<endl;

    ans_o = Optimized(arr, n); // Returns Element
    cout<<"\nOdd Occuring Element in the Array is : "<<ans_o<<endl;

    return 0;
}

// LeetCode - 540.