#include<iostream>
#include<string>

using namespace std;

int convertToMinutes(string& time) {

    int hour = stoi(time.substr(0, 2));
    int min = stoi(time.substr(3,2));

    int final_min = 60 * hour + min;

    return final_min;
}

int findMinDifference(vector<string>& timePoints) {

    vector<int> mins;
    for(auto time : timePoints)
        mins.push_back(convertToMinutes(time));

    sort(mins.begin(), mins.end());

    int ans = INT_MAX;      // Minimum Difference

    for(int i = 0; i < mins.size() - 1; i++)
        ans = min(ans, mins[i + 1] - mins[i]);

    int last_diff = (mins[0] + 1440) - mins[mins.size() - 1];
    ans = min(ans, last_diff);

    return ans;
}

int main() {

    int n;
    cout << "\nEnter number of TimePoints : ";
    cin >> n;

    vector<string> timePoints(n);
    cout << "\nEnter the Words : ";
    for (int i = 0; i < n; i++)
        cin >> timePoints[i];

    cout<<"\nMinimum Time Difference is "<<findMinDifference(timePoints)<<endl;

    return 0;
}

// Time Complexity -> O(n log n)
// Space Complexity -> O(n)

// LeetCode - 539.