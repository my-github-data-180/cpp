
include "./cylinder.h"
int main()
{
  int choice;
  Cylinder:: Cylinder c1;
  while((choice=menu())!=0)
  { 
    switch(choice)
    {
     case 1:
      c1.getVolume();
      break;

     case 2:
     c1.printVolume();
      break;

     default:
     cout<<"invalid choice"<<endl;
     break;
    }
  }
  cout<<"thank you"<<endl;
}
