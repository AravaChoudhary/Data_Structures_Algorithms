#include<iostream>

using namespace std;

int getSum(int n) {

    // Base Case
    if(n == 1)
        return 1;

    // Recursie Call --> Sum(n) = n +  Sum(n - 1)
    int ans = n + getSum(n - 1);
    return ans;
}


int FibonacciSeries(int n) {

    // Base Case
    if(n == 0 or n == 1)
        return n;

    // Recursive Call -->  Fib(n) = Fib(n - 1) + Fib(n - 1)
    int ans = FibonacciSeries(n - 1) + FibonacciSeries(n - 2);
    return ans;
}


int pow(int n) {

    // Base Case
    if(n == 0)
        return 1;

    // Recursive Call --> pow(n) = 2 * pow(n - 1)
    int finalAns = 2 * pow(n -1);
    return finalAns;
}


// Print counting fron n to 1
void printCounting(int n) {

    // Base Case
    if(n == 0)
        return ;

    // Processing
    cout<<n<<" ";

    // Recursive Call --> print(n) = cout<<n and print(n - 1)
    printCounting(n - 1);
}
// Recursive Call is at the end of the function , so it is called Tail Recursion.


// Print counting fron 1 to n
void printCountingR(int n) {

    // Base Case
    if(n == 0)
        return ;

    // Recursive Call --> print(n) = print(n - 1) and cout<<n
    printCountingR(n - 1);
    
    // Processing
    cout<<n<<" ";
}
// Recursive Call is NOT at the end of the function , so it is called Head Recursion.


int getFactorial(int n) {

    // Base Case 
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

    cout<<"\nCounting (n to 1) : ";
    printCounting(n);

    cout<<"\n\nCounting (1 to n) : ";
    printCountingR(n);

    cout<<"\n\n2 raise to power "<<n<<" is : "<<pow(n)<<endl;

    cout<<"\nFibonacci Series : "<<FibonacciSeries(n)<<endl;

    cout<<"\nSum of "<<n<<" numbers is : "<<getSum(n)<<endl;

    return 0;
}