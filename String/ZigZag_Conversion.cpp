#include<iostream>

using namespace std;

// Approach

// 1) if numRows = 1 --> Return Original String.
// 2) Change Direction after some times :
//      a) Top --> Bottom
//      b) Bottom --> Top
//      c) Switch After every (numRows - 1) times.

string convert(string s, int numRows) {

    int n = s.size();

    if(numRows == 1)
        return s;

    vector<string> zigzag(numRows);

    int i = 0, row = 0;
    bool direction = 1;     // Direction = 1 means , I have to go from Top to Bottom

    while(true) {

        if(direction) {

            while(row < numRows and i < n)
                zigzag[row++].push_back(s[i++]);

            row = numRows - 2;
        }

        else {

            while(row >= 0 and i < n)
                zigzag[row--].push_back(s[i++]);

            row = 1;
        }

        if(i >= n)
            break;
    
        direction = !direction;
    }

    string ans = "";
    for(int i = 0; i < zigzag.size(); i++) {
        ans = ans + zigzag[i];
        // cout<<zigzag[i]<<endl;
    }

    return ans;
}

int main() {

    string str;
    int numRows;

    cout<<"\nEnter the String : ";
    cin>>str;

    cout<<"\nEnter Number of Rows : ";
    cin>>numRows;

    cout<<"\nZig Zag Convertion\n"<<convert(str, numRows)<<endl;
     
    return 0;
}

// Time Complexity -> O(n)
// Space Complexity -> O(n)

// LeetCode - 6.