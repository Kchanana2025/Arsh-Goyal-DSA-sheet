void set_row(int i, vector<vector<int>> &matrix)
{
    int n = matrix[i].size();
    for (int j = 0; j < n; j++) // traversing all columns and setting all columns of row ith to be -1
    {
        matrix[i][j] = -1; // we are setting it to -1 because if we set it to 0 then when we again traverse to find zeros we will find extra zeros and therefore we will set those rows and columns to be zero which shouldn't be
    }
}
void set_column(int j, vector<vector<int>> &matrix)
{
    int m = matrix.size();
    for (int i = 0; i < m; i++) // traversing all the rwos and setting that particular column as -1
    {
        matrix[i][j] = -1;
    }
}
void set_it(vector<vector<int>> &matrix)
{
    int m = matrix.size();
    for (int i = 0; i < m; i++)
    {
        int n = matrix[i].size();
        for (int j = 0; j < n; j++)
        {
            if (matrix[i][j] == -1)
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
        int m = matrix.size(); // NO OF ROWS
        for (int i = 0; i < m; i++)
        {
            int n = matrix[i].size(); // NO OF COLUMNS
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