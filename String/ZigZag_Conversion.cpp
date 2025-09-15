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




// The Solution which i formed for LeetCode , will post it later.
// # Intuition
// In the problem it is given to convert the string into a ZigZag format, take a vector string ZigZag and iterate over the original string and according to the direction just move in top or bottom directions and finally push the original string element to our ZigZag vector string   

// # Approach
// - if numRows = 1 --> Return Original String.

//             if(numRows == 1)
//                 return s;

// - Change Direction after some times :
//     - Top --> Bottom
//     - Bottom --> Top
//     - Switch After every (numRows - 1) times.

//             bool direction = 1;     // Direction = 1 means , I have to go from Top to Bottom

//             while(true) {

//                 if(direction) {

//                     while(row < numRows and i < n)
//                         zigzag[row++].push_back(s[i++]);

//                     row = numRows - 2;
//                 }

//                 else {

//                     while(row >= 0 and i < n)
//                         zigzag[row--].push_back(s[i++]);

//                     row = 1;
//                 }

//                 if(i >= n)
//                     break;
            
//                 direction = !direction; // This is to reset the direction again for the next iteration.
//             }

// - Finally after making our ZigZag vector string just read it like a normal string by doing the concatenation of our answer string(which is empty initially) with the zigzag string, and return the answer string.

//         string ans = "";
//         for(int i = 0; i < zigzag.size(); i++)
//             ans = ans + zigzag[i];

//         return ans;
