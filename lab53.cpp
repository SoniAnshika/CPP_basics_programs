#include<iostream>
using namespace std;

int x,y;

class  Declared
{
    public:
    //Constructor :
    Declared(int a,int b)
    {
     x=a;
     y=b;
     cout<<"Constructor called : "<<x<<","<<y<<endl;
    }

    //Destructor :
    ~Declared()
    {
     cout<<"Destructor called : "<<x<<","<<y<<endl;
    }
};

int main()
{
     Declared D(5,4);
     return 0;
}
    