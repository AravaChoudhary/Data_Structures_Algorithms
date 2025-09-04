#include<iostream>

using namespace std;


// Two Pointer Approach with some Rules.

string reverseOnlyLetters(string s) {

    int n = s.length();
    int low = 0;
    int high = n - 1;

    while(low < high) {

        if(isalpha(s[low]) and isalpha(s[high])) {
            swap(s[low], s[high]);
            low++;
            high--;
        }

        else if(!isalpha(s[low]))
            low++;
        
        else    // s[high] --> Not Alphabet
            high--;
    }

    return s;
}

int main() {

    string str;

    cout<<"\nEnter the String : ";
    cin>>str;

    cout<<"\nAfter Reversing Letters Only : "<<reverseOnlyLetters(str)<<endl;
    
    return 0;
}

// Time Complexity -> O(n)
// Space Complexity -> O(1)

// LeetCode - 917.