//LeetCode 2544 - Alternating Digit Sum 
class Solution {
public:
    int alternateDigitSum(int n) {
        int sum = 0;
        int t = n;
        int count = 0;
        while(t>0)
        {
            count++;
            t = t/10;
        }
        while(n>0)
        {
            if(count % 2 == 0 )
            {
                sum = sum - n%10;
            }
            else{
                sum = sum + n%10;
            }
            n = n/10;
            count--;
        }
        return sum;
    }
};
