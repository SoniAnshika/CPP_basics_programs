#include<iostream>
using namespace std;

class Default
{
      //Data members.
     int x;
     int y;

     public :
    /*constructor with default arguments. */
     Default(int X=1,int Y=2)
     {
     x=X;
     y=Y;
     cout<<x<<"  and  "<<y<<endl;
     }

     /*Default constructor. */
     Default()
     {
     x=0;
     y=0;
     cout<<x<<"  and  "<<y<<endl; 
     }
};

int main()
{
 
      Default D1(3,4);
      Default D2(4);
     // Default D3;/*Ambiguity..since,Default()and Default(int,int) both are the perfect match for default constructor. */

     return 0;
}