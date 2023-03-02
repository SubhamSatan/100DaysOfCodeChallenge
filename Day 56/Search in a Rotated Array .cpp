Problem Solved : LeetCode 31 -> Search in a Rotated Array
Problem Link : https://leetcode.com/problems/search-in-rotated-sorted-array/
class Solution {
public:
    int search(vector<int>& nums, int target) {
        
        vector<int>::iterator it = find(nums.begin(), nums.end(), target);
    if (it != nums.end()) 
    {
        return it - nums.begin() ;
    }
        return -1;
    }
};
