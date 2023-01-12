//LeetCode 125
class Solution {
public:
    int valid(char ch)
{
    if((ch>='0' && ch<='9')||(ch>='a' && ch<='z')||(ch>='A' && ch<='Z'))
    {
        return 1;
    }
    else{
        return 0;
    }
}
char toLower(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
    bool isPalindrome(string s) {
         int start = 0;
    int end = s.length()-1;
    while(start<=end)
    {     
     if(toLower(s[start])!=toLower(s[end]))
        {
            if(valid(s[start])==0)
            {
                start++;
            }
         else if(valid(s[end])==0)
         {
             end--;
         }
         else{
             return 0;
         }
        }
        else{
            start++;
            end--;
        }
    }
    return 1 ;
    }
};
