class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};

๐๐๐ฎ๐๐ฌ๐ญ๐ข๐จ๐ง: Majority Element
https://lnkd.in/dfQmeU5a
๐ ๐๐ฉ๐ฉ๐ซ๐จ๐๐๐ก:
โSorting the input array and returning the middle element .
