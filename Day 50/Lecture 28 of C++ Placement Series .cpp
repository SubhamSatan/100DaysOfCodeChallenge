#include<bits/stdc++.h>

using namespace std;

//Pass by Value
void update1(int n)
{
    n++;
    cout<<"Inside Function : "<<n<<endl;
}

//Pass by reference
void update2(int &n)
{
    //refernce Variable
    n++;
    cout<<"Inside Function : "<<n<<endl;
}

//Can use reference variable as return type also 
//But will a warning -> Bad Practise 
int& update3(int n)
{
    int a = 10;
    int &ans = a;
    return ans ;
}

int getSum(int *arr, int n)
{
    int sum = 0;
    for(int i =0;i<n;i++)
    {
        sum +=arr[i];
    }
    return sum;
}

int main()
{
    // //Reference Vairable = same memory but different variable 
    int i = 5;
    // //Creating a Reference Variable 
    int &j = i;
    
    cout<<"i++ "<<i++<<endl;
    cout<<"j++ "<<j++<<endl;
    // //i and j refers to the same memory block 

    int n = 5;

    cout<<"Pass By Value : "<<endl;
    cout<<"Before : "<<n<<endl;
    update1(n);
    cout<<"After : "<<n<<endl;

    // //Pass By Reference -> same memory but differnt names 
    cout<<"Pass By Reference : "<<endl;
    cout<<"Before : "<<n<<endl;
    update2(n);
    cout<<"After : "<<n<<endl;

    //Heap Memory -> 'new' Keyword 
    //Stack -> static memory allocation 
    //Heap -> Dynamic memory allocation 

    char ch = 'q';
    cout<<sizeof(ch)<<endl;

    char* c = &ch;
    cout<<sizeof(c)<<endl;

    //Using Dynamic Array
    int n;
    cin>>n;

    //Variable size array
    int *arr = new int[n];

    //Taking input n in array 
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    int ans = getSum(arr,n);

    cout<<"Sum = "<<ans;


    return 0;
}
