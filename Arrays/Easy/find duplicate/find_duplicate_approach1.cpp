//(hm inko brute force /better approach mein categorize nai kr skte because hm question ke constrainst hi follow nai kr rhe)constraints
//  follow krne ke baad we can say ki ye bf ya better hai
// O(n+nlogn)=nlogn
// O(1)
// but we modified the array that is not allowed
class Solution
{
public:
    // size(),length() functions are same
    //  length() is used for strings and size() is used for other data structures
    // we have modified the array
    // time complexity n+nlogn=nlogn
    // space complexity O(1) for i=0
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
