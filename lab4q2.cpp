#include<iostream>

using namespace std;

//Creating a class account.
      class  account
      {
            //Datamembers of the class.
            public :
            string depositors;
            int accno ;
            string  typeacc ;
            double  balance ;
            
           //Member functions.
            void  initialvalues()
            {
                  /*Initialising values to data members.*/
                  depositors = "Anshika Soni" ;
                  accno =  123456789 ;
                  typeacc = "Personal" ;
                  balance = 10000.0 ;
           }

             void  deposit()
            { 
                //Depositing amount to the account.
                 double   deposit ;
                 cout<<"Enter  the amount to be deposit : "<<endl ;
                 cin>>deposit ;
                 balance = balance + deposit ;
                 cout<<"The current balance of the account after the deposit is : "<<balance<<endl ;
             }

             void withdraw()
              {
                   /*checking  balance and withdrawing the amount. */
                   double wd;
                   cout<<"\nThe current balance of the account before withdraw is : "<<balance<<endl ;
                   cout<<"Enter the amount to be withdraw : "<<endl ;
                   cin>>wd;
                   if(wd>balance)
                   cout<<"Insufficient balance......withdraw not possible.. "<<endl;
                   else
                   balance = balance -wd ;
                   if(balance == 0.0)
                   cout<<"There is no amount left in your account.....NILL!! "<<endl;
                   cout<<"The current balance of the account  after withdraw is : "<<balance<<endl ;
              }

             void  dispaly()
              {
                /*Displaying all the details of the account!! */
                 cout<<"\nThe name of the account holder is : "<<depositors<<endl ;
                 cout<<"Type of the account  is : "<<typeacc<<endl ;
                 cout<<"Account Number : "<<accno<<endl ;
                 cout<<"Balance of the account : "<<balance<<endl ;
              }
 
        } ;

             int main()
            {
               /*Creating object of the class account. */
               account a ;
            
               a.initialvalues();
               a.deposit();
               a.withdraw();
               a.dispaly();
              
             return 0 ;
         }
                  
          
           