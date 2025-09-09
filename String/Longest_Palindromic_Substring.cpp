#include<iostream>

using namespace std;

// 1) Find Substrings
// 2) Check which ones are Palindromic.
// 3) Get Maximum length sting from all Palindromic Substrings.

bool isPalindrome(string &s, int start, int end) {

    while(start < end) {

        if(s[start] != s[end])
            return false;

        start++;
        end--;
    }

    return true;
}

string longestPalindrome(string s) {

    int n = s.size();
    string ans = "";
    for(int i = 0; i < n ; i++) {

        for(int j = i; j < n; j++) {

            if(isPalindrome(s, i, j)) {

                string t = s.substr(i, j - i + 1);
                ans = t.size() > ans.size() ? t : ans;  
            }
        }
    }

    return ans;
}

int main() {

    string str;

    cout<<"\nEnter the String : ";
    cin>>str;

    cout<<"\nLongest Palindromic Substring : "<<longestPalindrome(str)<<endl;
    
    return 0;
}

// Time Complexity -> O(n ^ 3) --> Better Time Complexity can e achieved by using Dynamic Programming Approach.
// Space Complexity -> O(1)

// LeetCode - 5.