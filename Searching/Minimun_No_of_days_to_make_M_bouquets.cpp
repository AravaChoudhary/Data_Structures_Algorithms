#include<iostream>
#include<vector>

using namespace std;

bool can_we_make_m_bouquets_in_D_days(vector<int>& bloomDay, int m, int k, int D) {
    
    int n = bloomDay.size();
    int counter = 0;

    for(int i = 0; i < n; i++) {
        
        // Check whether the ith flower is bloomed or not        
        if(bloomDay[i] <= D) // It must have bloomed
            counter++;
        
        if(counter == k) { // I can make a bouquet
                
            m--;
            counter = 0;

            if(m == 0)
                break;
        }

            if(bloomDay[i] > D)
                counter = 0;
    }

    return m == 0;

}

int minDays(vector<int>& bloomDay, int m , int k) {

    int n = bloomDay.size();
    long long int requirement = (long long int) m * (long long int) k;

    if(n < requirement)
        return -1;

    int start = *min_element(bloomDay.begin(), bloomDay.end()); // at least one flower is bloomed
    int end = *max_element(bloomDay.begin(), bloomDay.end()); // all flowers are bloomed
    int ans = 0;

    while(start <= end) {
        int mid = start + (end - start) / 2;
        int day = mid;

        if(can_we_make_m_bouquets_in_D_days(bloomDay, m , k , day)) {
            ans = day;
            end = mid - 1;
        }

        else
            start = mid + 1;
    }

    return ans;

}

int main() {

    vector<int> bloomDay;
    int n, ans, m, k;

    cout<<"Minimum Number of Daya to make m Bouquets"<<endl;

    cout<<"\nEnter the bloomDay Array Size : ";
    cin>>n;
    
    cout<<"Enter the number of Days in bloomDay Array : "<<endl;
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        bloomDay.push_back(value);
    }

    cout<<"\nEnter the Number Bouquets that you want to make : ";
    cin>>m;

    cout<<"\nEnter the Number of Adjacent flowers that u wanna use to make Bouquets : ";
    cin>>k;

    ans = minDays(bloomDay, m, k); // Returns Minimum Days required to make the Bouquet
    cout<<"Minimum number of days needed to wait to be able to make m bouquets from the garden : "<<ans<<" Days"<<endl;
    
    return 0;
}

// LeetCode - 1482.