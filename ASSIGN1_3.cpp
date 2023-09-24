#include<iostream>
using namespace std;
int choice;

class student 
{
  private:
  int rollno;
  string name;
  int marks;


public:
void initStudent()
{
 this->rollno=100;
 this->name ="abc";
 this->marks=80;
}


void acceptStudentFromConsole()
{
cout<<"enter student details  :"<<endl;
cin>>rollno>>name>>marks;

}


void printStudentOnConsole()
{
cout<<"stu details"<<endl;
cout<<"rollno :"<<rollno<<endl;
cout<<"name: "<<name<<endl;
cout<<"marks:"<<marks<<endl;
}
};


int menu()
{

cout<<"enter the student details:\n"<<endl;
cout<<"1.default values print"<<endl;
cout<<"2.accept  details and print it "<<endl;
cout<<"enter 3 to exit"<<endl;
cin>>choice;
return choice;

}



int main()
{
    class student s1;
    
    while(3!=menu())
    {

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

     }
     cout<<"thank you"<<endl;

}

