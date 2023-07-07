class Solution {
public:
//time complexity O(n)
//space complexity O(1) 

    int findDuplicate(vector<int>& nums) 
    {
   int slow=nums[0];
    int fast=nums[0];
    //do while lgaya hai kyunki initially toh dono same hain
    do
    {
        slow=nums[slow];
        fast=nums[nums[fast]];
    }while(slow!=fast);
    fast=nums[0];
    while(slow!=fast)
    {
        slow=nums[slow];
        fast=nums[fast];

    }
    return slow;
        
        
    }
};



