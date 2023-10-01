#include<iostream>
#include<string>
using namespace std;

class Date
{
 private:
 int day ;
 int month;
 int year;

 public:
 Date()
 {
    this->day=1;
    this->month=02;
    this->year=2023;
 }

 Date(int day,int month,int year)
 {
    this->day=day;
    this->month=month;
    this->year=year;  
 }

  void set_day(int day)
  {
    this->day=day;

  }

  int get_day()
  {
    return this->day;
  }

  void set_month(int month)
  {
    this->month=month;

  }

  int get_month()
  {
    return month;
  }

  void set_year(int year)
  {
    this->year=year;
  }

  int get_year()
  {
    return year;
  }


  void accept()
  {
   cout<<"enter day"<<endl;
   cin>>this->day;
   cout<<"enter month"<<endl;
   cin>>this->month;
   cout<<"enter year"<<endl;
   cin>>this->year;
   

  }


  void display()
  {
   cout<<this->day<<"/"<<this->month<<"/"<<this->year<<endl;

  }



  bool is_leap_year()
  {

   cout<<"enter year to check for leap year"<<endl;
   cin>>this->year;
     
    if(this->year % 400==0 || this->year%4 ==0)
    {  cout<<"year is leap year..."<<endl;
     return true;
    }
     else if(this->year%100!=0)
     cout<<"year is not leap year...."<<endl;
     return false;

  }
};




class Person
{
 private:
 string name ;
 string add;
 Date birth_date;

 public:
 Person()
 {
    this->name="ABC";
    this->add="karad";

 }

 Person(string name,string add,int day,int month,int year):birth_date(day,month,year)
 {
   this->name=name;
   this->add=add;
   this->birth_date=birth_date;
 }

 void set_name(string name)
 {
    this->name=name;
 }

 string get_name()
 {
    return this->name;
 }

 void set_add(string add)
 {
    this->add=add;
 }

  string get_add()
 {
    return this->add;
 }


  void set_birth_date(Date birth_date)
 {
    this->birth_date=birth_date;
 }

  Date get_birth_date()
 {
    return this->birth_date;
 }

 
 void accept()
 {
  cout<<"enter person details:"<<endl;
  cout<<"name :"<<endl;
  cin>>this->name;
  cout<<"add :"<<endl;
  cin>>this->add;
  cout<<"DOB"<<endl;
  birth_date.accept();
 
 }

 void display()
 {
    cout<<"------------------------------"<<endl;
    cout<<"name :"<<this->name<<endl;
    cout<<"add :"<<this->add<<endl;
    cout<<"DOB "<<endl;
    birth_date.display();
   
    
 }
};




class Employee :public Person
{
 public:
 int id;
 float  sal ;
 string dept;
 Date doj;

 public:
 Employee()
 {
    this->id=100;
    this->sal=10000;
    this->dept="sales";


    
 }

 Employee(int id,float sal,string dept,int day,int month,int year):doj(day,month,year)
{
    this->id=id;
    this->sal=sal;
    this->dept=dept;
    
}

 void set_id(int id)
 {
    this->id=id;
 }

 int get_id()
 {
    return this->id;
 }

  void set_sal(float sal)
  {
    this->sal=sal;
  }

  float get_sal()
  {
    return this->sal;
  }

  void set_dept(string dept)
  {
    this->dept=dept;
  }

  string get_dept()
  {
    return this->dept;
  }


 void set_doj(Date doj)
  {
    this->doj=doj;
  }

  Date get_doj()
  {
    return this->doj;
  }


  void accept()
  {
  Person::accept();
  cout<<"enter id"<<endl;
  cin>>this->id;
  cout<<"enter sal"<<endl;
  cin>>this->sal;
  cout<<"enter dept"<<endl;
  cin>>this->dept;
  cout<<"Joining Date"<<endl;
  doj.accept();
  
  }

  void display()
  {
    Person::display();
    cout<<"id :"<<this->id<<endl;
    cout<<"sal :"<<this->sal<<endl;
    cout<<"dept :"<<this->dept<<endl;
    cout<<"Joining Date"<<endl;
    doj.display();

  }
};


int main()
{
Employee e1;
 e1.accept();
e1.display();
//  Person p1;
//  p1.accept();
//  p1.display();




}