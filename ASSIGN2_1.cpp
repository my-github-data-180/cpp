#include<iostream>
#include<string>
using namespace std;

int sub2=80;
namespace Nstudent
{
 class students
 {
  private:  
  int rollno;
  string name;
  int marks;

  public:
  void acceptdata()
  {
   cout<<"enter the student rollno"<<endl;
   cin>>rollno;
   cout<<"enter the student name"<<endl;
   cin>>name;
   cout<<"enter the student marks"<<endl;
   cin>>marks;
  }

  void printdata()
  {
  cout<<"student details are"<<endl;
  cout<< "rollno:"<<rollno<<endl;
  cout<<"name:"<<name<<endl;
  cout<<"marks:"<<marks<<endl;

  }

 };
   int sub1=60;

}








int main()
{
 Nstudent::students s1;
 s1.acceptdata();
 s1.printdata();
 cout<<"sub1:"<<Nstudent::sub1<<endl;
 cout<<"sub2:"<<::sub2<<endl;

}