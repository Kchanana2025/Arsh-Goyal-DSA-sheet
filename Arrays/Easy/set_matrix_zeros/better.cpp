// time:O(n^2)
// space:O(m+n)
void set_it(vector<vector<int>> &matrix, int *arr1, int *arr2)
{
    int m = matrix.size();
    int n = matrix[0].size();
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {

            if (arr1[i] || arr2[j]) // arr1 aur arr2 ka size bhjne ki zarurat nai hai ye condition chalegi hi un elements ke lie jo matrix mein honge
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
        int arr1[1000] = {0};     // rows
        int arr2[1000] = {0};     // columns

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (matrix[i][j] == 0)
                {
                    arr1[i] = 1;
                    arr2[j] = 1;
                }
            }
        }
        // for (int i = 0; i < m; i++)
        //     cout << arr1[i] << " ";
        // cout << endl;
        // for (int i = 0; i < n; i++)
        //     cout << arr2[i] << " ";
        // cout << endl;
        set_it(matrix, arr1, arr2);
    }
};