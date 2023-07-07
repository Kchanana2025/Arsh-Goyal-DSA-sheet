class Solution {
public:
    int maxProfit(vector<int>& prices)
 {
          int size = prices.size();
        if (size == 0) {
            return 0;
        }
        
        bool isDecreasing = is_sorted(prices.rbegin(), prices.rend());
        if (isDecreasing)
        {
            return 0;
        }

        int max=INT_MIN;
       
        for(int j=0;j<prices.size()-1;j++)
        {     for( int k=j+1;k<prices.size();k++)
        { 
            if(prices[k]-prices[j]>max)
            
            max=prices[k]-prices[j];
           

        } 
        }
        return max;     
 }
};