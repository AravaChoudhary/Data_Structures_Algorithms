#include<iostream>
using namespace std;

void RowSum(int arr[][4] , int row , int col)
{
    for(int i = 0; i < row; i++)
    {
        int sum = 0;

        // Caluculating sum for each Row
        for(int j = 0; j < col; j++)
        {
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
}

void ColSum(int arr[][4] , int row , int col)
{
    for(int j = 0; j < col; j++)
    {
        int sum = 0;

        //calculating sum for each Columns
        for(int i = 0; i < row; i++)
        {
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
    }
}

void DiagonalSum(int arr[][4] , int row)
{
    int sum = 0;

    for(int i = 0; i < row; i++)
    {
        sum = sum + arr[i][i];
    }
    cout<<sum<<endl;
}

void SecondDiagonalSum(int arr[][4] , int row)
{
    int sum = 0;

    for(int i = 0; i < row; i++)
    {
        sum = sum + arr[i][2 - i];
    }
    cout<<sum<<endl;
}


int main()
{
    int arr[3][4] = {
                        {10,10,10},
                        {50,20,80},
                        {30,70,40}
                    };

    int rowSize = 3;
    int colSize = 4;

    cout<<"\nRow Sum : "<<endl;
    RowSum(arr,rowSize,colSize);

    cout<<"\nColumn Sum : "<<endl;
    ColSum(arr,rowSize,colSize);

    cout<<"\nDiagonal Sum : ";
    DiagonalSum(arr,rowSize);

    cout<<"\nSecond Diagonal Sum : ";
    SecondDiagonalSum(arr,rowSize);

    return 0;
}