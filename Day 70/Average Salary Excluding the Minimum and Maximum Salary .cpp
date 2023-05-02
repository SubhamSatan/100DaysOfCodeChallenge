LeetCode - > 491. Average Salary Excluding the Minimum and Maximum Salary
Problem Link -> https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/

Approach:

Sort the vector 
Add the elements 
The first and last element are the Least and Max Element so subtract them from the total sum 
Divide the sum by the ( total elements - 2 ) as we are not taking the first and last element 

class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double sum = 0;
        for(int i = 0;i<salary.size();i++)
        {
           sum = sum + salary[i];
        }
        sum = (sum - salary[0] - salary[salary.size()-1])/(salary.size()-2);
        return sum;
    }
};
