//LeetCode 2016 -  Maximum Difference Between Increasing Elements

class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int max= 0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                int diff = nums[j]-nums[i];
                if(diff > max)
                {
                    max = diff;
                }
            }
        }
        if(max == 0)
        {
            return -1;
        }
        return max;
    }
};
