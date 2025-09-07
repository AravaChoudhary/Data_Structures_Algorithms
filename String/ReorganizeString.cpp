#include<iostream>
#include<climits>   // for INT_MIN

// Given a string s, rearrange the characters of s so that
// any two adjacent characters are not the same.
// Return any possible rearrangement of s or return "" if not possible.

// Greedy Approach 
// 1) Find the most occurent character and fit it Non Adjacently in One Go.
// 2) Fill the rest.

// Approach
// 1) Count Hash
// 2) Try to place most occurent in One Go.
//      if(not possible) --> return ""
// 3) Place other characters with 1 Index Gap.


using namespace std;

string reorganizeString(string s) {
    int n = s.size();
    int hash[26] = {0};

    for(int i = 0; i < n; i++)
        hash[s[i] - 'a']++;

    // Find most frequent character
    char max_frequent_char;
    int max_frequency = INT_MIN;

    for(int i = 0; i < 26; i++) {
        if(hash[i] > max_frequency) {
            max_frequency = hash[i];
            max_frequent_char = i + 'a';
        }
    }

    // Place the most frequent character first
    int index = 0;
    while(max_frequency > 0 && index < n) {
        s[index] = max_frequent_char;
        max_frequency--;
        index += 2;
    }

    if(max_frequency != 0)   // Not possible
        return "";

    hash[max_frequent_char - 'a'] = 0;

    // Place remaining characters
    for(int i = 0; i < 26; i++) {
        while(hash[i] > 0) {
            index = (index >= n ? 1 : index);
            s[index] = i + 'a';
            hash[i]--;
            index += 2;
        }
    }

    return s;
}

int main() {
    string str;
    cout << "\nEnter the String : ";
    cin >> str;

    string result = reorganizeString(str);
    cout << "Reorganized String: " << result << endl;

    return 0;
}

// Best Solution --> Priority Queue (O(n log n)) [Revisit when studied Priority Queue]

// Time Complexity -> O(n)
// Space Complexity -> O(1)

// LeetCode - 767.