//LeetCode 392 -> Is Subsequence 
//Problem Link : https://leetcode.com/problems/is-subsequence/

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i = s.length();
        int j = t.length();
        int a = 0;
        for(int k = 0;k<j && a<i;k++ )
        {
            if(s[a]==t[k])
            {
                a++;
            }
        }
        
       return (a==i);
        
    }
};
