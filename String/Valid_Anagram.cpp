#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;

// Number of respective characters in 's' string should be same to that of 't'.
// So count the frequency of characters in both the strings and then make a frequency table, 
// if frequency_table(s) = frequency_table(t) --> then it will be an Anagram otherwise NOT.

bool Frequency_Table_Method(string str1, string str2) {

    int frequency_table[256] = {0};

    for(int i = 0; i < str1.size(); i++)
        frequency_table[str1[i]]++;

    for(int i = 0; i < str2.size(); i++)
        frequency_table[str2[i]]--;

    for(int i = 0 ; i < 256; i++) {
 
        if(frequency_table[i] != 0)
            return false;
    }

    return true;
}

bool BruteForce(string str1, string str2) {

    sort(str1.begin(), str1.end());
    sort(str2.begin(), str2.end());

    if(str1 == str2)

        return true;
    
    else    
        return false;
}

int main() {

    string str1, str2;

    cout<<"\nEnter the 1st String : ";
    cin>>str1;

    cout<<"\nEnter the 2nd String : ";
    cin>>str2;

    cout<<"\nSorting Method : ";
    bool ans_a =  BruteForce(str1, str2);
    if(ans_a == true)
        cout<<"YES It is an Anagram"<<endl;
    
    else
        cout<<"NO It is a NOT an Anagram"<<endl;


    cout<<"\nFrequency Table Method : ";
    bool ans_b =  Frequency_Table_Method(str1, str2);
    if(ans_b == true)
        cout<<"YES It is an Anagram"<<endl;
    
    else
        cout<<"NO It is a NOT an Anagram"<<endl;
    
    return 0;

}

// Time Complexity -> O(n)
// Space Complexity -> O(1)

// LeetCode - 242.