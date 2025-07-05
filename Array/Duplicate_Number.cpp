#include<iostream>
#include<algorithm>

using namespace std;

int bruteforce(int arr[] , int n)
{
    // Sorting Method
    sort(arr , arr + n);

    for(int i = 0; i < n - 1; i++)
    {
        if(arr[i] == arr[i + 1])
            return arr[i];
    }
    return -1;
}

int NegativeMarkingSolution(int arr[] , int n)
{
    // -VE Marking Method
    int ans = -1;

    for(int i = 0; i < n ; i++)
    {
        int idx = abs(arr[i]);

         // Checking it is Already Visited or Not ?
        if(arr[idx] < 0)
        {
            ans = idx;
            break;
        }

        //Marking Visited
        arr[idx] = arr[idx] * (-1);
    }

    return ans;

    // But This Method is Modifying the Array Which I don't want.
}

int CorrectPositionMethod(int arr[])
{
    // Positioning Method
    while(arr[0] != arr[arr[0]])
    {
        swap(arr[0] , arr[arr[0]]);
    }

    return arr[0];
} 

int main()
{
    int n, arr[50];
    cout<<"\nEnter the Size of the Array : ";
    cin>>n;

    cout<<"\nEnter the Array Elements : \n";
    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    // cout<<"Brute Force Approach\nThe Duplicate Number is : "<<bruteforce(arr,n)<<endl; // TC --< O(nlogn) , SC --> O(n) 

    // cout<<"Optimezed Approach Approach\nThe Duplicate Number is : "<<NegativeMarkingSolution(arr,n)<<endl; // TC --< O(n) , SC --> O(1)

    cout<<"Without Modifying Array Approach\nThe Duplicate Number is : "<<CorrectPositionMethod(arr)<<endl;
    

    return 0;
}

// LeetCode - 287. 