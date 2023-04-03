//Problem Solved : LeetCode 881 - Boats to save people
//Problem Link : https://leetcode.com/problems/boats-to-save-people/

Approach : 

Use 2 Pointer approach 
Sort the Vector.
We can make the lightest & heaviest person to go together.
using Two pointer appraoch i is the lightest person & j is the heaviest.
Traversing till start <= end.
if sum of lightest & heaviest person are under limit then both can go together , updating i & j both.
If sum exceeds the limit, then heaviest person will go alone, hence updating only the j pointer.
increment the count .
Return cnt.

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        
        sort(people.begin(),people.end());
        
        int i = 0, j = people.size() - 1,cnt = 0;
        
        while(i <= j)
        {   
            // lightest person + heaviest person sum <= limit
            // they can go together
            if(people[i] + people[j] <= limit)
            {
                ++i;
                --j;
            }
            // if sum is over the limit,
            // heaviest will go alone.
            else
                --j;
            
            ++cnt;  // number of boats
        }
        
        return cnt;
        
        
    }
};
