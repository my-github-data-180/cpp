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


  virtual void accept()
 {
   cout<<"enter the employees details:"<<endl;
   cout<<"id :"<<endl;
   cin>>this->id;
   cout<<"sal :"<<endl;
   cin>>this->sal;

 }

  virtual void  display()
 {
  cout<<"the employees details are :"<<endl;
  cout<<"id :"<<this->id<<endl;
  cout<<"sal :"<<this->sal<<endl;

 }

   virtual void desgnation()=0;

   friend void  CounDesigntion( int *a,int *b,int *c);

};


void CounDesigntion( int *a,int *b,int *c)
{
    cout<<"employees as Manager are ->"<<*a<<endl;
    cout<<"employees as Salesman  are->"<<*b<<endl;
     cout<<"employees as Sales manager are->"<<*c<<endl;

}




class Manager :virtual public Employee
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

void desgnation()
{
   cout<<"Manager"<<endl;
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



class Salesman :virtual public Employee
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

 void desgnation()
{
   cout<<"Salesman"<<endl;
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


  void desgnation()
  {
   cout<<"Sales manager"<<endl;
  }
};




int menu1()
{
    int choice;
    cout<<"enter your choice"<<endl;
    cout<<"1.To accept Employees"<<endl;
    cout<<"2. For the count of all employees with respect to designation"<<endl;
    cout<<"3. Display respective designation of employees"<<endl;
    cout<<"4.EXIT"<<endl;
    cin>>choice;
    return choice;
}


int menu2()
{
  int choice;
  cout<<"enter your choice"<<endl;
  cout<<"7.For Manager"<<endl;
  cout<<"8.For Salesman"<<endl;
  cout<<"9.For Sale maanager"<<endl;
  cout<<"0.For exit"<<endl;
  cin>>choice;
  return choice;


}

int main()
{
    int choice1;
    int choice2;

    Employee *arr[10];
    int index=0;
    int m=0;
    int s=0;
    int sm=0;
    
    while((choice1=menu1())!=4)
    {
      switch(choice1)
      {
       case 1:
       while((choice2=menu2())!=0)
       {
        switch(choice2)
        {
       case 7:
       if(index<10)
       {
       arr[index]=new Manager;
       arr[index]->accept();
       index++;
       m++;
       }
       else 
       cout<<"entry exceeded for employees......"<<endl;
       break;
       case 8:
       if(index<10)
       {
       arr[index]=new Salesman;
       arr[index]->accept();
       index++;
       s++;
       }
       else 
       cout<<"entry exceeded for employees......"<<endl;
       break;
       
       case 9:
       if(index<10)
       {
       arr[index]=new sales_manager;
       arr[index]->accept();
       index++;
       sm++;
       }
       else 
       cout<<"entry exceeded for employees......"<<endl;
       break;
       
        }

       }
       
        case 2:
        CounDesigntion(&m,&s,&sm);
        break;

        case 3:
        int i;
        for(i=0;i<index;i++)
        {
        cout<<arr[i]->get_id()<<"--";
        arr[i]->desgnation();
        
        }
        default :
        cout<<"wrong choice enter......"<<endl;

        }
        
        }
        for(int i=0;i<index;i++)
        delete arr[i];

    }






