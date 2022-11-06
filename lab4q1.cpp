  #include<iostream>
   
  using namespace std;

          class student
          {
          public :
          int Rollno[100] , p1 ,p2 ,p3,p4 ;
         double s1[100] , s2[100] , s3[100],tm[100] ,m1,m2,m3,m4 ;
          
                 void input()
                {
                /* Taking input from the user for rollno ,subject 1, subject 2 and subject 3 . */
                for(int i=0 ; i<100 ; i++)
                {
                   cout<<" Enter the Rollno. ,marks in subject 1,subject 2 and subject 3 of  the student  "<< (i+1)<<" : " ;
                   cin>>Rollno[i]>>s1[i]>>s2[i]>>s3[i];
                }
               }

               void calculatetotal()
               {
               /* Calculating the total marks of the students . */
              for(int i=0 ; i<100 ; i++)
               {
                 tm[i]=s1[i]+s2[i]+s3[i] ;
               }
              }
         
           void  highestmarks()
          {
          /* Finding the maximum marks of the student in subject 1 ,subject 2 , subject 3 and  the highest total . */ 
          for(int i=0 ; i<100 ; i++)
         {
                 if(m1<s1[i])
                 {
                 m1=s1[i];
                 p1=i;
                 }
                 if(m2<s2[i])
                 {
                 m2=s2[i];
                 p2=i;
                 }
                 if(m3<s3[i])
                 {
                 m3=s3[i];
                 p3=i;
                }
                if(m4<tm[i])
               {
                m4=tm[i];
                p4=i;
                }
          }
          }

           void display()
             {
                 //Displaying data in tabular form.
                cout<<"_____________________________________________________________________________________"<<endl ;
                cout<<"Roll No.\t Subject 1\t Subject 2\tSubject 3\tTotal marks"<<endl ;
                cout<<"_____________________________________________________________________________________"<<endl ;

                for(int i=0 ; i<100 ; i++)
              {
                cout<<Rollno[i]<<"\t\t"<<s1[i]<<"\t\t"<<s2[i]<<"\t\t"<<s3[i]<<"\t\t"<<tm[i]<<"\n";
              }
              cout<<"____________________________________________________________________________________"<<endl ;
          
              //Displaying the highest  marks with roll no.
            cout<<"The highest marks of the student in subject 1 is :"<<m1<<" with roll no. : "<<Rollno[p1]<<endl;
            cout<<"The highest marks of the student in subject 2 is :"<<m2<<" with roll no. :"<<Rollno[p2]<<endl;
            cout<<"The highest marks of the student in subject 2 is :"<<m3<<" with roll no. :"<<Rollno[p3]<<endl;
            cout<<"The highest total marks of the student is :"<<m4<<" with roll no. :"<<Rollno[p4]<<endl;
            }
       } ;

        int main()
        {
              //creating object of class student.
               student s;
              //invoking member functions with the object.
               s.input();
               s.calculatetotal();
               s.highestmarks();
               s.display();
        
               return 0;
   
   }




