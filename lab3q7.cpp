#include<iostream>

using namespace std;

      class  Movie
     {     
          //private members of the class Movie.
            string title;
           int  year ;
           string name;
           
           //public members of the class movie.
           public :
           //Here are all the declaration of the methods of the class.
           void  setTitle(string t);
           void  setYear(int y);
           void  setDirector(string n);
           void   Display();
      };
      
      /* now , one by one we will define the methods of the class movie */

      void  Movie :: setTitle(string t)
           {
                     title =t ;
                 
         }

       void  Movie :: setYear(int y)
          {
              year=y;
          }

        void   Movie :: setDirector(string n)
           {
                    name=n;
                 
            }

          //This method display the entered information.
          void   Movie :: Display()
            {
               cout<<"\n -----------INFORMATION ABOUT A MOVIE----------- "<<endl;
               cout<<"The  title  of  the  movie : "<<title<<endl;
               cout <<"The Year of the release : "<<year<<endl;
               cout<<"The  name of the director :"<<name<<endl;
            }

          
            int main()
            {
                 string  t,n;
                 int y;
                 cout<<"Enter the title of the movie:"<<endl;
                 getline(cin,t);
                 cout<<"Enter the year of the release of the movie :"<<endl;
                 cin>>y;
                 cout<<"Enter the name of the director of the movie :"<<endl;
                 cin>>n;
                  
                  //Creating the object of the class movie and invoking the function one by one .
                  Movie m;
                  m.setTitle(t);
                  m.setYear(y);
                  m.setDirector(n);
                  m.Display();
 
                  return 0;
             }


