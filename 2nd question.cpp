class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    { /*int max_sum=INT_MIN;
    for(int i=0;i<nums.size();i++)
      { vector<int>::iterator it;
      for(int j=0;j<nums.size()-i;j++)
      {it=nums.begin()+j;
      int sum=accumulate(it,it+i+1,0);
      if(sum>max_sum)
      max_sum=sum;
      }
      }
      return max_sum;*/
        // brute force O(n^3)(not suggestable)

        // later I got even O(N^2) solution by doing max of sum over loops(even that is not suggestable)

        int sum = 0, maxi = INT_MIN;
        for (int i = 0; i < nums.size(); i++)
        {
            sum += nums[i];
            maxi = max(sum, maxi); // I have wrote this code after reading about kadane's algorithm
            if (sum < 0)           // I am unable to do this on my own.
                sum = 0;
        }
        return maxi;
    }
};