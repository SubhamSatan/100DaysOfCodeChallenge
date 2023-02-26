Hello, Connections.

Day 55 of the #100daysofcode Challenge.

𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Single Number
𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://lnkd.in/dSnJ-h5s


📌𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡
✅ XOR of zero and some bit returns that bit i.e. x^0 = x...
✅ XOR of two same bits returns 0 i.e. x^x = 0...
✅ And, x^y^x = (x^x)^y = 0^y = y...
✅ XOR all bits together to find the unique number.

You can find the 𝐂𝐨𝐝𝐞 𝐚𝐧𝐝 𝐒𝐨𝐥𝐮𝐭𝐢𝐨𝐧𝐬 in my GitHub Repo
https://lnkd.in/d8GQS6x9


Do consider starring it if you feel it is helping you.😊

Hope it helps. See you all tomorrow.

Till then, Happy Coding. 👋

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int output = 0;
        for(int i =0;i<nums.size();i++)
        {
            output = output ^ nums[i];
        }
        return output;
    }
};
