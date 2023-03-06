Problems Solved : LeetCode 345 -> Reverse Vowels of a String 
Problem Link : https://leetcode.com/problems/reverse-vowels-of-a-string/

Approach : 
Use the two pointer approach 
start from the beginning and the end of the string 
swap when from both end you encounter an vowel 
else increment of decrement counter i and j accordingly 


class Solution {
public:
    string reverseVowels(string s) {
        int i = 0;
        int j = s.length()-1;
        while(i<=j)
        {
            if((s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                && (s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U' || s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'))
            {
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if((s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
                && (s[j]!='A' || s[j]!='E' || s[j]!='I' || s[j]!='O' || s[j]!='U' || s[j]!='a' || s[j]!='e' || s[j]!='i' || s[j]!='o' || s[j]!='u'))
            {
                j--;
            }
            else if((s[i]!='A' || s[i]!='E' || s[i]!='I' || s[i]!='O' || s[i]!='U' || s[i]!='a' || s[i]!='e' || s[i]!='i' || s[i]!='o' || s[i]!='u')
                && (s[j]=='A' || s[j]=='E' || s[j]=='I' || s[j]=='O' || s[j]=='U' || s[j]=='a' || s[j]=='e' || s[j]=='i' || s[j]=='o' || s[j]=='u'))
            {
                i++;
            }
            else{
                i++;
                j--;
            }
        }

        return s;
    }
};
