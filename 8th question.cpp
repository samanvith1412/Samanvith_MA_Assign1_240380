class Solution
{
public:
    void sortColors(vector<int> &nums) // BUBBLE SORT((O(N^2)))
    {
        for (int i = 0; i < nums.size(); i++) // I know that there are many sorting algorithms
        {
            for (int j = 0; j < nums.size() - i - 1; j++) // In question they have asked in place alogorithm
            {
                if (nums[j] > nums[j + 1]) // (A)Insertion sort O(N) is best and (B)Quick sort(O(NlogN)) is also better.
                    swap(nums[j], nums[j + 1]);
            } // Left it because got 97% beats in leetcode.
        }
    }
};