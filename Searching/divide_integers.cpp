// Q. Given two integers one is a dividend and the other is the divisor,
// we need to find the quotient when the dividend is divided by the 
// divisor without the use of any ” / “ and ” % “ operators.

// Input: dividend = 10, divisor = 2
// Output: 5
// Explanation: 10/2 = 5.

// Input: dividend = 10, divisor = 3
// Output: 3
// Explanation: 10/3 = 3.33333… which is truncated to 3.

// Input: dividend = 10, divisor = -2
// Output: -5
// Explanation: 10/-2 = -5

#include<iostream>
#include<vector>

using namespace std;

int getQuotient(int dividend, int divisor) {

    // Search Space --> (+ve dividend) to (-ve dividend)

    int s = 0;
    int l = dividend;
    int ans = -1;

    while(s <= l) {

        int mid = s + ((l - s) >> 1); // Used Right Shift because not allowed to use '/' and '%'

        if(divisor * mid == dividend)
            return mid;
        if(divisor * mid < dividend) {
            // Store & Compute
            ans = mid;
            s = mid + 1;
        }
        else {
            l = mid - 1;
        }
    }

    return ans;
}

int main() {

    int dividend , divisor;
    cout<<"Enter Dividend : ";
    cin>>dividend;

    cout<<"Enter Divisor : ";
    cin>>divisor;

    int ans = getQuotient(abs(dividend), abs(divisor));
    //we are getting the answer according to the +ve values.

    if((dividend < 0 and divisor > 0) or (dividend > 0 and divisor < 0))
        ans = 0 - ans;

    cout<<"Final Answer : "<<ans<<endl;

    return 0;

}