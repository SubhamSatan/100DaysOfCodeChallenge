class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int sum =0;
        if(coins < costs[0])
        {
            return 0;
        }
        else{
            for(int i:costs)
            {
                if(coins >= i)
                {
                    sum = sum+1;
                    coins = coins - i;
                }
            }
            return sum;
        }
        return 0;
    }
};
