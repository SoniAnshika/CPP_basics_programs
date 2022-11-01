#include<iostream>
  using  namespace std ;
  
/*Creating  a  function  named  as movie with name  and  duration  of the movie  as arguments.  Also ,in the parameter default value is assigned  to the duration of the movie. */ 
     void  movie (char name[],int time=90)
      {
           cout<<"The name of the movie  is :  "<<name<<" . "<<endl;
           cout<<"The  duration of the movie  in  minutes  is :  "<<time<<" . "<<endl;
           cout<<"\n";
       }
    
      int  main()
      {
            //Creating a character array of size 100.
            char c[100];
            int t;
            cout<<"Enter the name and the duration of the movie : "<<endl;
            cin>>c;
            cin>>t;
            movie(c,t);//invoking function by call by value with both arguments.
            movie("Roadside Rowdy",180);
            movie(c);//invoking function with only one argument by call by value method.
            movie("Dil Dhadak Dhadak");
            /* In the above two calls when only one argument is provided then the default value of the argument will be printed if provided. */ 

            return 0 ;
        }


