class Solution
{
public:
    void nextPermutation(vector<int> &nums)
    {
        int k = -1;
        int n = nums.size(); // Intially I didn't get idea of how to start. Then I looked at hints in leetcode.
        for (int i = n - 2; i >= 0; i--)
        {
            if (nums[i] < nums[i + 1]) // Here in this loop I am trying to find the element where it is decreasing left to right.
            {
                k = i; // If it is not decreasing anywhere it is biggest permutation.
                break;
            }
        }
        if (k != -1)
        {
            for (int i = n - 1; i >= k; i--)
            {
                if (nums[i] > nums[k]) // In this loop I am trying to find element which we can swap.So we need element>that point and smallest.
                {
                    swap(nums[i], nums[k]);
                    break;
                }
            }
            sort(nums.begin() + k + 1, nums.end()); // Just sort remaining part as it is decreasing(just reverse it).
        }
        if (k == -1)
            reverse(nums.begin(), nums.end()); // If it is biggest then just reverse.
    }
};