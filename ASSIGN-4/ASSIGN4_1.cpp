#include<iostream>
using namespace std;

class Time
{
 private:
  int hr;
  int min;
  int sec;

 public:
  Time()
  {
    this->hr=10;
    this->min=12;
    this->sec=50;

  }


  Time(int hr,int min,int sec)
  {
    this->hr=hr;
    this->min=min;
    this->sec=sec;

  }
 
 
   int getHour()
  {
    cout<<"inside getter"<<endl;
    return hr;

  }


  int getMinute()
  {
    return min;

  }


   int getSeconds()
  {
     return sec;
  }


  void printTime()
  {
    cout<<"time is :"<<endl;
    cout<<"hour :" <<this->hr<<endl;
    cout<<"minute  :"<<this->min<<endl;
    cout<<"seconds :"<<this->sec<<endl;

  }


   void setHour(int hr)
   {
    this->hr=hr;

   }


   void setMinute(int min)
   {
    this->min=min;
   }


   void setSeconds(int sec)
   {
    this->sec=sec;
   }

};


int main()
{

  Time **arr=new Time *[3];

   arr[0]=new Time;
   arr[1]=new Time(11,11,11);
   arr[2]=new Time;
    
   arr[0]->printTime();
   arr[1]->setHour(100);
   arr[1]->printTime();
   arr[2]->getHour();
   arr[2]->printTime();

     
}