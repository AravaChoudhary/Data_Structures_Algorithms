#include<iostream>
using namespace std;

bool Search2DArray(int arr[][4] , int row , int col , int target)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(arr[i][j] == target)
                return true;
        }
    }
    return false;
}

int main()
{
    int arr[3][4] = {
                        {10,11,12,13},
                        {20,21,22,23},
                        {31,32,44,55}
                    };

    int row = 3;
    int col = 4;
    int target = 442;

    bool ans = Search2DArray(arr,row,col,target);
    if(ans == true)
    {
        cout<<"Element FOUND";
    } else{
        cout<<"Element NOT FOUND";
    }

    return 0;
}