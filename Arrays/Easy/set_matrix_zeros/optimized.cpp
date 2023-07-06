// time:O(n^2)
// space:O(1)

class Solution
{
public:
    void setZeroes(vector<vector<int>> &matrix)
    {
        int rows = matrix.size();       // NO OF ROWS
        int columns = matrix[0].size(); // NO OF COLUMNS
        // int arr1[1000] = {0};     // rows ::matrix[][0]
        // int arr2[1000] = {0};     // columns:: matrix[0][]
        int col0 = 1;
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < columns; j++)
            {
                if (matrix[i][j] == 0)
                {
                    matrix[i][0] = 0;
                    if (j != 0)
                        matrix[0][j] = 0;
                    else
                        col0 = 0;
                }
            }
        }
        // we will first iterate over other part of the matrix kyunki phle 0th row aur 0th       column mein iterate krne se uneccessary 0's bn jayenge
        for (int i = 1; i < rows; i++)
        {
            for (int j = 1; j < columns; j++)
            {
                if (matrix[i][0] == 0 || matrix[0][j] == 0)
                {
                    matrix[i][j] = 0;
                }
            }
        }
        // ab aii 0th row aur 0th column ki baari
        if (matrix[0][0] == 0)
        {
            for (int j = 0; j < columns; j++)
            {
                matrix[0][j] = 0;
            }
        }
        if (col0 == 0)
        {
            for (int i = 0; i < rows; i++)
            {
                matrix[i][0] = 0;
            }
        }
        // matrix[0][0] aur col0 ke 0's ki vjah se jagah jagah zeros aane thee bss wohi reh gye thee like row0 and column 0
        //  (0th row aur 0th column ki vjah se jahah jahan 0 aane thee wo aa gye expect for mat[0][0] and col0 element)
        }
};