#include<iostream>

using namespace std;

int main() {

    cout<<"Solid Half Diamond";

    int n;
    cout<<"Enter the Value of n : ";
    cin>>n;

    for(int i = 0; i < 2 * n - 1; i++)
    {
        int cond = 0;

        if(i < n)       // Growing Phase of Diamond
            cond = i;
        else            // Shrinking Phase of Diamond
            cond = n - (i % n) - 1;

        // can also use ternary operator for cond -> int cond = i < n ? i : n - (i % n) - 2;
        // int cond = i < n ? i : n - (i % n) - 2;
        
        for(int j = 0; j < cond; j++)
        {
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

    return 0;
}