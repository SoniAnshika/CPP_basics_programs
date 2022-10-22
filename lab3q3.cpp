#include<iostream>
using namespace std;
      
     //Function to perform addition of the fractions.
     void  add(int a,int b,int c,int d,int &e,int &f)
     {
         e=(a*d)+(b*c);
          f=(b*d);
     }

     //Function to perform the subtraction  of the  fractions.
     void sub(int a, int b, int c,int d, int &e,int &f)
    {
         e=(a*d)-(b*c);
         f=(b*d);
    }

     //Function to perform the multiplication of the fractions.
    void mul(int a, int b, int c, int d, int &e, int &f)
    {
         e=(a*c);
         f=(b*d);
     }

    //Function to  perform the division of the fractions.
     void div(int a, int b, int c, int d, int &e, int &f)
     {
         e=(a*d);
          f=(b*c);
     }
  
int main()
{
   int a,b,c,d,e=0,f=0;
   //first asking to the input of the first fraction .
   cout<<"Enter  the  value  of  the  first  fraction (two values of a  and  b) :"<<endl;
   cin>>a>>b;
   //then  asking the input of the operation to be done with help of the calculator.
   char ch;
   cout<<"Enter the operation to be performed with the first fraction and the other fraction :"<<endl;
   cin>>ch;
   //opening the switch to provide chioces for the operations to be performed  to the user'.
   switch(ch)
   {     
         //Now , asking the input of the second  fraction.
        //then we will perform the operation on them.
        case '+' :
         cout<<"Enter the  value  of  the  second  fraction  (two values of  c and d)  :"<<endl;
         cin>>c>>d;
         add(a,b,c,d,e,f);
         break;

        case '-' :
         cout<<"Enter the  value  of  the  second  fraction  (two values of  c and d)  :"<<endl;
         cin>>c>>d;
         sub(a,b,c,d,e,f);
         break;
        
        case '*' :
        cout<<"Enter the  value  of  the  second  fraction  (two values of  c and d)  :"<<endl;
        cin>>c>>d;
        mul(a,b,c,d,e,f);
        break;
       
        case '/' :
        cout<<"Enter the  value  of  the  second  fraction  (two values of  c and d)  :"<<endl;
        cin>>c>>d;
        div(a,b,c,d,e,f);
        break; 

        default :
        cout<<"PLEASE, re-enter the operation to be done because your choice does not match with any of the operation to be performed!! "<<endl;
    
    }  
     //printing the value of the task after the completion.
      cout<<"The value of the arithematic operation on the entered  fractions in the form of the fraction is  "<<e<<"/"<<f<<endl; 
      cout<<"           ....HOPE!!   YOU   ARE   SATISFIED   WITH    THE    ANSWER....       XD  "<<endl;

      return 0;
}
   