#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;

string remove_substring_Occurences(string str, string part) {

    // jab tak str string mein substring part milta rahega tab tak loop chalta rahega.
    while(str.find(part) != string::npos)

        // full string se part string erase karna hai , erase func ke 2 arguments hai,
        // first argument mein part ka starting idx dena hai str.find(part) dega starting idx of part inside str sting.
        // 2nd argument mein specify karna hai ki kitne char remove karna cahate ho , isisliye part.length() use kiya.
     
        str.erase(str.find(part), part.length());

    return str;
}

int main() {

    string str, part;
    cout<<"\nEnter the String : ";
    cin>>str;

    cout<<"Enter the part that you wanna Remove : ";
    cin>>part;

    cout<<"\nThe Final String after Duplicate Removals : "<<remove_substring_Occurences(str, part)<<endl;
    
    return 0;
}

// Time Complexity --> O(lenght of str * length of part)

// LeetCode - 1910.