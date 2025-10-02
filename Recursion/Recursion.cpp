#include<iostream>

using namespace std;

int getFactorial(int n) {

    // Base Case : 
    if(n == 0 or n == 1)
        return 1;

    // Recursive Call --> fact(n) = n * fact(n - 1)
    // Big Problem --> fact(n) , Small Problem --> fact(n - 1)
    int finalAns = n * getFactorial(n - 1);
    return finalAns;
}

int main() {

    cout<<"\nStarting Recursion"<<endl;

    int n;
    cout<<"\nEnter n : ";
    cin>>n;

    int ans = getFactorial(n);
    cout<<"\nFactorial of "<<n<<" is : "<<ans<<endl;

    return 0;
}