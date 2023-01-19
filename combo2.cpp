 #include<iostream>
#include<fstream>
using namespace std;

     int main()
     {
     char str1[100]; 
     cout<<"\nDecryption :"<<endl;

      ifstream fi1;
      fi1.open("Tmp.txt");
      if(fi1.good()==0)
      {
      cout<<"ERROR"<<endl;
      return 0;
      }
      cout<<"The content of the file is :"<<endl;
      while(fi1)
       {
       fi1.getline(str1,100);
       cout<<str1;
      }
      
      /*Closing tne read mode of the file. */
      fi1.close();
     
      /*Opening the file again in read mode. */
      ifstream fin1;
      fin1.open("Tmp.txt");
      if(fin1.good()==0)
      {
      cout<<"ERROR"<<endl;
      return 0;
      }
     
      /*Opening Temporary file in write mode. */
     ofstream fout1;
     fout1.open("Tmp2.txt");
    if(fout1.good()==0)
    {
    cout<<"ERROR"<<endl;
    return 0;
    }
    
    /*Decrypting the content of the file. */
    while(fin1)
    {
    fin1.getline(str1,100);
    for(int i=0;str1[i]!='\0';i++)
    {
    str1[i]=str1[i]-2;
    }
    fout1<<str1;
   }
    
   /*Closing both files. */
   fout1.close();
   fin1.close();
    
    /*Removing the file "Tmp.txt". */
    remove("Tmp.txt");
    /*Renaming temporary file. */
    rename("Tmp2.txt","Tmp.txt");
    
    cout<<"\nFile Tmp.txt successfully decrypted..!!"<<endl;
    cout<<"Decrypted Content is :\n";
    ifstream f1;
    f1.open("Tmp.txt");
    if(f1.good()==0)
    {
    cout<<"ERROR"<<endl;
    return 0;
    }
   
    while(f1)
     {
     f1.getline(str1,100);
     cout<<str1;
     }
     cout<<"\n";
    
      return 0;
 }
     
