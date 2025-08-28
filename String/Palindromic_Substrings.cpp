#include<iostream>
#include<string>

using namespace std;

// This Function returns the count of Palindromic Substrings,using i and j as center and expanding around it
// in every iteration , if possible

int expandAroundCenter(string s, int i, int j) {

    int n = s.length();
    int count = 0;

    while(i >= 0 and j < n and s[i] == s[j]) {

        count++;
        i--;
        j++;
    }

    return count;

}

int countSubstrings(string s) {

    int n = s.length();
    int total_count = 0;

    for(int center = 0; center < n; center++) {

        // Odd Length Substring
        int i = center;
        int j = center;
        int odd_palindromic_substring_count = expandAroundCenter(s, i, j);


        // Even Length Substring
        i = center;
        j = center + 1;
        int even_palindromic_substring_count = expandAroundCenter(s, i, j);
    
        
        total_count = total_count + odd_palindromic_substring_count + even_palindromic_substring_count;
    }

    return total_count;

}

int main() {

    string str;
    cout<<"\nEnter the String : ";
    cin>>str;

    cout<<"\nPalindromic Substrings : "<<countSubstrings(str)<<endl;
    
    return 0;

}

// LeetCode - 647.