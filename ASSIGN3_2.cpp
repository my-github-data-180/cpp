#include<iostream>
using namespace std;

class Tollbooth
{
 private: 
 unsigned int Ct; //car total
 double Cm;  // car money collected

 public:
 Tollbooth()
 {
    this->Ct=0;
    this->Cm=0;
 }

  
  void payingCar()
 {
    this->Ct=Ct+1;
    this->Cm=Cm+0.5;

 }

  
  void nopayCar()
 {
    this->Ct=Ct+1;
    this->Cm=Cm;
 }
  
  
  void printOnConsole()
  {
     cout<<"the total cars passed through tollbooth:"<<this->Ct<<endl;
     cout<<"the money collected at "<<this->Cm<<endl;
     
  } 

};


int menu()
{
    int choice;
    cout<<"enter the the choice "<<endl;
    cout<<"1.paying cars"<<endl;
    cout<<"2.not paying cars"<<endl;
    cout<<"0.to exit"<<endl;
    cin>>choice;
    return choice;

}



int main()
{
    Tollbooth T1;
    T1.printOnConsole();

    int choice;
    while((choice=menu())!=0)
    {
     switch(choice)
     {
      case 1:
      T1.payingCar();
      T1.printOnConsole();
      break;

      case 2:
      T1.nopayCar();
      T1.printOnConsole();
      break;

      default :
      cout<<"choice doesn't exist.. ..ENTER AGAIN"<<endl;


     }
    }
    cout<<"thank you"<<endl;
}