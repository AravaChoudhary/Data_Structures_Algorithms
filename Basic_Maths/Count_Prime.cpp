#include<iostream>
#include<vector>

using namespace std;

//  1. Naive Approach
bool isPrime(int n) {

    if(n <= 1)
        return false;

    for(int i = 2; i < n; i++) {

        if((n % i) == 0)
            return false;
    }

    return true;
}

int countPrime(int n) {

    int count = 0;

    for(int i = 0; i < n; i++) {

        if(isPrime(i))
            count++;
    }

    return count;
}


//  2. Sieve of Eratosthenes (Table Approach)
int Sieve_of_Eratosthenes(int n) {

    if(n == 0)
        return 0;

    vector<bool> prime(n, true);    // All are marked Prime already
    prime[0] = prime[1] = false;

    int ans = 0;

    for(int i = 2; i < n; i++) {

        if(prime[i]) {
            
            ans++;
            
            int j = 2 * i;
            while( j < n) {

                prime[j] = false;
                j = j + i;
            }
        }
    }

    return ans;
}

int main() {

    int n;
    cout<<"\nEnter the Number : ";
    cin>>n;

    cout<<"\nNavie Approach";
    cout<<"\nCount of Primes strictly less than "<<n<<" is "<<countPrime(n)<<endl;

    cout<<"\nSieve of Eratosthenes"; 
    cout<<"\nCount of Primes strictly less than "<<n<<" is "<<Sieve_of_Eratosthenes(n)<<endl;
}

// Time Complexity --> O(n * log(log n))
// Space Complexity --> O(1);

// LeetCode - 204.