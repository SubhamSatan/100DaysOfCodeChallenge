//LeetCode 1287 - Element Appearing More Than 25% In Sorted Array

class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int output = arr.size()/4;
        for(int i =0;i<arr.size();i++)
        {
            if(arr[i]==arr[i+output])
            {
                return arr[i];
            }
        }
        return 0;
    }
};

// 𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐒𝐨𝐥𝐯𝐞𝐝: Element Appearing More Than 25% In Sorted Array
// 𝐏𝐫𝐨𝐛𝐥𝐞𝐦 𝐋𝐢𝐧𝐤: https://lnkd.in/eGjPi25u

// 📌 𝐀𝐩𝐩𝐫𝐨𝐚𝐜𝐡 :

// ✅ Initialized 𝐨𝐜𝐜𝐮𝐫 with 𝐬𝐢𝐳𝐞 𝐨𝐟 𝐚𝐫𝐫𝐚𝐲 by 4 to get the times the elements have to be repeated for it to be 𝐠𝐫𝐞𝐚𝐭𝐞𝐫 𝐭𝐡𝐚𝐧 25%.
// ✅ Iterate through the array and check if 𝐚𝐫𝐫[𝐢] == 𝐚𝐫𝐫[𝐢 + 𝐨𝐜𝐜𝐮𝐫] which checks if the current element is equal to the times the element is repeated is more than 25%.
// ✅ Finally, return the element.
