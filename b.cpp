#include<iostream>
using namespace std;

int main()
{
  const char *p ="1234";
  const char **q=&p;
       *q="abcde";
  const char *s=++p;
       p="XYZWVU";
       cout<<*++s;
        return 0;
}
