#include<iostream>

using namespace std;

int main() {

    cout<<"Fancy Pattern 1"<<endl;

    int n;
    cout<<"Enter the Value of n : ";
    cin>>n;

    if(n > 9)
    {
        cout<<"Please put a number between 1 and 9"<<endl;
        return 0;
    }


    for(int i = 0; i < n; i++)
    {
        int start_num_idx = (8 - i);
        int num = (i + 1);
        int count_num = num;

        for(int j = 0; j < 17; j++)
        {
            if(j == start_num_idx and count_num > 0)
            {
                cout<<num;
                start_num_idx = start_num_idx + 2;
                count_num--;
            }
            else
                cout<<"*";

        }
        cout<<endl;
    }

    return 0;
}