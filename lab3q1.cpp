#include<iostream>
using namespace std;

void swap(int &m,int &n);  //using  reference of the numbers  to swap the value of the  two numbers.

int main()
{
 int a,b;

 cout<<" Enter  the  value of  a  and  b  to be swaped : "<<endl;
 cin>>a>>b; 
 swap(a,b); // passing the value of the numbers as an argument to the function.
 cout<<"The  swapped  value  of  the a  and  b is :  "<<a<<"  and  "<<b<<endl;

 return 0;
} 

void swap(int &m,int &n)
{
  int temp; // using the third variable to swap the value  of the two numbers .
  temp=m;
  m=n; 
  n=temp;
}
