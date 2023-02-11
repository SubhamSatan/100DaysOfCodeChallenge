//LeetCode 27 --> Remove Element 

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        int i = 0;
        
        while(i < nums.size() && j<nums.size())
        {
            if(val==nums[j])
            {
                j++;
                continue;
            }
            if(i != j)
            {
                swap(nums[i],nums[j]);
                j = i;
            }
            i++;
            j++;
        }
        return i;
    }
};
