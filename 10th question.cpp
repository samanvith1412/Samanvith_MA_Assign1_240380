// Intial solution(Got TLE(O(N^2log(N))))
// didn't pass 2 test cases

/*class Solution {
public:
    int is_present(vector<int> &nums,int x,int left,int right)
    { int mid=(left+right)/2;
    if(left>right)
    return -1;
    if(nums[mid]==x)
    return mid;
    else if(nums[mid]>x)
    return is_present(nums,x,left,mid-1);
    else
    return is_present(nums,x,mid+1,right);
    }
    vector<vector<int>> threeSum(vector<int>&nums)
    { vector<vector<int>> p;
    vector<int>v;
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    { for(int j=i+1;j<nums.size();j++)
    { int l=-nums[i]-nums[j];
    int x=is_present(nums,l,j+1,nums.size()-1);
    if(x!=-1)
    { v.clear();
    v.push_back(nums[i]);
    v.push_back(nums[j]);
    v.push_back(nums[x]);
    if(find(p.begin(),p.end(),v)==p.end())
    p.push_back(v);
    }
    }
    }
     return p;
    }
};*/

// I took help of chatgpt to get optimized solution

class Solution
{
public:
    vector<vector<int>> threeSum(vector<int> &nums)
    {
        vector<vector<int>> res;
        int n = nums.size();

        sort(nums.begin(), nums.end()); // Step 1: Sort the array

        for (int i = 0; i < n - 2; i++)
        {
            if (i > 0 && nums[i] == nums[i - 1])
                continue; // Skip duplicates for i

            int left = i + 1;
            int right = n - 1;

            while (left < right)
            {
                int sum = nums[i] + nums[left] + nums[right];

                if (sum == 0)
                {
                    res.push_back({nums[i], nums[left], nums[right]});

                    // Skip duplicates for left and right
                    while (left < right && nums[left] == nums[left + 1])
                        left++;
                    while (left < right && nums[right] == nums[right - 1])
                        right--;

                    left++;
                    right--;
                }
                else if (sum < 0)
                {
                    left++;
                }
                else
                {
                    right--;
                }
            }
        }

        return res;
    }
};
