#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

int main()
{
     char filename[30],ch;
     fstream fps, fpt;
     cout<<"Enter the Name of File :\n";
     gets(filename);
     fps.open(filename, fstream::out);
    if(!fps)
    {
     cout<<"\nError Occurred\n";
     return 0;
     }
     fpt.open("Tmp.txt", fstream::in);
     if(!fpt)
     {
     cout<<"\nError Occurred while Opening tmp file.\n";
     return 0;
     }
     while(fps>>ch)
     {
      ch=ch-100;
       fps<<ch;
     }
     fps.close();
     fpt.close();
     cout<<"\nfile "<<filename<<" Decrypted Successfully!";
     cout<<endl;
     
     return 0;
}