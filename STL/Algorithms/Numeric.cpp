#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main()
{
    vector<int> arr(5);
    arr[0] = 101;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 101;
    arr[4] = 202;

    int totalSum = accumulate(arr.begin(),arr.end(),0);
    cout<<"Total Sum : "<<totalSum<<endl;

    vector<int> first;
    first.push_back(1);
    first.push_back(2);
    first.push_back(3);

    vector<int> second;
    second.push_back(3);
    second.push_back(4);
    second.push_back(5);

    int innerProd = inner_product(first.begin(),first.end(),second.begin(),0);
    cout<<"Inner Product : "<<innerProd<<endl;

    cout<<"Partial Sum : ";
    vector<int> result(first.size());
    partial_sum(first.begin(),first.end(),result.begin());
    for(int i : result) {
        cout<<i<<" ";
    } cout<<endl;

    cout<<"Iota : ";
    vector<int> io(5);
    iota(io.begin(),io.end(),200);
    for(int i : io) {
        cout<<i<<" ";
    } cout<<endl;

    return 0;
}