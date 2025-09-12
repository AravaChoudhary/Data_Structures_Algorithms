#include<iostream>
#include<string>

using namespace std;

int compress(vector<char>& chars) {

    int n = chars.size();
    int index  = 0, count = 1;
    char prev = chars[0];

    for(int i = 1; i < n; i++) {

        if(chars[i] == prev)
            count++;

        else {
            chars[index++] = prev;

            if(count > 1) {

                int start = index;
                while(count) {

                    chars[index++] = (count % 10) + '0';
                    count = count / 10;
                }
            
                reverse(chars.begin() + start, chars.begin() + index);
            }
            
            prev = chars[i];
            count = 1;
        }
    }

        
    chars[index++] = prev;

    if(count > 1) {

        int start = index;
        while(count) {

            chars[index++] = (count % 10) + '0';
            count = count / 10;
        }

        reverse(chars.begin() + start, chars.begin() + index);
    }

    return index;
}

int main() {

    int n;
    cout<<"\nEnter the size of Character array : ";
    cin>>n;

    vector<char> chars(n);
    cout << "\nEnter the character array (no spaces): ";
    for (int i = 0; i < n; i++)
        cin >> chars[i];


    int newLength = compress(chars);

    cout << "\nNew Length of the Array is " << newLength << endl;
    
    cout << "\nCompressed characters: ";
    for (int i = 0; i < newLength; i++)
        cout << chars[i];
    cout << endl;

    return 0;
}

// Time Complexity --> O(n)
// Space Complexity --> O(1)

// LeetCode - 443.