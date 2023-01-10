//You are given two numbers in the form of 'A' and 'B' vetors of size N and M  where each array element represent a digit.
//You need to find the sum of these digits and return this sum in the form of an array 

#include <bits/stdc++.h> 

vector<int> reverse(vector<int> v)
{
    int s = 0;
    int e = v.size()-1;
    while(s<e)
    {
        swap(v[s++],v[e--]);
    }
    return v;
}
vector<int> findArraySum(vector<int>&a, int n, vector<int>&b, int m) {
	// Write your code here.
    vector<int> ans;
    int i = n-1;
    int j = m-1;
    int carry = 0;
    while(i>=0 && j>=0)
    {
        int sum = carry + a[i]+b[j];
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
        j--;
    }
    
    //First Case 
    while(i>=0)
    {
        int sum = carry+a[i];
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        i--;
    }
    
    //Second Case 
    while(j>=0)
    {
        int sum = carry+b[j];
        carry = sum/10;
        sum = sum%10;
        ans.push_back(sum);
        j--;
    }
    
    //Third Case
    while(carry!=0)
    {
        int sum= carry;
        carry = carry/10;
        sum = sum%10;
        ans.push_back(sum);
    }
   
    return reverse(ans);
}
