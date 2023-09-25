
#include<stdio.h>


struct date 
{
 int day;
 int month;
 int yr;
};



void initDate(struct date *ptrdate)
{

ptrdate->day=10;
ptrdate->month=12;
ptrdate->yr=2023;

}


void acceptDateFromConsole(struct date* ptrdate)
{

 printf("enter the date ....:\n");
 scanf("%d%d%d",&ptrdate->day,&ptrdate->month,&ptrdate->yr);

}


void printDateOnConsole(struct date *ptrdate)
{
 printf("the date....%d:%d:%d\n",ptrdate->day,ptrdate->month,ptrdate->yr);

}






int main()
{
  struct date  ptrdate;
 

  int choice;
  int n;
  printf("enter the choice\n");
  printf("1.in it values\n 2.accept value and print it\n");
  scanf("%d",&choice);
  do 
  {
    switch(choice)
    {  
      case 1:
      initDate(&ptrdate);
      printDateOnConsole(&ptrdate);
      break;
      
      case 2:
      acceptDateFromConsole(&ptrdate);
      printDateOnConsole(&ptrdate);
      break;

      default:
       break;
    }
    
    printf("enter any number to exit");
    scanf("%d",&n);                                                                                             
}while(n!=n);
}