#include<iostream>
#include<fstream>
using namespace std;

int main()
{
   char str[100];
   char st[100];
   char str1[100];
   
   ifstream fi;
   /*Opening the file in read mode.*/
   fi.open("Tmp.txt");

   if(fi.good())
    {
   cout<<"File opened Successfully !!\n"<<endl;
    } 
   else
    {
    cout<<"ERROR!!"<<endl;
    return 0;
    }
   
   cout<<"The content of the file  is : "<<endl;
    /*Printing the content of the file. */
   while(fi)
   {
    fi.getline(st,100);
    cout<<st;
    }
    /*Closing the read mode of the file .*/
    fi.close();
   
   ifstream fin;
   /*Opening the "Tmp.txt" file in read mode. */
    fin.open("Tmp.txt");
    if(fin.good()==0)
    {
    cout<<"ERROR!!"<<endl;
    return 0;
    }
    
   ofstream fout;
   /*Opening the temporary file. */
   fout.open("Tmp2.txt");
   if(fout.good()==0)
   {
    cout<<"ERROR!!"<<endl;
    return 0;
   }
   
    /*Decrypting the content of the file "Tmp.txt" and printing it in temporary file. */
    while(fin)
    {
    fin.getline(str,100);
    for(int i=0;str[i]!='\0';i++)
    str[i]=str[i]-2;
    fout<<str;
    }
   
   /*Closing file "Tmp.txt" and temporary file.*/
    fin.close();
    fout.close();
  
    /*Removing the "Tmp.txt". */
    remove("Tmp.txt");
    /*Renaming the temporary file as "Tmp.txt". */
    rename("Tmp2.txt","Tmp.txt");

   ifstream fin1;
   fin1.open("Tmp.txt");
   if(fin1.good()==0)
   {
   cout<<"ERROR!!"<<endl;
   return 0;
   }

   cout<<"\n\nDecrypted content of the file is :"<<endl;
   while(fin1)
   {
    fin1.getline(str1,100);
    cout<<str1;
    }
    
    cout<<endl;
   /*Closing the file. */
   fin1.close();

   return 0;
}
   
    
   