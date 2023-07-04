//time:O(2k)
// space:O(1)
class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k)
    {
        int l=0;//starting of the window
        int r=cardPoints.size()-k;//just after window
        int res=0;
        for(int i=r;i<cardPoints.size();i++)
        {
              res+=cardPoints[i];
        }
        int final=res;//we finally return max of all results therefore we are we are storing res in final
        cout<<res;
        while(r<cardPoints.size())
        {
            res+=cardPoints[l]-cardPoints[r];
            final=max(res,final);
            l+=1;
            r+=1;
        }
        return final;

    }
};