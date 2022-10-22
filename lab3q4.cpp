#include<iostream>
using namespace std;

//Creating the class named as rectangle to find the perimeter and the area of a  particular rectangle.
      class rectangle
      {    
/*class  members  are  (length and  width)  which are private data members and ( getvalues(double l,double b)  and  display() )  which are public data members .*/
           double length;
           double width;
           public:
          void   getvalues(double l,double b)
          {
                 length=l;
                 width=b;
          }
          void   display()
         {
              cout<<"The  perimeter of  the   rectangle  with  length  "<<length<<"  and   breadth  "<<width<<"   is  : "<<2*(length+width)<<endl ;
              cout<<"The  area  of   the   rectangle   with  length  "<<length<<"  and    breadth  "<<width<<"  is  : "<<length*width<<endl ; 
         }
       } ;

        int main()
         {
              double  l,b;
              cout<<" Enter the values of the length and the breadth  of  the  rectangle  :"<<endl ; 
              cin>>l>>b ;
              //Creating the object of the class rectangle to call the class data members .
              rectangle r;
              //Calling the class functions with help of its object created above.
              r.getvalues(l,b);
              r.display();

             return 0;
           
         }
       
    
