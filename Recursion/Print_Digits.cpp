#include<iostream>

using namespace std;

void PrintDigits_with_Recursion(int n) {

    // Base Case
    if(n == 0)
        return ;

    // Baaki Recursion Solve karega
    int newNumber = n / 10;
    PrintDigits_with_Recursion(newNumber);

    // 1 Case mera
    int digit = n % 10;
    cout<<digit<<" ";
}
// Head Recursion

int main() {

    int n;
    cout<<"Enter the Number : ";
    cin>>n;

    cout<<"\nDigits are ";
    PrintDigits_with_Recursion(n);

    return 0;
}