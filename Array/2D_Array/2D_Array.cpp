#include<iostream>
using namespace std;

int main()
{
    int arr[3][3] = {
                        {10,20,100},
                        {30,40,200},
                        {50,60,300}
                    };

    // cout<<arr[1][1];

    // Traversing entire 2D Array

    int row = 3;
    int col = 3;

    cout<<"\n2D ARRAY Elements ROW WISE : "<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\n2D ARRAY Elements COLUMN WISE : "<<endl;
    for(int j = 0; j < col; j++)
    {
        for(int i = 0; i < row; i++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // Diagonal Matrix --> Only SQUARE MATRIX contains Diagonals  --> with O(n^2) Time Complexity
    cout<<"\nDiagoanl Elements of the 2D ARRAY : "<<endl;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(i == j)
                cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // It can also be done easily with O(n) Time Complexity 
    cout<<"\nDiagonal Elements with TC = O(n) : "<<endl;
    for(int i = 0; i < row; i++)
    {
        cout<<arr[i][i]<<" ";
    }

    cout << "\nSecondary Diagonal: \n";
    for (int i = 0; i < row; i++) {
        cout << arr[i][2 - i] << " ";
    }
    cout << endl;


    // cout<<"Printing 2D ARRAY Elements COLUMN WISE(Works for only SQUARE MATRIX) : "<<endl;
    // for(int i = 0; i < row; i++)
    // {
    //     for(int j = 0; j < col; j++)
    //     {
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }


    // Taking Input 
    int array[2][3];
    int r = 2;
    int c = 3;

    for(int i = 0; i < r; i++)
    {
        for(int j =0; j < c; j++)
        {
            cout<<"\n\nEnter value for ("<<i<<")th Row and ("<<j<<")th Column";
            cin>>array[i][j];
        }
    }

    cout<<"\nPrinting 2D Array : "<<endl;
    for(int i = 0; i < r; i++)
    {
        for(int j = 0; j < c; j++)
        {
            cout<<array[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}