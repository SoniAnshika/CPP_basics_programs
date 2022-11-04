   #include<iostream>

   using namespace std;
 
        class order
         {      
               int tableno,noofpatrons ;
               string  servername ;
               static double minimumcharge ;
            
               public :
              static  double display()
               {
                   return  minimumcharge;
               }
                 
         };

             double order :: minimumcharge =4.75 ;

           int main()
           {
                
               cout<<"THE    MINIMUM    CHARGE    OF   THE    TABLE    IS  :  $ "<< order::display() << endl;
               return 0;

           }
   