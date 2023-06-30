//(Merge sort)
// time:O(nlogn)
// heap sort
// time:O(nlogn)
// space: O(1)
{
    public :
        void mergeSort(vector<int> & nums){
            int r = nums.size() - 1;
int l = 0;
mergesort1(nums, l, r);
}
void mergesort1(vector<int> &nums, int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int m = (l + r) / 2;
    mergesort1(nums, l, m);
    mergesort1(nums, m + 1, r);
    merge1(nums, l, m, r);
}

void merge1(vector<int> &nums, int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;
    int L[n1], R[n2];
    for (int i = 0; i < n1; i++)
    {
        L[i] = nums[l + i];
    }
    for (int j = 0; j < n2; j++)
    {
        R[j] = nums[m + 1 + j];
    }
    int i = 0;
    int j = 0;
    int k = l;
    while (i < n1 && j < n2)
    {
        if (L[i] <= R[j])
        {
            nums[k] = L[i];
            i++;
        }
        else
        {
            nums[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1)
    {
        nums[k] = L[i];
        i++;
        k++;
    }
    while (j < n2)
    {
        nums[k] = R[j];
        j++;
        k++;
    }
}

void sortColors(vector<int> &nums)
{

    mergeSort(nums);
    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i];
    }
}
}
;