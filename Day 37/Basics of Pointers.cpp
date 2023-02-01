#include<bits/stdc++.h>

using namespace std;

int main()
{
   int num = 5;
   cout<<num<<endl;

   // Address of Operator - & 

   cout<<" address of num is " << &num<<endl;

   int *ptr = &num;

   cout<<" Address of Num stored in ptr is "<<ptr<<endl;
   cout<<" Value is  : "<<*ptr<<endl;

   double d = 4.3;
   double *p2 = &d;

   cout<<" Address of Num stored in ptr is "<<p2<<endl;
   cout<<" Value is  : "<<*p2<<endl;

   cout<<" Size of Interger is "<<sizeof(num)<<endl;
   cout<< "Size of Pointer is "<<sizeof(ptr)<<endl;
   cout<<"Size of Double POinter is "<<sizeof(p2)<<endl;

   //Pointer always stores address , hence its size is always 8

   //Bad Practise 
   //Pointer to int is created and pointing to some garbage value
   // int *p;

   int i = 5;
   int *p = 0;
   //another way of assigning a pointer
   p = &i;
   
   //Pointer does not make a different copy 
   cout<<"Before : "<<i<<endl;
   (*p)++;
   cout<<"After : "<<i<<endl; 
   
   //Copying a Pointer 
  int *q = p;
  cout<<" p :"<<p<<"- q : "<<q<<endl;
  cout<<*p<<" - "<<*q<<endl;
  
  //Pointer Arithmetic ** IMPORTANT
  i = 3;
  int *t = &i;
  cout<*t<<endl; 
  cout<<"Before t : "<<t<<endl;
  *t = *t + 1;
  cout<<"After t : "<<t<<endl;


  return 0;
}

// Output: 
// 5
//  address of num is 0x7bfdf4
//  Address of Num stored in ptr is 0x7bfdf4
//  Value is  : 5
//  Address of Num stored in ptr is 0x7bfde8
//  Value is  : 4.3
//  Size of Interger is 4
// Size of Pointer is 8
// Size of Double POinter is 8
// Before : 5
// After : 6
//  p :0x7bfde4- q : 0x7bfde4
// 6 - 6
// 3
// Before t : 0x7bfde4
// After t : 0x7bfde4
