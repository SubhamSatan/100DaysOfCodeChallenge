//LeetCode 1748 : Sum of Unique Elements 
//Problem Link : https://leetcode.com/problems/sum-of-unique-elements/

//Approach: 
//Initialize i and j and keep a count 
//For every iteration of i run an iteration of j
//SO we are basically Checking if i has a duplicate value or not 
//If not we are adding the non-duplicate values to sum 

class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int sum = 0;
        for(int i = 0;i<nums.size();i++)
        {
            int count = 0;
            for(int j = 0;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    count++;
                }
            }
            if(count == 1)
            {
                sum = sum + nums[i];
            }
        }
        return sum;
    }
};
