#include<bits/stdc++.h>

using namespace std;

//pasisng pointers to a function 
void print(int *p)
{
    cout<<*p<<endl;
}

void update(int *p)
{
    *p = *p+1;
    cout<<"inside : "<<*p<<endl;
}

int main()
{
    // int arr[5] ={1,5,3,4,2};

    // cout<<"Address of FIrst memory block is "<<arr<<endl;
    // cout<<"Address of FIrst memory block is "<<&arr[0]<<endl;
    
    // cout<<"Value at 0th Index "<<*arr<<endl;
    // cout<<*arr+1<<endl;
    // cout<<"Value at 1st Location "<<*(arr+1)<<endl;

    // cout<<"*arr "<<*arr<<endl;
    // cout<<"*arr+1 "<<*arr+1<<endl;
    // cout<<"*(arr+1) "<<*(arr+1)<<endl;
    // cout<<"*(arr)+1"<<*(arr)+1<<endl;
    // cout<<"arr[2] "<<*(arr+2)<<endl;

    // //arr[i] = *(arr+i)
    // //i[arr] = *(i + arr) ***IMPORTANT
    // int i = 3;
    // cout<<"i[arr] "<<i[arr]<<endl;
    
    // //Differences Pointer/Array 
    // //arr points to First Location of the array
    // int temp[10]={1,2,3,4,6};
    // cout<<"Sizeof(temp) = "<<sizeof(temp)<<endl; 

    // int *ptr = &temp[0];
    // cout<<"Sizeof(ptr) = "<<sizeof(ptr)<<endl;
    // cout<<"Sizeof(*ptr) = "<<sizeof(*ptr)<<endl;
    // cout<<"Sizeof(&ptr) = "<<sizeof(&ptr)<<endl;
    // cout<<"Sizeof(*temp) = "<<sizeof(*temp)<<endl;
    // cout<<"Sizeof(&temp) = "<<sizeof(&temp)<<endl;

    // int a[20] = {1,2,3,4,5};
    // cout<<"&a[0] : "<<&a[0]<<endl;
    // cout<<"&a : "<<a<<endl;
    // cout<<"a :"<<a<<endl;

    // int *p = &a[0];
    // cout<<"p : "<<p<<endl;
    // cout<<"*p : "<<*p<<endl;
    // cout<<"&p : "<<&p<<endl;

   //--->>CHARACTER ARRAYS---->>>//

    // int arr[5] = {1,2,3,4,5};
    // char ch[6]="abcde";

    // cout<<"arr : "<<arr<<endl;
    // cout<<"ch : "< <ch<<endl;
    
    // //ch prints different when used in character and integer array

    // char *c = &ch[0];
    // //prints the entire string  
    // cout<<c<<endl;

    //Passing Value to a Function 
    int value = 5 ;
    int *p = &value;
    print(p);
    cout<<"Before : "<<*p<<endl;
    update(p);
    cout<<"After : "<<*p<<endl;






   

}
