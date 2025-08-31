#include<iostream>
#include<string>
#include<map>

using namespace std;

void normalise(string& str) {

    int n = str.length();

    char start = 'a';
    unordered_map<char,char> mapping;

    // Create Mapping
    for(int i = 0; i < n; i ++) {
        
        char string_char = str[i];

        if(mapping.find(string_char) == mapping.end()) {
            // if Mapping is already not present , then create it and move ahead
            mapping[string_char] = start;
            start++; 
        }
    }

    // Normalise string str using mapping
    for(int i = 0; i < n; i++) {

        char mapped_char = mapping[str[i]];
        str[i] = mapped_char;
    }
}

vector<string> findAndReplacePattern(vector<string>& words, string pattern) {

    vector<string> ans;

    // Normalise the Pattern
    normalise(pattern);

    // Let's traverse on words -> Normalise them -> Check that it is equal to pattern or Not.
    for(int i = 0; i < words.size(); i++) {
        // ith word
        string current_word = words[i];
        normalise(current_word);

        if(current_word.compare(pattern) == 0) // if both normalised strings are equal
            ans.push_back(words[i]); //store it in ans string
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

    string pattern;
    cout<<"\nEnter the Pattern : ";
    cin>>pattern;

    cout<<"\nMatching Words with Pattern is/are : ";
    vector<string> result = findAndReplacePattern(words, pattern);
    for (string word : result)
        cout << word << "  ";
    cout << endl;
    
    return 0;
}

// Time Complexity -> O(words * pattern)
// Space Complexity -> O(pattern)

// LeetCode - 890.