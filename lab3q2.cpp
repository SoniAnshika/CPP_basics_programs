#include<iostream>
using namespace std;

//Declaration  of  the  function  minmax.
void minmax(int array[],int length,int &min,int &max);
/* In the above function with help of the reference variable maximum and minium value of the array is found in its defination. */  
int main()
{
    int N;
    cout<<"Enter the length of the array :"<<endl;
    cin>>N;
    int a[N];
    for(int i=0;i<N;i++)
    {
        cout<<"Enter the  element of  the array. "<<endl;
        cin>>a[i];
    }
    int max=a[0],min=a[0];
    minmax(a,N,min,max);
    cout<<"The maximum and minimum value of the array of "<<N<<"  integers are  : "<<max<<"  and  "<<min<<endl;
    return 0;
}

//  Defination  of  the  function  minmax.
void minmax(int array[],int length,int &min,int &max)
{
    for(int i=0;i<length;i++)
    {
        if(max < array[i])
        max = array[i];
        if(min > array[i])
        min = array[i];
    }
 
}