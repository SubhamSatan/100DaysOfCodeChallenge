//LeetCode 268 -> Missing Number 
//Problem Link : https://leetcode.com/problems/missing-number/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i = 0;i<nums.size();i++)
        {
           if(nums[i] != i)
           {
               return i ;
           }
        }
        if(nums[nums.size()-1]!=nums.size())
        {
            return nums.size();
        }
        return -1;
    }
};
