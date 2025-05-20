class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        sort(nums.begin(), nums.end()); // Step 1: Sort the array(to make counting easy)
        int p = nums[0], count = 1, maxCount = 1, majority = nums[0];

        for (int i = 1; i < nums.size(); i++)
        {
            if (nums[i] == nums[i - 1])
            {
                count++;
            }
            else
            {
                count = 1;
            }

            if (count > nums.size() / 2)
            {
                majority = nums[i]; // Here we can find majority element if it appears more than n/2 times
                break;
            }
        }
        return majority;
    }
};
