
//LeetCode 1470 : Shuffle The Array  

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int i = 0;
        int j = n;
        vector<int> output;
        while(i < n && j<nums.size())
        {
            output.push_back(nums[i]);
            output.push_back(nums[j]);
            i++;
            j++;
        }
        return output;
    }
};
