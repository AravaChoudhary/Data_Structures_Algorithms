#include<iostream>
#include<vector>

using namespace std;

// Optimization ofthe Algorithm
    // Optimization 1 [Inner Loop] : 
    // First unmarked number would be (i * i), as others have been marked by 2 to (i - 1).

    // Optimization 2 [Outer Loop] : 
    // Run Outer Loop from 2 to sqrt(n).

// Sieve of Eratosthenes (Table Approach)
vector<bool> Sieve_of_Eratosthenes(int n) {

    // Creating a sieve Array of n size telling isPrime.
    vector<bool> sieve(n + 1, true);
    sieve[0] = sieve[1] = false;

    for(int i = 2; i * i <= n; i++) {

        if(sieve[i] == true) {

            // int j = i * 2;

            // Optimization 1 : 
            // First unmarked number would be (i * i), as others have been marked by 2 to (i - 1).
            int j = i * i;             

            while(j < n) {
                sieve[j] = false;
                j += i;
            }
        }
    }

    return sieve;
}

// Time Complexity --> O(n * log(log n))
// Space Complexity --> O(1);


// Segmented Sieve

// Taking an Example of L = 110 and R = 130.

// Algorithm
//  1) Generate All Primes responsible to mark Segmented Sieve.
//      Use Normal Sieve Method for this
//      Sieve_of_Eratosthenes(N = sqrt(R)) 

//  2) We have got the base Primes
//     now find First index to start Marking.
//          index 0 --> Resembles 110
//          index 20 --> Resembles 130
//     Now to start from where 
//      prime = 2 --> then , start with the first multiple of 2 
//            first multiple = (110 / 2) * 2
//      prime = 3 --> then , start with the first multiple of 3 
//            first multiple = (110 / 3) * 3 = 108 (108 < L)
//              therefore, if(first_multiple < L) --> first_multiple += prime,
//              so in this case (108 < L) --> first_multiple of 3 = 108 + 3 = 111
//              so start from  111.

vector<bool> Segmented_Sieve(int L, int R) {

    // Get me the Prime Array, I will use it to Mark the Segmented Sieve.
    vector<bool> sieve = Sieve_of_Eratosthenes(sqrt(R));

    vector<int> basePrimes;
    for(int i = 0; i < sieve.size(); i++) {

        if(sieve[i])
            basePrimes.push_back(i);
    }

    vector<bool> seg_sieve(R - L + 1, true);
    if(L == 1 or L == 0)
        seg_sieve[L] = false;

    for(auto prime : basePrimes) {

        int first_multiple = (L / prime) * prime;
        
        if(first_multiple < L)
            first_multiple += prime;

        int j = max(first_multiple, prime * prime);

        while(j <= R) {
            seg_sieve[j - L] = false;
            j += prime;
        }
    }

    return seg_sieve;
}


int main() {

    // int n;
    // cout<<"\nEnter the Number : ";
    // cin>>n;

    // vector<bool> sieve = Sieve_of_Eratosthenes(25);
    // for(int i = 0; i <= 25; i++) {
    //     if(sieve[i])
    //         cout<<i<<" ";
    // } cout<<endl;

    int L = 110;
    int R = 130;
    vector<bool> ss = Segmented_Sieve(L, R);
    cout<<"\nPrime between "<<L<<" and "<<R<<" are ";
    for(int i = 0; i <= ss.size(); i++) {
        if(ss[i])
            cout<<i + L <<" ";
    } cout<<endl;

    
    return 0;
}

// Complexities

// Normal Sieve
// 	•	Time: O(n log log n)
// 	•	Space: O(n)

// Segmented Sieve (for range [L, R])
// 	•	Time: O(√R log log R + (R - L + 1) log log R)
// 	•	Space: O(√R + (R - L + 1))