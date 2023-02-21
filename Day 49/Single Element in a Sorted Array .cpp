//LeetCode 540 -> Single Element in a Sorted Array
//Problem Link : https://leetcode.com/problems/single-element-in-a-sorted-array/


class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
        {
            return nums[0];
        }
        for(int i = 0;i<nums.size();i+=2)
        {
            if(nums[i]!=nums[i+1])
            {
                return nums[i];
            }
        }
        return 0;
    }
};
