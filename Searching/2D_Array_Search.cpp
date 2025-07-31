#include<iostream>
using namespace std;

bool LinearSearch(int arr[][4] , int row , int col , int target) {
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

bool BinarySearch(int arr[][4] , int row , int col , int target) {
    int n = row * col; // Total Elements
    int s = 0;
    int l = n - 1;

    while(s <= l) {
        int mid = s + (l - s) / 2;

        // Finding row & col Index of 2D Array using mid
        int rowIndex = mid / col;
        int colIndex = mid % col;

        if(arr[rowIndex][colIndex] == target) {
            return true;
        }

        else if(arr[rowIndex][colIndex] < target) {
            s = mid + 1;
        }

        else {
            l = mid - 1;
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
    int target = 44;

    cout<<"\nLinear Search"<<endl;
    bool ansLinear = LinearSearch(arr,row,col,target);
    if(ansLinear == true)
    {
        cout<<"Element FOUND";
    } else{
        cout<<"Element NOT FOUND";
    }

    cout<<"\nBinary Search"<<endl;
    bool ansBinary = LinearSearch(arr,row,col,target);
    if(ansBinary == true)
    {
        cout<<"Element FOUND";
    } else{
        cout<<"Element NOT FOUND";
    }

    return 0;
}

// LeetCode --> 74.