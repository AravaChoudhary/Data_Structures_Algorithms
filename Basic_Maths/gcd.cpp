#include<iostream>

using namespace std;

// Euclid's Theorem
// gcd(a, b) = gcd(a - b, b)    a > b 
//           = gcd(b - a, a)    b > a
//           = gcd(a % b, b)    a > b
// Apply this till one of the parameter becomes ZERO.

int gcd(int a, int b) {

    if(a == 0)
        return b;
    
    if(b == 0)
        return a;

    while(a > 0 and b > 0) {

        if(a > b)
            a = a - b;
        
        else
            b = b - a;
    }

    return (a == 0 ? b : a);
}

int main() {

    int a,b;
    cout<<"\nEnter A : ";
    cin>>a;

    cout<<"\nEnter B : ";
    cin>>b;

    cout<<"\nGCD of "<<a<<" and "<<b<<" is "<<gcd(a,b)<<endl;
    
    return 0;
}