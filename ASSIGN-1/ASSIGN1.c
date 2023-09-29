#include<iostream>
#include<string>
using namespace std;


class student 
{
  private:
  int rollno;
  string name;
  int marks;


public:
void initStudent()
{
 rollno=100;
  string =abc;
}


void acceptStudentFromConsole()
{
cout<<"enter student details  :"<<endl;
cin>>rollno>>name>>marks;

}


void printStudentOnConsole()
{
cout<<"stu details"<<rollno<<":"<<name<<":"<<marks<<endl;

}
};

int main()
{
    class student s1;
    int choice;

    cout<<"enter the student details:\n"<<endl;
    cin>>choice;

    do{

       switch(choice)
       {
        case 1:
        s1.initStudent();
        s1.printStudentOnConsole();
        break;
        
        case 2:
        s1.acceptStudentFromConsole();
        s1.printStudentOnConsole();
        break;

        default :
         printf("invalid choice\n");
         
       }

     }while(choice!=3);
     cout<<"begin again"<<endl;

}
