// time:O(n)
//  space:O(n)
class Solution
{
public:
    void moveZeroes(vector<int> &nums)
    {
        vector<int> zero;
        vector<int> nonzero;
        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
            {
                zero.push_back(nums[i]);
            }
            else if (nums[i] != 0)
            { // else if isliye lgaya kyunki ho skta hai array khali ho toh iss condition mein na fss jaye
                nonzero.push_back(nums[i]);
            }
        }
        for (int i = 0; i < zero.size(); i++)
        {
            nonzero.push_back(zero[i]);
        }
        for (int i = 0; i < nums.size(); i++)
        {
            nums[i] = nonzero[i];
        }
    }
};