#include<iostream>

using namespace std;


string longestCommonPrefix(vector<string>& strs) {

    string ans;
    int i = 0;
    
    while(true) {

        char current_char = 0;

        for(auto str : strs) {  // For-Each Loop 
            
            if(i >= str.size()) {   // Out of Bound Check 

                current_char = 0;
                break;
            }

            // Just Started
            if(current_char == 0)
                current_char = str[i];
            
            else if(str[i] != current_char) {
                
                current_char = 0;
                break;
            }
        }

        if(current_char == 0)
            break;

        ans.push_back(current_char);
        i++;
    }

    return ans;
}

int main() {

    int n;
    cout << "\nEnter number of Words : ";
    cin >> n;

    vector<string> words(n);
    cout << "\nEnter the Words : ";
    for (int i = 0; i < n; i++)
        cin >> words[i]; // takes input word by word


    cout<<"\nLongest Common Prefix is : "<<longestCommonPrefix(words)<<endl;
    
    return 0;
}

// Time Complexity -> O(n * m)
// Space Complexity -> O(1)

// LeetCode - 14.