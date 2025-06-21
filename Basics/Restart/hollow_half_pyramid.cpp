#include<iostream>

using namespace std;

int main() {
    cout<<"DSA Restart";
    cout<<"Numeric Hollow Half Pyramid\n";
    int n;
    cout<<"Enter the Value of n : ";
    cin>>n;

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            if(j == 0 or j == i or i == n - 1)
                cout<<j + 1;
            else
                cout<<" ";
        }
        cout<<endl;
    }

    return 0;
}