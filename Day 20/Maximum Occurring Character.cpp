char maxCharacter(string s)
{
    int len = s.length();
    int count[256]={0};
    int max = 0;
    char result ;
    for(int i =0;i<len;i++)
    {
        count[s[i]]++;
        if(max<count[s[i]])
        {
            max = count[s[i]];
            result = s[i];
        }
    }
    return result;
}
