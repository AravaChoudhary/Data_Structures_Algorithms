#include<iostream>
#include<string>

using namespace std;



int main() {

    string str, key;
    cout<<"\nEnter the Message : ";
    getline(cin, str);

    cout<<"\nEnter the KEY :";
    getline(cin, key);

    cout<<"\nDecoded Message is : "<<decodeMessage(str, key)<<endl;
    
    return 0;

}

// Time Complexity -> O(n)
// Space Complexity -> O(1)

// LeetCode - 890.