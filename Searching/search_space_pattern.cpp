#include<iostream>

using namespace std;

int Sqrt_with_0_precision(int x) {

    // Time Complexity --> O(log n)
    int s = 0;
    int l = x;
    int ans = -1;

    while(s <= l) {

        long long int mid = s + (l - s) / 2;

        long long int product = mid * mid;

        if(product == x ) {
            return mid;
        }
        else if(product < x) {
            // may or May not be the answer --> Store & Compute Approach
            ans = mid;
            s = mid + 1; // Goint to --> Right
        }
        else {
            l = mid - 1; //Going to the --> Left
        }
    }

    return ans;
}

double Sqrt_with_more_digit_precision(int x) {

    // Time Complexity --> O(log n) + O(Precision)

    int s = 0;
    int l = x;
    int ans = -1;

    while(s <= l) {
        long long int mid = s + (l - s) / 2;
        long long int product = mid * mid;

        if(product == x) {
            return mid;
        }
        else if(product < x) {
            ans = mid;
            s = mid + 1;
        }
        else {
            l = mid - 1;
        }
    }

    double sqrtAns = (double) ans; // I got 7.0

    // Precision upto how many digits
    int precision;
    cout<<"\nEnter the Precision upto how many digits : ";
    cin>>precision;

    double step = 0.1;
    
    while(precision--) {
        double j = sqrtAns;

        while(j * j <= x) {
            sqrtAns = j; // Store & Compute
            j = step + j; // j -> 7.1
        } 
        // After this while loop , I have got one precision answer
        step = step / 10;
    }
    return sqrtAns;
}


int main()
{
    int n;
    cout<<"\nSearch Space Pattern\n"<<endl;
    cout<<"Enter the Number : ";
    cin>>n;

    cout<<"Square root with 0 Precision is : "<<Sqrt_with_0_precision(n)<<endl;
    cout<<"\nAccurate Square root : "<<Sqrt_with_more_digit_precision(n)<<endl;

    // here for printing more than 6 pricision , we have to use printf()
    double ans = Sqrt_with_more_digit_precision(n);
    printf("Using Printf");
    printf("\nAnswer is : %.13f",ans);
    cout<<endl;
    
    return 0;
}

// LeetCode --> 69