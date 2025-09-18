#include<iostream>
#include<string>

using namespace std;
  
int findMinDifference(vector<string>& timePoints) {


}

int main() {
    int n;
    cin >> n;
    vector<string> bank(n);

    cin.ignore();
    for (int i = 0; i < n; ++i) {
        getline(cin, bank[i]);
    }
    
    return 0;
}

// Time Complexity -> O(m * n)
// Space Complexity -> O(m)

// LeetCode - 539.