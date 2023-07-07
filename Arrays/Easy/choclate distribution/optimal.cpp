// O(n)
// O(1)
class Solution
{
public:
    long long findMinDiff(vector<long long> a, long long n, long long m)
    {
        if (m == 0 || n == 0)
            return 0; // these values are not given in the question bss hamien edge case bana tha toh bna dia aur random 0,1 value likhdi

        if (n < m)
            return -1; // these values are not given in the question
        sort(a.begin(), a.end());
        int left = 0;
        int right = m - 1; // we created a m size window
        long long mini = INT_MAX;
        while (right <= a.size() - 1)
        {
            mini = min(mini, a[right] - a[left]);
            cout << mini;
            left++;
            right++;
        }
        return mini;
    }
};