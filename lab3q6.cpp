#include<iostream>
using namespace std;
 
/* Creating the class named as shirt .*/ 
     class   Shirt
      {
           public :
           int collarsize , sleeveLength ;
            void    EnterValues(int  a ,int  b)
              {
                   collarsize = a ;
                   sleeveLength = b ;
              }
           //passing object of class shirt as argument  in function displayClothingFacts().
           void  displayClothingFacts( Shirt  s1)
            {
                    cout<<"    SHIRT  SIZES :   "<<endl;
                    cout<<"Collar  Size =  " << s1.collarsize << endl ;
                    cout<<"Sleeve  length =  "<< s1.sleeveLength << endl ;
            }
      };
   
//Creating the class named as Pant .         
      class   Pant 
      {
            public :
            int waistSize , inSeam ; 
            void    EnterValues(int  a ,int  b)
              {
                   waistSize = a ;
                   inSeam = b ;
              }
             // passing object of class shirt as argument  in function displayClothingFacts().
            void   displayClothingFacts(Pant  p1)
             {    
                   cout<<"     PANT  SIZES : " <<endl; 
                   cout<<"Waist  Size = "<< p1.waistSize << endl;
                   cout<<"Inseam  Size = " << p1.inSeam <<endl;
              }
         };
 
         int  main()
          {  
             int  a,b,c,d ;
             cout<<"Enter the size of the shirt (collar and sleeve) :"<<endl ;
             cin>>a>>b;
             cout<<"Enter the size of the pant (waist and inseam ) :"<<endl ;
             cin>>c>>d;
             Shirt  s1,s2;
             Pant  p1,p2;
             s1.EnterValues( a,b);
             s2.displayClothingFacts(s1);
     
             p1.EnterValues( c,d);
             p2.displayClothingFacts(p1);

              return 0 ;
            }

