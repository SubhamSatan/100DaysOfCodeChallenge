//LeetCode 1480 -> Running Sum of 1D Array

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sum = 0;
        vector<int> output;
        for(int i = 0;i<nums.size();i++)
        {
            sum = sum + nums[i];
            output.push_back(sum);
        }
        return output;
    }
};
