// time:O(n^2)
// space:O(m+n)
class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int m = matrix.size();    // NO OF ROWS
        int n = matrix[0].size(); // NO OF COLUMNS
        set<int> row, col;        // creating two sets to store row and column

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }

        for (int i : row)
        {
            for (int j = 0; j < n; j++)
            {
                matrix[i][j] = 0;
            }
        }
        for (int j : col)
        {
            for (int i = 0; i < m; i++)
            {
                matrix[i][j] = 0;
            }
        }
    }
};