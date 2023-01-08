//LeetCode Question 88
//Merge Sorted Array
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> output;
        int i = 0, j=0;
        for(int i=nums1.size()-1;i>=m;i--)
        {
                   nums1.pop_back();
        }
        while(i<nums1.size() && j<nums2.size())
        {
                if(nums1[i]<nums2[j])
                {
                    output.push_back(nums1[i]);
                    i++;
                }
                else if (nums1[i]==nums2[j]){
                     output.push_back(nums1[i]);
                     i++;
                } 
                else{ 
                    output.push_back(nums2[j]);
                    j++;
                }
        }
        for(int a = i;a<nums1.size();a++)
                {
                        output.push_back(nums1[a]);
                }
                for(int a = j;a<nums2.size();a++)
                {
                        output.push_back(nums2[a]);
                }
                nums1.assign(output.begin(),output.end());
    }
};
