class Solution
{
public:
    // size(),length() functions are same
    //  length() is used for strings and size() is used for other data structures
    // time complexity n+nlogn=nlogn
    // space complexity O(1) for i=0
    // But we have modified the array which is not allowed
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
// ***********************************************************************************
// Time:O(n)
// space:O(n)
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
// ******************************************************************************************************
// Binary search approach

//    **********************************************************************************************
// Totoise method-(best soln)