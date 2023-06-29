class Solution
{
public:
    // size(),length() functions are same
    //  length() is used for strings and size() is used for other data structures
    int a;
    int findDuplicate(vector<int> &nums)
    {
        int x;
        // initialized count vector to 0
        // count vector has same size as of nums
        vector<int> count(nums.size(), 0);
        for (int i = 0; i < nums.size(); i++)
        {
            count[nums[i]]++;
        }
        for (int i = 0; i < nums.size(); i++)
        {
            if (count[i] > 1)
                x = i;
        }
        return x;
    }
};