class Solution
{
public:
    // size(),length() functions are same
    //  length() is used for strings and size() is used for other data structures
    int a;
    int findDuplicate(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() - 1; i++)
        {

            if (nums[i] == nums[i + 1])
            {
                return nums[i];
            }
        }
        return 0;
    }
};