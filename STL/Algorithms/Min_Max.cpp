#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
    int a = 10;
    int b = 15;
    cout<<"Max : "<<max(a,b)<<endl;
    cout<<"Min : "<<min(a,b)<<endl;


    cout<<"\nOn a Vector";
    vector<int> arr;
    arr.push_back(10);
    arr.push_back(20);
    arr.push_back(30);
    arr.push_back(40);
    arr.push_back(50);

    cout<<"\nMin Element : ";
    auto min = min_element(arr.begin(),arr.end());
    cout<<*min<<endl;

    cout<<"Max Element : ";
    auto max = max_element(arr.begin(),arr.end());
    cout<<*max<<endl;
    
    return 0;
}