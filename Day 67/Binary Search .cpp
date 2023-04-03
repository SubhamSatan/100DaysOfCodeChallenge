// Used Binary search using recursion 
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Binary Search
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://lnkd.in/dVU6H7CR

📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡
✅ Begin with an interval of the whole vector from start to end, 0 to 𝐧𝐮𝐦𝐬.𝐬𝐢𝐳𝐞() - 1.
✅ If the value of the search key is 𝐥𝐞𝐬𝐬 𝐭𝐡𝐚𝐧 𝐭𝐡𝐞 𝐢𝐭𝐞𝐦 𝐢𝐧 𝐭𝐡𝐞 𝐦𝐢𝐝𝐝𝐥𝐞 of the interval, narrow the interval to the lower half => 𝐞𝐧𝐝 = 𝐦𝐢𝐝 - 1
✅ Otherwise, narrow it to the upper half => 𝐬𝐭𝐚𝐫𝐭 = 𝐦𝐢𝐝 + 1
✅ Repeatedly check until the value is found or the interval is empty. else 𝐫𝐞𝐭𝐮𝐫𝐧 -1
  
  class Solution {
public:
    int bs(vector<int> nums,int target,int start,int end ,int mid)
    {
        if(start>end)
        {
            return -1;
        }
        if(nums[mid]==target)
        {
            return mid;
        }
        if(nums[mid] > target)
        {
            end = mid-1;
        }
        else if(nums[mid] < target)
        {
            start = mid+1;
        }
        mid = start + (end-start)/2;
        return bs(nums,target,start,end,mid);
    }
    int search(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size()-1;
        int mid = start + (end - start)/2;
        return bs(nums,target,start,end,mid);
    }
};
