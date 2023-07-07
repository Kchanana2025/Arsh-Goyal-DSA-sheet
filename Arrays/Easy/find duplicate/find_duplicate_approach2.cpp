class Solution {
public:
//time complexity O(2n)=O(n)
//space complexity O(n) 

    int findDuplicate(vector<int>& nums) 
    {
      int arr[1000000]={0};//notes waali cheez theek krni hai
      for(int i=0;i<nums.size();i++){
          arr[nums[i]]++;//array outof bounds jaa rha
      }
      for(int i=0;i<nums.size();i++){
          if(arr[i]>1)//question dhyan se smjho aisa [2 2 2 2 2] test case bhi ho skta hai u cant write if(arr[i]==2) or even arr[i]!=1 arr[0] atak jayega phir
          {
             return i;
          }
      }

    return 0;
        
        
    }
};



