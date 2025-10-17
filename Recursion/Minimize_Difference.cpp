#include<iostream>

using namespace std; 

int Solve(vector<vector<int>>& mat, int target, int sum, int row) {

    if(row == mat.size())
        return abs(target - sum);

    int ans = INT_MAX;
    for(int col = 0; col < mat[row].size(); col++) {

        int recursionAns = Solve(mat, target, sum + mat[row][col], row + 1);
        ans = min(ans, recursionAns);
    }

    return ans;
}

int minimizeTheDifference(vector<vector<int>>& mat, int target) {

    int sum = 0, row = 0;
    return Solve(mat, target, sum, row);
}

int main() {

    int m, n, target;
    cout<<"\nEnter the Number of ROWS & COLUMNS : ";
    cin >> m >> n;

    vector<vector<int>> mat(m, vector<int>(n));
    cout<<"\nEnter the Elements of Matrix"<<endl;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> mat[i][j];
        }
    }

    cout<<"\nEnter the Target : ";
    cin >> target;

    cout<<"\nMinimized Difference is "<<minimizeTheDifference(mat, target)<<endl;

    return 0;
}

// Done with the Recursion Approach - Time Complexity can be improved using Dynamic Programming Approach.

// Time Complexity -> O(col^rows)
// Space Complexity -> O(rows)

// LeetCode - 1981.