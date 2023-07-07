//time=O(n)
//space:O(1)
class Solution {
public:
    int maxProfit(vector<int>& prices)
 {  
      int left=0,right=1;int profit=0;int profit_helper;
      while(right<prices.size())
   {
   if(prices[left]<prices[right])
      {
        profit_helper=prices[right]-prices[left];
        profit=max(profit_helper,profit);
      }
      else
      {
          left=right;
          
      }
      right+=1;
 }
      return profit;
 }
};


