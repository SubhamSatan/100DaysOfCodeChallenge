#include<bits/stdc++.h>

using namespace std;

//Power of 2 
int p(int n)
{
    //f(n)=2*f(n-1);
    if(n==0)
    {
        return 1;
    }
    return 2*p(n-1);
}

//Factorial of N 
int fact(int n)
{
    //f(n)=n*f(n-1);
    if(n==1)
    {
        return 1;
    }
    return n*fact(n-1);
}

//Print Counting of N in Descending Order :
int cou(int n)
{
    if(n==0)
    {
        return 0;
    }
    cout<<n<<" ";
    return cou(n-1);
}

//Print Counting of N in Ascending Order :
void p2(int n)
{
    //base case
    if(n==0)
    {
        return ;
    }
    p2(n-1);
    cout<<n<<" "; 
}

int main()
{
    //Big and complex Problem -> same type of choti problem 
    int n;
    cin>>n;
    cout<<"Pow of 2 : "<<p(n)<<endl;
    cout<<"Fact of N : "<<fact(n)<<endl;
    cout<<"Counting of N : "<<cou(n)<<endl;
    cout<<"Counting of N in Ascending Order : "<<p2(n)<<endl;
    return 0;
}
