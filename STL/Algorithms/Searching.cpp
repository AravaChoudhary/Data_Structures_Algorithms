#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    cout<<"Binary Search : ";
    int target = 40;
    auto it = binary_search(arr.begin(),arr.end(),target);
    cout<<it<<endl;

    cout<<"Lower Bound : ";
    auto lb = lower_bound(arr.begin(),arr.end(),22);
    cout<<*lb<<endl;

    cout<<"Upper Bound : ";
    auto ub = upper_bound(arr.begin(),arr.end(),40);
    cout<<*ub<<endl;

    // Equal Range
    return 0;
}