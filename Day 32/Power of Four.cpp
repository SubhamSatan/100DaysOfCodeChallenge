//LeetCode : 342
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n<=0)
        {
            return 0;
        }
        while(n>1)
        {
            if(n%4==0)
            {
                n=n/4;
            }
            else{
                return 0;
            }
        }
        return 1;
    }
};
