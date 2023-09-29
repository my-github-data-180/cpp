#include<iostream>
using namespace std;

class Employee
{
 private:   
 int id;
 float sal;

 public:
 Employee()
 {
    this->id=1001;
    this->sal=10000;
 }

 Employee(int id,float sal)
 {
    this->id=id;
    this->sal=sal;

 }

 void set_id(int id )
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


 void accept()
 {
   cout<<"enter the employees details:"<<endl;
   cout<<"id :"<<endl;
   cin>>this->id;
   cout<<"sal :"<<endl;
   cin>>this->sal;

 }

 void display()
 {
  cout<<"the employees details are :"<<endl;
  cout<<"id :"<<this->id<<endl;
  cout<<"sal :"<<this->sal<<endl;

 }
};


class Manager :public Employee
{
private:
float bonus;

public:
Manager()
{
  this->bonus=5000;
}

Manager(int bonus)
{
  this->bonus=bonus;
}

void set_bonus(float bonus)
 {
  this->bonus=bonus;
 }

float get_bonus()
{
    return this->bonus;
} 

void accept()
{
  Employee:: accept();
  cout<<"enter the bonus :"<<endl;
  cin>>this->bonus;
}

void display()
{  
  Employee::display();
  cout<<"bonus :"<<this->bonus<<endl;
}


protected:
void accept_manager()
{
  cout<<"enter the bonus :"<<endl;
  cin>>this->bonus;
} 

void display_manager()
{
  cout<<"bonus :"<<this->bonus<<endl;

}

};



class Salesman :public Employee
{
 private:
 float comm;

 public:
 Salesman()
 {
    this->comm=500;
 }

 Salesman(float comm)
 {
    this->comm=comm;
 }

 void set_comm(float comm)
 {
    this->comm=comm;
 }

 float get_comm()
 {
    return this->comm;
 }

 void accept()
 {
   Employee:: accept();
  cout<<" enter commission :"<<endl;
  cin>>this->comm;
 }

 void display()
 {
   Employee:: display();
  cout<<"comm :"<<this->comm<<endl;
 }


protected:
void accept_salesman()
{
 cout<<" enter commission :"<<endl;
 cin>>this->comm;
}

void display_salesman()
{
 cout<<"comm :"<<this->comm<<endl;
}

};



class sales_manager :public Manager ,public Salesman
{
 public:
 sales_manager()
 {
 Manager();
 Salesman();
 }

 sales_manager(int id,float sal,float bonus,float comm):Manager(2000),Salesman(200)
 {

 }


 void accept()
 {
  Manager:: accept();
  Salesman:: accept_salesman();

 }

 void display()
 {
  Manager:: display();
  Salesman:: display_salesman();

 }

};

int main()
{
sales_manager sm;
  sm.accept();
sm.display();
Manager m;
m.accept();
m.display();
Salesman s;
s.accept();
s.display();
Employee e;
e.accept();
e.display();

}