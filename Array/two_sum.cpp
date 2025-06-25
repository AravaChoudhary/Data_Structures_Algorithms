#include<iostream>
using namespace std;

// Returning True OR False
bool TwoSum(int arr[] , int n , int target)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
                return true;
        }
    }

    return false;
}

// Function returning the PAIR which have the Target Sum Value
pair<int,int> TwoSumPair(int arr[] , int n , int target)
{
    // Assuming (-1,1) as NO Answer Found
    pair<int,int> ans = make_pair(-1,-1);

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                ans.first = arr[i];
                ans.second = arr[j];
                return ans;
            }
        }
    }

    return ans;
}


// Printing All Pairs
void TwoSumPrintAllPairs(int arr[] , int n , int target)
{
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i] + arr[j] == target)
            {
                cout<<"("<<arr[i]<<","<<arr[j]<<")"<<endl;
            }
        }
    }
}


int main()
{
    int arr[] = {10,5,20,15,30};
    int size = 5;
    int target = 35;

    bool ans = TwoSum(arr,size,target);
    if(ans == true)
        cout<<"\nThe Pair exists in the Array\n";
    else
        cout<<"The Pair does NOT exists in the Array"<<endl;


    pair<int,int> anspair = TwoSumPair(arr,size,target);
    if(anspair.first == -1 && anspair.second == -1)
    {
         cout<<"Pair NOT FOUND"<<endl;
    }
    else {
        cout<<"Pair FOUND : "<<anspair.first<<","<<anspair.second<<endl;
    }

    cout<<"\nPrinting All Pairs with Target Value : "<<endl;
    TwoSumPrintAllPairs(arr,size,target);

    return 0;
}


// LeetCode - 1.