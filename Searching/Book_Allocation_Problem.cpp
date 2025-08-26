#include<iostream>
#include<vector>
#include<numeric>   // for accumulate
#include<algorithm> 

using namespace std;

bool isPossibleSolution(vector<int>& arr, int k, int sol) {

    int n = arr.size();
        
    int pagesum = 0;
    int counter = 1;
        
    for(int i = 0; i < n ; i++) {
            
        if(arr[i] > sol)
            return false;
        
        if(pagesum + arr[i] > sol) {
                
            counter++;
            pagesum = 0;
            pagesum = pagesum + arr[i];
                
            if(counter > k)
                return false; 
        }
            
        else 
            pagesum = pagesum + arr[i];
    }
        
    return true;
} 

int splitArray(vector<int>& arr, int k) {
    
    int n = arr.size();

    if(k > n)
        return -1;

    int start = 0;
    int end = accumulate(arr.begin(), arr.end(), 0);
    int ans = -1;
       
    while(start <= end) {
           
        int mid = start + (end - start) / 2;
           
        if(isPossibleSolution(arr, k, mid)) {
                
            ans = mid;
            end = mid - 1;
        }
            
        else
            start = mid + 1;
    }

    return ans;
}

int main() {

    vector<int> arr;
    int n, k, m;

    cout<<"\nBook Allocation Problem"<<endl;

    cout<<"\nEnter The Number of Books (Array Size) : ";
    cin>>n;
    
    cout<<"\nEnter the Book Pages : "<<endl; // Where each element arr[i] represents the number of pages in the i-th book
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }

    cout<<"\nEnter The number of students : ";
    cin>>k;

    int result = splitArray(arr, k);
    cout << "\nThe Minimized Largest Sum is : " << result << endl;

    return 0;

}


// LeetCode - 410 (HARD).
// GfG Problem.
