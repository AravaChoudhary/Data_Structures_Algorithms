#include<iostream>

using namespace std;

int main() {
    
    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    int set_bit_count = 0;

    while(n != 0) {

        int last_bit = (n & 1);
        
        if(last_bit == 1) 
            set_bit_count = set_bit_count + 1;
        
        // Right Shift
        n = n >> 1;
    }

    cout<<"Total Number of Set Bits : "<<set_bit_count<<endl;

    return 0;
}

// LeetCode - 191.