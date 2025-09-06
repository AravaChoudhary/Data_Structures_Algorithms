#include<iostream>

using namespace std;

bool IsIsomorphic(string s, string t) {

    int hash[256] = {0}; // Mapping of each character of language 's' to language 't'
    bool istCharMapped[256] = {0}; // Stores if t[i] char already mapped with s[i]    

    for(int i = 0; i < s.size(); i++) {

        if(hash[s[i]] == 0 and istCharMapped[t[i]] == 0) {

            hash[s[i]] = t[i];
            istCharMapped[t[i]] = true;
        }
    }

    for(int i = 0 ; i < s.size(); i++) {

        if(char(hash[s[i]]) != t[i])
            return false;
    }

    return true; 
}

int main() {

    string str1, str2;

    cout<<"\nEnter the Two Strings (Both Should have Same Lenght)\n"<<endl;
    cout<<"\nEnter the String 1 : ";
    cin>>str1;

    cout<<"\nEnter the String 1 : ";
    cin>>str2;

    bool ans_a =  IsIsomorphic(str1, str2);
    if(ans_a == true)
        cout<<"\nYES! Both Strings are Isomorphic"<<endl;
    
    else
        cout<<"\nNO! Both Strings are NOT Isomorphic"<<endl;
    
    return 0;
}

// Time Complexity -> O(n)
// Space Complexity -> O(1)

// LeetCode - 205.