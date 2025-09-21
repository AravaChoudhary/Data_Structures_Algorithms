#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

// While Adding new ch in ans, check are last (k - 1) characters are same to new ch. 

// Algorithm
//  1) if ans.size < k - 1 --> push ch
//  2) if new ch = last (k  - 1) character in ans --> pop (k - 1) characters and don't push new ch
//     else --> push new ch.


bool are_last_k_1_chars_same(string& ans, char& new_ch, int k_1) {

    int it = ans.size() - 1;

    for(int i = 0; i < k_1; i++) {

        if(new_ch != ans[it])
            return false;
        
        it--;
    }

    return true;
}

// Time Complexity -> O(n * k)
// Time Complexity -> O(n)
string removeDuplicates_II(string s, int k) {

    int n = s.size();

    string ans;
    
    for(int i = 0; i < n; i++) {

        char& new_ch = s[i];

        if(ans.size() < (k - 1))
            ans.push_back(new_ch);

        else {

            if(are_last_k_1_chars_same(ans, new_ch, k - 1)) {

                for(int j = 0; j < (k - 1); j++)
                    ans.pop_back();
            }

            else
                ans.push_back(new_ch);
        }
    }

    return ans;
}


int main() {

    string str;
    cout<<"\nEnter the String : ";
    cin>>str;

    int k;
    cout<<"\nEnter K : ";
    cin>>k;

    cout<<"\nThe Final String : "<<removeDuplicates_II(str, k)<<endl;
    
    return 0;
}

// LeetCode - 1209.