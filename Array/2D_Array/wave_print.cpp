#include <iostream>
#include <vector>

using namespace std;

void WavePrint(vector<vector<int> > v)
{
    int row = v.size();
    int col = v[0].size();

    for (int startCol = 0; startCol < col; startCol++) // Initialize startCol to 0 and loop till col
    {
        // Even Number Column - Top -> Bottom
        if ((startCol & 1) == 0)
        {
            for (int i = 0; i < row; i++)
            {
                cout << v[i][startCol] << " ";
            }
        }
        else
        { // Odd Number Column - Bottom -> Top
            for (int i = row - 1; i >= 0; i--)
            {
                cout << v[i][startCol] << " ";
            }
        }
    }
}

int main()
{
    vector<vector<int> > v{ // Space added between angle brackets
        vector<int>{1, 2, 3, 4},
        vector<int>{5, 6, 7, 8},
        vector<int>{9, 10, 11, 12},
        vector<int>{13, 14, 15, 16},
        vector<int>{17, 18, 19, 20}
    };

    WavePrint(v);

    return 0;
}