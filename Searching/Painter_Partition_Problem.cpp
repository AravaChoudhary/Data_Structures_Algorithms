#include<iostream>
#include<vector>
#include<numeric>   // for accumulate
#include<algorithm> 

using namespace std;

bool isPossibleSolution(vector<int>& arr, int k, int sol) {
    
    int n = arr.size();
    
    int timeSum = 0;
    int counter = 1;
        
    for(int i = 0; i < n; i++) {
            
        if(arr[i] > sol)
            return false;

        if(timeSum + arr[i] > sol) {
                
            counter++;
            timeSum = 0;
            timeSum = timeSum + arr[i];
                
            if(counter > k)
                return false;
        }
            
        else
            timeSum = timeSum + arr[i];
    }
        
    return true;
}

int minTime(vector<int>& arr, int k) {

    int n = arr.size();
        
    int start = 0;
    int end = accumulate(arr.begin(), arr.end(), 0);;
            
    int ans = -1;
        
    while(start <= end) {
            
        int mid = start + (end - start) / 2;
            
        if(isPossibleSolution(arr, k ,mid)) {
                
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

    cout<<"\nPainter Partition Problem"<<endl;

    cout<<"\nEnter The Number of Boards (Array Size) : ";
    cin>>n;
    
    cout<<"\nEnter the Size of Boards (Array Elements) : "<<endl; // Where each element arr[i] represents the number of pages in the i-th book
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }

    cout<<"\nEnter The number of Painters : ";
    cin>>k;

    int result = minTime(arr, k);
    cout << "\nThe Minimized Largest Sum is : " << result << endl;

    return 0;

}

// GfG Problem.