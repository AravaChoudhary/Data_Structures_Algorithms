#include<iostream>
#include<vector>

using namespace std;

long long BinarySearch(long long dividend , long long divisor) {
        long long int s = 0 , l = dividend;
        long long int ans = 0;

        while(s <= l) {
            long long int mid = s + (l - s) / 2;

            // Is the answer mid ?
            if(mid * divisor <= dividend) {
                ans = mid;
                s = mid +1;
            }

            else {
                l = mid - 1;
            }
        }
        return ans; 
    }

int divide(int dividendx, int divisorx) {

    if(dividendx == INT_MIN and divisorx == -1)
        return INT_MAX;

    bool ans_positive_sign = true; // Is answer +ve OR -ve

    if(dividendx < 0 and divisorx > 0)
        ans_positive_sign = false;
    if(dividendx > 0 and divisorx < 0)
        ans_positive_sign = false;

    // Now I can divide with Binary Search using +ve number only
    long long int dividend = abs((long long)dividendx);
    long long int divisor = abs((long long)divisorx); 

    long long int ans = BinarySearch(dividend,divisor);

    if(ans_positive_sign == false)
        return -ans;

    return ans;      
}

int main()
{
    int dividend , divisor;
    cout<<"Enter Dividend : ";
    cin>>dividend;

    cout<<"Enter Divisor : ";
    cin>>divisor;

    // Target is to find the Quotient
    cout<<"Answer is : "<<divide(dividend,divisor)<<endl;

    return 0;
}

// LeetCode --> 29.