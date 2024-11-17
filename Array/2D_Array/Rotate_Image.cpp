#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<vector<int>> matrix;

    int nrows = matrix.size();
    int ncols = matrix[0].size();

    // 1) Transpose
    for(int i = 0; i < nrows; i++) {
        for(int j = i; j < ncols; j++)
            swap(matrix[i][j] , matrix[j][i]);
    }

    // 2) Row Wise Reverse 
    for(int i =0; i < nrows; i++) {
        reverse(matrix[i].begin() , matrix[i].end());
    }

    return 0;
}

// 1) Transpose
// 2) Row Wise Reverse