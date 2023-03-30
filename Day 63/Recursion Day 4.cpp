#include<bits/stdc++.h>

using namespace std;

void reverse(string& a, int i ,int j)
{
    cout<<"Call Received for "<<a<<endl;

    // Base Case
    if(i > j)
    {
        return ;
    }

    swap(a[i],a[j]);
    i++;
    j--;

    //Recursive Call
    reverse(a,i,j);

}
bool pal(string& a, int i ,int j)
{

    // Base Case
    if(i > j)
    {
        return true;
    }

    //Recusrsive Call
    if(a[i]==a[j]){
        i++;
        j--;
        return pal(a,i,j);
    }
    else{
        return false;
    }

}

int power(int a ,int b)
{
    //Base case
    if(b==0)
    {
        return 1;
    }
    if(b==1)
    {
        return a;
    }
    //Recursive Call 
    int ans = power(a,b/2);
    
    //if b i even 
    if(b%2==0)
    {
        return ans*ans;
    }
    else{
        //if b is odd 
        return a*ans*ans;
    }
}

void sortArray(int *arr,int n)
{
    //base case -> already case
    if(n==0 || n==1)
    {
        return ;
    }

    //1 case solve karlia - largest element ko end me rakh dega
    for(int i = 0;i<n-1;i++)
    {
        if(arr[i] > arr[i+1])
        {
            swap(arr[i],arr[i+1]);
        }
    }

    sortArray(arr,n-1);
}

int main()
{
    //Question 1 -> Reversing a string 
    string name = "subham";

    cout<<"Before Reverse : ";
    cout<<name<< endl;

    reverse(name , 0 , name.length()-1 );

    cout<<"After Reverse : ";
    cout<<name<< endl;

    //Question 2 -> Palindrome 

    string name = "aabbaa";
    if(pal(name,0,name.length()-1))
    {
        cout<<"String is Pallindrome "<<endl;
    }
    else{
        cout<<"String is not Pallindrome "<<endl;
    }
    
    //Question 3 -> Power of a Number 
    int a , b;
    cin>>a>>b;
    cout<<"Power of "<<a<<"  is : "<<power(a,b);

    //Question 4 - > Bubble Sort using Recursion 
    int arr[5] = {2,1,5,3,0};

    cout<<"Before Sorting : "<<endl;
    for(int i =0 ;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    sortArray(arr,5);
    
    cout<<"After Sorting : "<<endl;
    for(int i = 0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;

}
