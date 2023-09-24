#include<iostream>
using namespace std;

int choice;
struct date
{

 int day;
 int moth;
 int yr;

void initDate()
{
 day=10;
 moth=12;
  yr=2023;

}


void acceptDateFromConsole()
{
cout<<"enter the date "<<endl;
cin>>this->day>>this->moth>>this->yr;

}


void printDateOnConsole()
{
 cout<<"date is :"<<this->day<<":"<<this->moth<<":"<<this->yr<<endl;

}



bool isLeapYear()
{
  int year;
  cout<<"enter the year"<<endl;
  cin>>year;
  if(year%400 && year%100)
  {
   cout<<("the year is leap year\n ");
  }
  else if(year%4)
  {
   cout<<("the year is leap year\n ");
  }
  else 
  cout<<("year is not leap year\n");
  
  return 0;
}

};


int menu()
{

printf("enter the details of date  :\n");
printf("1.for default values  :\n");
printf("2. To accept the values:\n");
printf("3. To print the values \n");
printf("4. to check year(leap year / normal yr)\n");
printf("0. to exit\n");
scanf("%d",&choice);
return choice;

}
int main()
{
    struct date d1;
    
    while(0!=menu())
    {
        
     switch(choice)
     {
        case 1:
        d1.initDate();
        break;

        case 2:
        d1.acceptDateFromConsole();
        break;

        case 3:
        d1.printDateOnConsole();
        break;
        
        case 4:
        d1.isLeapYear();
        break;

        default:
        break;
     }
      printf("thank you\n");
      
      
    }

}



