#include<iostream>
 
using namespace std ;
      
      //Forward Declaration of the class  DB.
      class  DB;

      //Definig new class DM.
      class DM
      {
            public :
            double dinM ;
            double dinCm ;
            //making function add friend of class DM.
            friend void add (DM,DB);
       } ;

       //Definig class DB.
       class DB
      {
             public :
            double dinfeet ;
            double dinInches ;
            //Making function add friend of class DB.
            friend void add (DM ,DB);
      } ;

      /*Definig function add to add the data members of class DM and DM. */
      void add (DM m , DB b)
       {
               m.dinM = m.dinM + (b.dinfeet)*0.305 ;
               m.dinCm = m.dinCm + (b.dinInches)*2.54 ;
               cout<<"\nAddition of Distances in feet and meters in meters is : "<<m.dinM<<endl ;
               cout<<"Addition of Distances in inches and centimeters in centimeters is : "<<m.dinCm ;
       }
  
       int main()
       {
                DM a ;
                DB  b ;
                
               cout<<"Enter the distance in meters : "<<endl;
               cin>>a.dinM ;
               cout<<"Enter the distance in centimeters : "<<endl;
               cin>>a.dinCm ;
               cout<<"Enter the distance in feets : "<<endl;
               cin>>b.dinfeet ;
               cout<<"Enter the distance in inches : "<<endl;
               cin>>b.dinInches ;
 
              add(a,b);

              return 0 ;

         }
         


  