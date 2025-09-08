#include<iostream>
#include<map>

using namespace std;

// Method I : Used Sorting and Map.
// Identify Anagrams w.r.t each string.
// Sort all the strings ans all the entries will be grouped with the help of Map.

vector<vector<string>> MethodI(vector<string>& strs) {

    map<string,vector<string>> mp;

    for(auto str : strs) {

        string s = str;
        sort(s.begin(), s.end());
        mp[s].push_back(str);
    }

    vector<vector<string>> ans;
    for(auto it = mp.begin(); it != mp.end(); it++)
        ans.push_back(it->second);

    return ans;
}

// N -> strs.length(), k -> length of largest string.
// Time Complexity -> O( N * K log K )
// Space Complexity -> O( N * K )


// Method II : Used Hash Map (with kind of Valid Anagram Approach).

std::array<int,256> hash_function(string s) {

    std::array<int,256> hash = {0};
    for(int i = 0; i < s.size(); i++)
        hash[s[i]]++;

    return hash;
}

vector<vector<string>> MethodII(vector<string>& strs) {

    map<std::array<int, 256>,vector<string>> mp;

    for(auto str : strs)
        mp[hash_function(str)].push_back(str);

    vector<vector<string>> ans;
    for(auto it = mp.begin(); it != mp.end(); it++)
        ans.push_back(it->second);

    return ans;
}

// N -> strs.length(), k -> length of largest string.
// Time Complexity -> O( N * K )
// Space Complexity -> O( N * K ) + mapSize

int main() {

    int n;
    cout << "\nEnter number of Strings : ";
    cin >> n;

    vector<string> strs(n);
    cout << "\Enter the Strings : ";
    for (int i = 0; i < n; i++)
        cin >> strs[i]; // takes input word by word

    cout<<"\nGroup of Anagrams"<<endl;
    vector<vector<string>> result = MethodII(strs);
    for (const auto &group : result) {
        for (const auto &word : group) {
            cout << word << " ";
        }
    cout << endl;
    }
    
    return 0;
} 

// LeetCode - 49.