#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

string removeDuplicates(string s) {

    int n = s.length();

    string ans = ""; // Initialize ans string as empty string

    for(int i = 0; i < n; i++) {

        char current_char = s[i];

        if(ans.empty() or current_char != ans.back())
            ans.push_back(current_char);
        
        else
            ans.pop_back();
    }

    return ans;
}

int main() {

    string str;
    cout<<"\nEnter the String : ";
    cin>>str;

    cout<<"\nThe Final String after Duplicate Removals : "<<removeDuplicates(str)<<endl;
    
    return 0;

}

// LeetCode - 1047.