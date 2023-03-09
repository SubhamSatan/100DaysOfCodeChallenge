//Recursion Day 2 : Love Babbar Lecture 33 
// Question Practised : 
// 1. How many steps to reach home ??
// 2. Nth Fibonnaci Number 
// 3. Number of Ways to Climb Stairs 
// 4. Say Digit 

#include<bits/stdc++.h>

using namespace std;

void reachHome (int src, int dest)
{
    cout<<"source : "<<src<<" destination : "<<dest<<endl;
    //Base Case
    if(src == dest)
    {
        cout<<" pahuch gya " <<endl;
        return ;
    }
    //processing -> ek step aage badhjao 
    src++;
    //Recursive Call 
    reachHome(src , dest);
}

//Fibonnacci Number - 0,1,1,2,3,5,8,13,21
int fib(int n)
{
    if(n == 0)
    {
        return 0;
    }
    if(n == 1)
    {
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

//Climbing Stairs Using Recursion
  int climbStairs(int n) {
        if(n < 0)
        {
            return 0;
        }
        if(n == 0)
        {
            return 1;
        }
         
        return climbStairs(n-1) + climbStairs(n-2);
        
    }

//Say Digit
void sayDigit(int n , string arr[])
{
    if(n==0)
    {
        return;
    }
    int digit = n%10;
    n=n/10;

    //recursive call
    sayDigit(n,arr);

    cout<< arr[digit]<<" ";
}

int main()
{
    //---------------------------RECURSION DAY -------------------------
//    int dest = 10;
//    int src = 1;

//    reachHome(src,dest);

// cout<<"The 8th Fibonnaci Number is : "<<fib(8);

string arr[10] = {"zero","one","two","three","four","five","six","seven"
                  ,"eight","nine"};

int n;
cin>>n;

sayDigit(n,arr);

   

   return 0;
}
