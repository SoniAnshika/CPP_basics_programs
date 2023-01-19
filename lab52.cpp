#include<iostream>
using namespace std;

class Point
{
    int x;
    int y;

    public:
     Point()
     {
      x=0;
      y=0;
     }

    Point(int a , int b)
    {
     cout<<"Constructor of point class called"<<endl;
     x=a;
     y=b;
    }

    ~Point()
    {
     cout<<"Destructor of point class called"<<endl;
     cout<<"X="<<x<<","<<"Y="<<y<<endl;
    }
    
};

class  Rectangle
{
   Point P1,P2;

    public :
    Rectangle(Point p1,Point p2)
    {
    P1=p1;
    P2=p2;
    cout<<"Constructor of class rectangle called"<<endl;
    }

   ~Rectangle()
   {
    cout<<"\nDestructor of class rectangle called"<<endl;
   }
};

//Main function.
int main()
{
     Point p1(1,2),p2(3,4);
     Rectangle R(p1,p2);
     
     return 0;
}
    
