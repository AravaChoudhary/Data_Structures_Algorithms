#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

void Double(int a) 
{
    cout<<2 * a<<" ";
}

bool checkEven(int a)
{
    return a % 2 == 0;
}

int main()
{
    vector<int> arr(6);
    arr[0] = 101;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 101;
    arr[4] = 202;
    arr[5] = 45;

    cout<<"\nFor Each : ";
    for_each(arr.begin(),arr.end(),Double);

    cout<<"\nFind : ";
    int target = 30;
    auto it = find(arr.begin(),arr.end(),target);
    cout<<*it<<endl;

    cout<<"Find if : ";
    auto itr = find_if(arr.begin(),arr.end(),checkEven);
    cout<<*itr<<endl;

    cout<<"Count : ";
    int target2 = 101;
    int ans = count(arr.begin(),arr.end(),target2);
    cout<<ans<<endl;

    cout<<"Count if : ";
    int ans2 = count_if(arr.begin(),arr.end(),checkEven);
    cout<<ans2<<endl;

    cout<<"Sort : ";
    sort(arr.begin(),arr.end());
    for(int i : arr) {
        cout<<i<<" ";
    }

    cout<<"\nReverse : ";
    reverse(arr.begin(),arr.end());
    for(int i : arr) {
        cout<<i<<" ";
    }

    cout<<"\nRotate : ";
    rotate(arr.begin(),arr.begin() + 3,arr.end());
    for(int i : arr) {
        cout<<i<<" ";
    }

    cout<<"\nUnique : ";
    auto itu = unique(arr.begin(),arr.end());
    // it iterator ke pehele saare unique elements present hai it ke baad saare duplicates hai
    arr.erase(itu,arr.end());
    for(int i : arr) {
        cout<<i<<" ";
    }

    cout<<"\nPartition : ";
    auto itp = partition(arr.begin(),arr.end(),checkEven);
    for(int i : arr) {
        cout<<i<<" ";
    } cout<<endl;


    return 0;
}