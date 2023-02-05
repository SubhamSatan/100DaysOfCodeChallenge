class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        return nums[nums.size()/2];
    }
};

📌𝐐𝐮𝐞𝐬𝐭𝐢𝐨𝐧: Majority Element
https://lnkd.in/dfQmeU5a
📌 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡:
✅Sorting the input array and returning the middle element .
