#include<iostream>
using namespace std;

void TranspoeMatrix(int arr[][3] , int row , int col)
{
    int ans[3][3];

    for(int i =0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            ans[i][j] = arr[j][i];
        }
    }

    for(int i =0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int arr[3][3] = {
                        {10,11,12},
                        {20,21,22},
                        {30,31,32}
                    };

    int rowSize = 3;
    int colSize = 3;

    cout<<"Transposr of the matrix will be : "<<endl;
    TranspoeMatrix(arr,rowSize,colSize);

    return 0;
}