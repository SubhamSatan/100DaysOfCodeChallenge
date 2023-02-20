//LeetCode 326 -> Power of Three
class Solution {
public:
    bool isPowerOfThree(int n) {
        int t = n;
        int sum = 0;
        if(n <=0)
        {
            return false;
        }
        while(t>1)
        {
            if(t % 3 == 0 )
               {
                   t=t/3;
               }
            else{
                return false;
            }
        }
        return true;
    }
};
