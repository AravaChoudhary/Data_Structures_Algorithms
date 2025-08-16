#include<iostream>
#include<vector>

using namespace std;

bool can_koko_finish_bananas_with_k_speed(vector<int>& piles, int hours, int k) {
    
    int n = piles.size();
    long long int total_hours_taken_by_Koko_to_finish_all_bananas = 0;

    for(int i = 0; i < n ; i ++)
        total_hours_taken_by_Koko_to_finish_all_bananas += ceil(piles[i] / (double) k);

    if(total_hours_taken_by_Koko_to_finish_all_bananas <= hours)
        return true;
    
    return false; 
}

int Solution(vector<int>& piles, int hours) {

    int start = 1;
    auto it = max_element(piles.begin() , piles.end()); // Max element of the pile
    int end = * it; // if I take k = end then it is my answer it is sure
    int ans = 0;

    while(start <= end) {

        int mid = start + (end - start) / 2;
        int k = mid;

        if(can_koko_finish_bananas_with_k_speed(piles, hours, k)) {
            // Koko will finish all the bananas without being caught
            ans = k; // Store and Compute 
            end = mid - 1;
        }

        else
            start = mid + 1; 
    }

    return ans;
}


int main() {

    vector<int> piles;
    int n ,ans,hours;

    cout<<"Koko Eating Bananas"<<endl;

    cout<<"\nEnter the Pile Size : ";
    cin>>n;
    
    cout<<"Enter the number of banans in each pile : "<<endl;
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        piles.push_back(value);
    }

    cout<<"\nEnter the Number of Hours (hours > pile size) : ";
    cin>>hours;

    ans = Solution(piles, hours); // Returns Minimum value of k
    cout<<"The Minimum integer k such that she can eat all the bananas within "<<hours<<" hours : "<<ans<<endl;

    return 0;
}

// LeetCode - 875.