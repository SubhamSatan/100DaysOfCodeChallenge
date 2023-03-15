//Recursion Day 3 : Lecture 33 of Love Babbar Placement Course 
//Video Link : https://www.youtube.com/watch?v=UntSI7G5h20&list=PLDzeHZWIZsTryvtXdMr6rPh4IDexB5NIA&index=36
//Question Solved Using Recursion : 
//Question 1 -> Checking if an array is Sorted or Not 
//Question 2 -> Sum of an array 
//Question 3 -> Linear Search 
//Question 4 -> Binary Search 

#include<bits/stdc++.h>

using namespace std;

//----------->RECURSION DAY 3---------->

//Question 1 -> Checking if an array is Sorted or Not 
bool checkSort(int arr[],int n)
{
    if(n==1 || n==0)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }
    else{
        return checkSort(arr+1,n-1);
    }
}

//Question 2 -> Sum of an array 
int fSum(int arr[],int n)
{
    if(n==1)
    {
        return arr[0];
    }

    return arr[0]+fSum(arr+1,n-1);
}

//Question 3 -> Linear Search 
bool lsearch(int arr[],int n,int key)
{
    if(n==1 && arr[0]!=key)
    {
        return false;
    }
    if(arr[0]==key)
    {
        return key;
    }
    else{
        return lsearch(arr+1,n-1,key);
    }
}

//Question 4 -> Binary Search 
bool bSearch(int *arr,int s,int e,int k)
{
if(s > e)
{
    return false;
}
int mid = s + (e-s)/2;

if(arr[mid] < k)
{
    return bSearch(arr,mid+1,e,k);
}
else{
    return bSearch(arr,s,mid-1,k);
}
}

int main()
{
    int arr[6]={2,4,6,9,11,13};
    bool ans = checkSort(arr,5);
    if(ans)
    {
        cout<<"True array is sorted "<<endl;
    }
    else{
        cout<<"False array is not sorted "<<endl;
    }

    int sum = fSum(arr,6);
    cout<<"The total Sum is : "<<sum<<endl;

    bool ans1 = lsearch(arr,6,1);
    if(ans1)
    {
        cout<<"Key is Present "<<endl;
    }
    else{
        cout<<"Key is not Present "<<endl;
    }

    return 0;
}
