#include<iostream>
#include<string>

using namespace std;

bool checkPalindrome(string str, int start , int end) {

    while(start <= end) {

        if(str[start] != str[end])
            return false;

        else {
            start++;
            end--;
        }
    }

    return true; // Valid Palindrome

}

bool validPalindrome(string s) {

    int n = s.length();
    int i = 0, j = n - 1;

    while(i <= j) {

        // Same
        if(s[i] == s[j]) {
            i++;
            j--;
        }

        // Different
        else { // s[i] != s[j]

            // In this Case : Character delete karke dekho --> Delete ith idx or jth idx char.
            bool ansOne = checkPalindrome(s, i + 1, j);
            bool ansTwo = checkPalindrome(s, i, j - 1);
            bool finalAns = ansOne or ansTwo;
        
            return finalAns;
        }
    }

    return true; // Got Valid Palindrome without any Deletion.
}

int main() {

    string str, part;
    cout<<"\nEnter the String : ";
    cin>>str;

    bool ans = validPalindrome(str);
    if(ans == true)
        cout<<"\nYES It is a Valid Palindrome - II"<<endl;
    
    else
        cout<<"\nNO It is a NOT a Valid Palindrome - II"<<endl;
    
    return 0;
}

// Time Complexity --> O(n)

// LeetCode - 680.