#include<iostream>

using namespace std;

int coinChange(vector<int>& coins, int amount) {

    int n = coins.size();

    // Base Case
    if(amount == 0)     // 0 amount create karne ke liye kitne coins lagenge
        return 0;

    int min_coins = INT_MAX;
    
    // Har amount ke liye poore coins ke array ko traverse kar rahe h
    for(int i = 0; i < n; i++) {

        int coin = coins[i];

        // if coin value > amount -> no need to call Recursive Function
        // if coin value <= amount -> call Recursive Function

        if(coin <= amount) {
            // 1 coin toh use hogaya, amount becomes (amount - coin)
            // Baake Recursion karega
            int recursionAns = coinChange(coins, amount - coin);
            // ho saka hai Recursion ka answer valid ya invalid ho
            // Invalid Case -> recursionAns = INT_MAX
            // Valid case -> recursionAns = not equal to INT_MAX
            if(recursionAns != INT_MAX) {
                // Valid Answer aaya hai
                int coinsUsed = 1 + recursionAns;
                // kya above ans min hai ?
                min_coins = min(min_coins, coinsUsed); 
            }                
        }
    }

    return min_coins;
}

int main() {

    int n, amount;
    cout<<"\nEnter the Number of Coins : ";
    cin>>n;

    vector<int> coins;
    cout<<"\nEnter the Coins Denomination : ";
    for(int i = 0; i < n; i++) {
        int value;
        cin>>value;
        coins.push_back(value);
    }

    cout<<"\nEnter the Amount : ";
    cin>>amount;


    int ans = coinChange(coins, amount);    
    if(ans == INT_MAX)
        ans = -1;
    
    cout<<"\nFewest No. of coins required to make Amount is : "<<ans<<endl;

    return 0;
}

// Done with the Recursion Approach - Time Complexity can be improved using Dynamic Programming Approach.

// Time Complexity -> O(n^amount)
// Space Complexity -> O(amount)

// LeetCode - 322.