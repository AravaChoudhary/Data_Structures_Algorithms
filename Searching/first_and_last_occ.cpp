#include<iostream>
#include<vector>

using namespace std;

void first_occurence(int arr[] , int n , int target , int &ansIdx) {
    int s = 0;
    int l = n - 1;

    while(s <= l) {

        int mid = s + (l - s) / 2;

        if(arr[mid] == target) {
            // may or may not be the first occurence
            // Store & Compute
            ansIdx = mid;

            // now going left to get the first occurence
            l = mid - 1;
        }
        else if(arr[mid] > target) {
            l = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
}

void last_occurence(int arr[] , int n , int target , int &ansIdx) {
    int s = 0;
    int l = n - 1;

    while(s <= l) {

        int mid = s + (l - s) / 2;

        if(arr[mid] == target) {
            // may or may not be the first occurence
            // Store & Compute
            ansIdx = mid;

            // now going right to get the larst occurence
            s = mid + 1;
        }
        else if(arr[mid] > target) {
            l = mid - 1;
        }
        else {
            s = mid + 1;
        }
    }
}

int main()
{
    int arr[] = {10,20,20,20,30,40,50,60,70,70,80,90};
    int n = 11;
    int target = 20;
    int firstIdx = -1; // -1 means target not found
    int lastIdx = -1;

    first_occurence(arr,n,target,firstIdx);
    cout<<"\nFirst Occurence Index : "<<firstIdx<<endl;

    last_occurence(arr,n,target,lastIdx);
    cout<<"\nLast Occurence Index : "<<lastIdx<<endl;

    int total_occurence = lastIdx - firstIdx + 1;
    cout<<"\nTotal Occurence : "<<total_occurence<<endl;

    return 0;
}

// LeetCode --> 34