#include<iostream>

using namespace std;

// Given two strings needle and haystack, return the index of the first occurrence
// of needle in haystack, or -1 if needle is not part of haystack.

int strStr(string haystack, string needle) {

    int n = haystack.length();
    int m = needle.length();

    for(int i = 0; i <= (n - m); i++) {

        for(int j = 0; j < m; j++) {

            if(needle[j] != haystack[i + j])
                break;

            if(j == (m - 1))
                return i;
        }
    }

    return -1;
}


int main() {

    string haystack, needle;

    cout<<"\nEnter the Haystack : ";
    cin>>haystack;

    cout<<"\nEnter the Needle : ";
    cin>>needle;

    cout<<"\nIndex of the first occurrence of "<<needle<<" in "<<haystack<<" is "<<strStr(haystack,needle)<<endl;
    
    return 0;
}

// Time Complexity -> O(n * m) 
// Space Complexity -> O(1)

// LeetCode - 28.