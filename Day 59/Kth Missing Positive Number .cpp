𝐐𝐮𝐞𝐬𝐭𝐢𝐨𝐧:  𝐊𝐭𝐡 𝐌𝐢𝐬𝐬𝐢𝐧𝐠 𝐏𝐨𝐬𝐢𝐭𝐢𝐯𝐞 𝐍𝐮𝐦𝐛𝐞𝐫
Link:https://lnkd.in/dB-9pnK8
Approach : 
The range of values is from 1 to arr[s] + k
So use a for loop traversing the range
While traversing keep the count of missing digits 
Return your answer when the kth missing digits is found
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int i = 0;
        int j = 0;
        int count = 0;
        int s = arr.size()-1;
        for(i = 1;i<=arr[s]+k;i++)
        {
            if(i != arr[j])
            {
                count++;
            }
            if(count == k)
            {
                return i;
            }
            else if (i==arr[j] && j<s)
            {
                j++;
            }
        }
        return i;
    }
};
