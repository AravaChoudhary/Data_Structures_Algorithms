#include<iostream>
#include<vector>

using namespace std;

void printSubsequences(string str, int i, string output, vector<string> & ans) {

    // Base Case
    if(i == str.length()) {

        ans.push_back(output);
        return ;
    }

    // 1 Case mera
    char ch = str[i];

    // baaki Recursion Solve karega
    // Include ch
    printSubsequences(str, i + 1, output + ch, ans);

    // Exclude ch
    printSubsequences(str, i + 1, output, ans);
}

int main() {

    string str = "abc";
    string output = "";
    int index = 0;
    vector<string> ans;

    printSubsequences(str, index, output, ans);
    
    cout<<"\nSize of ans : "<<ans.size()<<endl;
    cout<<"\nSub Sequences are"<<endl;
    for(auto i : ans)
        cout<<i<<endl;

    return 0;
}