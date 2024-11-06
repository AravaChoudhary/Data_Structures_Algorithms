#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // 2D Vector
    vector<vector<int> > arr(5 ,vector<int>(4,0));
    int totalRows = arr.size();
    int totalColumns = arr[0].size();

    // Jaggered 2D Vector
    vector<vector<int> > brr(4); // No. of Rows = 4
    brr[0] = vector<int> (4);
    brr[1] = vector<int> (2);
    brr[2] = vector<int> (3);
    brr[3] = vector<int> (3);
    int totalRowCount = brr.size();
    // int totalColumnsCount = brr[i].size();


    return 0;
}