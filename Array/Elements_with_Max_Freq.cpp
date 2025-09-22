#include<iostream>
#include<vector>

using namespace std;


int maxFrequencyElements(vector<int>& nums) {

    // Create a frequency array for numbers from 1 to 100
    int freq[101] = {0};
    for(int num : nums) {
        freq[num]++;
    }

    // Find the maximum frequency
    int maxFreq = 0;
    for(int i = 1; i <= 100; ++i) {
        if(freq[i] > maxFreq)
            maxFreq = freq[i];
    }

    // Count the total frequencies of elements having maximum frequency
    int total = 0;
    for(int i = 1; i <= 100; ++i) {
        if(freq[i] == maxFreq)
            total += freq[i];
    }
    return total;
}


int main()
{
    vector<int> arr;
    int n;

    cout<<"Enter the Array Size : ";
    cin>>n;
    
    cout<<"Enter Array Elements : "<<endl;
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        arr.push_back(value);
    }
    cout<<"First Reapeting Element is at index : "<<maxFrequencyElements(arr)<<endl;

    return 0;
}

// Time Complexity -> O(n)
// Space Complexity -> O(1)

// LeetCode - 3005.
// Problem of the Day (22nd SEPT 2025).