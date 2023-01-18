//LeetCode 26 - Remove Duplicates 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        long long int count = 0 ;
        long long int n = nums.size();
        long long int i = 0;
        while(i < nums.size())
        {
            int j = i;
            while(j<n && nums[j]==nums[i])
            {
                j++;
            }
            nums[count++] = nums[i];
            i=j;
        }
        return count;
    }
};
