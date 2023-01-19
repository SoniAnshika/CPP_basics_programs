#include<iostream>
using namespace std;

//Creating the class named as Complex.
class Complex
{
    //Data members.
   int real;
   int imaginary;
   
   public :
   //constructor overloading.
   //Default constructor.
   Complex()
   {
       real=0;
       imaginary=0;
   }

   //constructor with one argument.
   Complex(int a)
   {
       real=a;
       imaginary=a;
   }

   //constructor with two arguments.
   Complex(int x, int y)
   {
       real=x;
       imaginary=y;
   }

   //Member functions.
   /* To display the objects in complex form.*/
   void display()
   { 
       cout<<real<<"+i"<<imaginary<<endl;
   }

   /*To sum up the two complex numbers with the help of two objects. */
   void  sum(Complex a,Complex b)
   {
       a.real=a.real+b.real;
       a.imaginary=a.imaginary+b.imaginary;
       cout<<a.real<<"+i"<<a.imaginary<<endl;
    }
};

int main()
{
    //Invoking  the  member functions.
    Complex x,y(4),z(3,4);
    cout<<"The first complex number is :"<<endl;
    y.display();
    cout<<"The second complex number is :"<<endl;
    z.display();
    cout<<"The sum of the two complex numbers is :"<<endl;
    y.sum(y,z);
    
    return 0;
}
    
