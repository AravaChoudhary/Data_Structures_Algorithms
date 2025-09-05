#include<iostream>

using namespace std;


bool isVowel(char ch) {

    ch = tolower(ch);
    return (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u');
}

// Two Pointer Approach with some Rules.
string reverseVowels(string s) {

    int n = s.length();
    int low = 0;
    int high = n - 1;

    while(low < high) {

        if(isVowel(s[low]) and isVowel(s[high])) {

            swap(s[low], s[high]);
            low++;
            high--;
        }

        else if(!isVowel(s[low]))
            low++;

        else
            high--;
    }

    return s;
}


int main() {

    string str;

    cout<<"\nEnter the String : ";
    cin>>str;

    cout<<"\nAfter Reversing the Vowels : "<<reverseVowels(str)<<endl;
    
    return 0;
}

// Time Complexity -> O(n)
// Space Complexity -> O(1)

// LeetCode - 345.