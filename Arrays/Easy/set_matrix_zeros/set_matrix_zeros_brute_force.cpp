// time=(m*n)*(m+n)+(m*n)~O(n^3)
// space:O(1)
#include <iostream>
#include <vector>
using namespace std;
void set_row(int i, vector<vector<int>> &matrix)
{
    int n = matrix[0].size();
    for (int j = 0; j < n; j++) // traversing all columns and setting all columns of row ith to be 21474836
    {
        if (matrix[i][j] != 0) // I didnt write this
            matrix[i][j] = 21474836;
    }
}
void set_column(int j, vector<vector<int>> &matrix)
{
    int m = matrix.size();
    for (int i = 0; i < m; i++) // traversing all the rwos and setting that particular column as 21474836
    {
        if (matrix[i][j] != 0)
            matrix[i][j] = 21474836;
    }
}
void set_it(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (matrix[i][j] == 21474836)
            {

                matrix[i][j] = 0;
            }
        }
    }
}
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size();    // NO OF ROWS
        int n = matrix[0].size(); // NO OF COLUMNS
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    set_row(i, matrix);
                    set_column(j, matrix);
                }
            }
        }
        set_it(matrix);
    }
};