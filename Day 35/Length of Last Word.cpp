//LeetCode 58 - Length of Last Word 

class Solution {
public:
    int lengthOfLastWord(string s) {
        int last = s.size()-1;
        int count = 0;
        for(int i = last;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                count++;
                if(i!=0 && s[i-1]==' ')
                {
                    break;
                }
            }
        }
        return count;
    }
};
