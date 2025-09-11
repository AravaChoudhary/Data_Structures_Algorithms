#include<iostream>
#include<string>

using namespace std;

int myAtoi(string s) {

    int n = s.size();
    int num = 0, i = 0, sign = 1; //Positive
    
    while(s[i] == ' ')
        i++;

    if(i < n and (s[i] == '+' or s[i] == '-')) {

        sign = s[i] == '+' ? 1 : -1;
        i++;
    }

    while(i < s.size() and isdigit(s[i])) {

        if(num > INT_MAX / 10 or (num == INT_MAX / 10 and s[i] > '7'))
            return sign == -1 ? INT_MIN : INT_MAX;

        num = num * 10 + (s[i] - '0');
        i++;
    }

    return (num * sign);
}


int main() {

    string str;
    cout<<"\nEnter the String : ";
    cin>>str;

    cout<<"\nConverted the String into Number : "<<myAtoi(str)<<endl;
 
    return 0;
}

// Time Complexity --> O(n)
// Space Complexity --> O(1)

// LeetCode - 8.