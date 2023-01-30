//LeetCode 1137 :  N-th Tribonacci Number 
class Solution {
public:
    int tribonacci(int n) {
        vector<int> output;
        output.push_back(0);
        output.push_back(1);
        output.push_back(1);
        for(int i = 3;i<=n;i++)
        {
            output.push_back(output[i-3]+output[i-2]+output[i-1]);
        }
        return output[n];
    }
};
