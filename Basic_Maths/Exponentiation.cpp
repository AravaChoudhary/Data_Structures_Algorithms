#include<iostream>

using namespace std;

// Time Complexity -> O(e)
int SlowExponentiation(int n, int e) {

    int ans = 1;
    for(int i = 0; i < e; i++)
        ans *= n;
    
    return ans;
}


// Time Complexity -> O(log e) 
int FastExponentiation(int n, int e) {

    int ans = 1;

    while(e > 0) {
         
        if(e & 1)       // If e is Odd
            ans = ans * n;

        n = n * n;
        e >>= 1;        // Right Shift for doing e = e / 2
    }

    return ans;
}


int main() {

    int n, e;
    cout<<"\nEnter the Number : ";
    cin>>n;

    cout<<"Enter the Exponent : ";
    cin>>e;

    cout<<"\nAns is : "<<FastExponentiation(n, e)<<endl;
    
    return 0;
}