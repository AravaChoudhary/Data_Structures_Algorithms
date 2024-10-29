#include<iostream>

using namespace std; 

// Time Complexity --> O(rowSize * colSize)
// Space Complexity --> O(1)

int MinElement(int arr[][3] , int row , int col)
{
    int min_value = INT_MAX;
    
    for(int i =0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            min_value = min(arr[i][j] , min_value);
        }
    }
    return min_value;
}


int MaxElement(int arr[][3] , int row , int col)
{
    int max_value = INT_MIN;
    
    for(int i =0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            max_value = max(arr[i][j] , max_value);
        }
    }
    return max_value;
}

int main()
{
    int arr[3][3];
    int rowSize = 3;
    int colSize = 3;
    
    cout<<"Enter the Elements : "<<endl;
    for(int i = 0; i < rowSize; i++)
    {
        for(int j = 0; j < colSize; j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    int min = MinElement(arr,rowSize,colSize);
    cout<<"Minimum Element of the Array is : "<<min<<endl;

    int max = MaxElement(arr,rowSize,colSize);
    cout<<"Maximum Element of the Array is : "<<max<<endl;

    return 0;
}