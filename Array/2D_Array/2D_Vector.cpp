#include<iostream>
#include<vector>

using namespace std;

bool Search2DVector(vector<vector<int> > arr , int target)
{
    int row = arr.size();
    int col = arr[0].size();

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
    vector<vector<int> > arr (4,vector<int> (3,0));
    int rowSize = arr.size();
    int colSize = arr[0].size();

    cout<<"Enter the Elements : "<<endl;
    for(int i = 0; i < rowSize; i++)
    {
        for(int j = 0; j < colSize; j++)
        {
            cin>>arr[i][j];
        }
        cout<<endl;
    }

    int target;
    cout<<"Enter the Value that you want to Search : ";
    cin>>target;

    int ans = Search2DVector(arr,target);
    if(ans == true)
    {
        cout<<"Element FOUND";
    } else{
        cout<<"Element NOT FOUND";
    }

    return 0;
}