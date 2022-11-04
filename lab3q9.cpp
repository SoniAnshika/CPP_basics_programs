#include<iostream>
using namespace std;

    int a[10],w;

    /* This function is made to find the prime number and store the occurence of the digit in the array . */
    void  isprime(int m)
     {
          int ai,b;
          for(ai=2;ai<=m/2;ai++)
          {
                if(m%ai ==0)
                 return;
           }
               w=1;
               while(m>0)
               {
                   b=m%10;
                   m=m/10;
                   a[b] +=1;
                }
      }

 
     int main()
    {
       int L,R,max,no;
       cout<<" Enter  the  starting  and  the  ending  number : "<<endl ;
       cin>>L>>R;
       for(int i=L;i<=R;i++)
              isprime(i);

             /* If there is no prime number betweeen the entered two numbers than return  -1 .*/

              if (w == 0 )
              {
                 cout<<" -1 "<<endl ;
              }

            /* If there is prime number than we will find out the max occuring digit between the two numbers. */

              else
              {
                 max=a[0];
                 no=0;
                 for(int i=1;i<=9;i++)
                 {
                      if(a[i]>max)
                       {
                           max=a[i];
                           no=i;
                       }
                  }
                  cout<<"\nHighest  occuring  digit  is  "<<no<<endl;
                  cout<<"Number  of  times  is  "<<max;
               }

                  return 0;

     }

                
              
