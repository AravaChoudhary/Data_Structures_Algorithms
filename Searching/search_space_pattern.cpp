#include<iostream>

using namespace std;

int Sqrt_with_0_precision(int x) {
        
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

double Sqrt_with_two_digit_precision(int x) {
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

    double factor = 1;
    cout<<"First : "<<sqrtAns<<endl;
    double finalAns = sqrtAns;

    for(int i = 0; i < precision; i++) {

        factor = factor / 10.0;
        cout<<"Factor : "<<factor<<endl;


        for(int y = 0; y < 10; y++) {

            double toAdd = y * factor;
            cout<<"toAdd : "<<toAdd<<endl;


            if(sqrtAns + toAdd < x) {
                finalAns = sqrtAns + toAdd;
                cout<<"sqrtAns Updated to : "<<finalAns; // Store & Compute
                break;
            } else {
                break;
            }
        }
    }

    return finalAns;
}


int main()
{
    int n;
    cout<<"Search Space Pattern\n"<<endl;
    cout<<"Enter the Number : ";
    cin>>n;

    cout<<"Square root with 0 Precision is : "<<Sqrt_with_0_precision(n)<<endl;
    cout<<"Accurate Square root : "<<Sqrt_with_two_digit_precision(n)<<endl;
    
    return 0;
}

// LeetCode --> 69