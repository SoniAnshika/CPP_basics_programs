#include<iostream>
#include<fstream>
using namespace std;

int main()
{
     char str[100];
     string st;
    
     /*Opening the file in write mode. */
     ofstream out;
     out.open("Tmp.txt");
     if(out.good()==0)
     {
     cout<<"ERROR"<<endl;
     return 0;
     }
     
     /*Writing content in the file. */
     out<<"Welcome to JUET Guna MP.\n"<<endl;
     
     /*Closing the write mode of the file. */
     out.close();
     
      cout<<"\nInput the name of file to encrypt : " ;
      cin>>st;
      
      /*Opening read mode of the file. */
      ifstream fi;
      fi.open("Tmp.txt");
      if(st != "Tmp.txt")
      {
      cout<<"ERROR"<<endl;
      return 0;
      }

      cout<<"\nThe content of the file is :"<<endl;
      while(fi)
       {
       fi.getline(str,100);
       cout<<str;
      }
      
      /*Closing tne read mode of the file. */
      fi.close();
     
      /*Opening the file again in read mode. */
      ifstream fin;
      fin.open("Tmp.txt");
      if(fin.good()==0)
      {
      cout<<"ERROR"<<endl;
      return 0;
      }
     
      /*Opening Temporary file in write mode. */
     ofstream fout;
     fout.open("Tmp1.txt");
    if(fout.good()==0)
    {
    cout<<"ERROR"<<endl;
    return 0;
    }
    
    /*Encrypting the content of the file. */
    while(fin)
    {
    fin.getline(str,100);
    for(int i=0;str[i]!='\0';i++)
    {
    str[i]=str[i]+2;
    }
    fout<<str;
   }
    
   /*Closing both files. */
   fout.close();
   fin.close();
    
    /*Removing the file "Tmp.txt". */
    remove("Tmp.txt");
    /*Renaming temporary file. */
    rename("Tmp1.txt","Tmp.txt");
    
    cout<<"\nFile Tmp.txt successfully encrypted..!!"<<endl;
    cout<<"Encrypted Content is :\n";
    ifstream f;
    f.open("Tmp.txt");
    if(f.good()==0)
    {
    cout<<"ERROR"<<endl;
    return 0;
    }
   
    while(f)
     {
     f.getline(str,100);
     cout<<str;
     }
      cout<<"\n";
     
      return 0;
}
   
      
    