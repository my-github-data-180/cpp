#include<iostream>
using namespace std;

 int factorial(int n)
 {
   int result=1;
   if(n<0)
    throw 1;
    else
    {
    for (int i=1;i<=n;i++)
      result=result * i;
    
       return result;
    }  
 }

 int main()
 {
   int num;
   int fact;
   cout<<"enter the number to calculate factorial"<<endl;
   cin>>num;
   try
   {
   fact=factorial(num);
   cout<<"the factorial : "<<fact<<endl;
   }  
   catch(int error)
   {
    cout<<"Cant provide factorial for negative num.....!"<<endl;
   }
   

   return 0;

    
 }