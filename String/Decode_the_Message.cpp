#include<iostream>
#include<string>
#include<map>

using namespace std;

string decodeMessage(string message, string key) {

    // Step 1 : Create Mapping
    unordered_map<char,char> mapping;
    
    char space = ' ';
    mapping[space] = space;
    
    char start = 'a';
    int index = 0;
    
    while(start <= 'z' and index < key.length()) {

        char current_key_char = key[index];

        // start -> Mapping a b c c .......
        // Mapping => current_key_char -> Alphabet

        if(mapping.find(current_key_char) != mapping.end())
            // If mapping of current_key_char is already present
            // No need to store any character , just move to the next character in key
            index++;

        else {
            // If mapping of current_key_char is already NOT present
            // Create mapping and move ahead.
            mapping[current_key_char] = start;
            start++;
            index++;
        }
    }


    // Step 2 : Use Mapping and Decode Message
    string ans = "";
    int n = message.length();
    
    for(int i = 0; i < n; i++) {

        char message_char = message[i];
        char mapped_char = mapping[message_char];
        
        ans.push_back(mapped_char);
    }

    return ans;
}

int main() {

    string str, key;
    cout<<"\nEnter the Message : ";
    getline(cin, str);

    cout<<"\nEnter the KEY :";
    getline(cin, key);

    cout<<"\nDecoded Message is : "<<decodeMessage(str, key)<<endl;
    
    return 0;

}

// LeetCode - 2325.