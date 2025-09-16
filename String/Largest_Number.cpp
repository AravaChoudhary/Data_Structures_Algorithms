#include<iostream>
#include<string>

using namespace std;

static bool mycomp(string a, string b) {

    string t_1 = a + b;
    string t_2 = b + a;

    return t_1 > t_2;
}

string largestNumber(vector<int>& nums) {

    vector<string> snums;
    for(auto n : nums)
        snums.push_back(to_string(n));

     
    sort(snums.begin(), snums.end(), mycomp);

    if(snums[0] == "0")
        return "0";

    string ans = "";
    for(auto str : snums)
        ans += str;

    return ans;
}

int main() {

    vector<int> nums;
    int x;
    cout << "\nEnter elements (-1 to stop):\n";
    while (cin >> x && x != -1)
        nums.push_back(x);


    cout<<"\nLargest Number in String is : "<<largestNumber(nums)<<endl;

    return 0;
}

// Time Complexity --> O(n * Log(n))
// Space Complexity --> O(n)

// LeetCode - 179.