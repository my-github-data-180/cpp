#include<iostream>
using namespace std;


class Product
{
 private:
 int id;
 string title;
 double price;

 public:
    Product()
    {
        this->id=101;
        this->title="book1";
        this->price=1000;

    } 

    Product(int id,string title,double price)
    {
     
        this->id=id;
        this->title="title";
        this->price=price;

    }

    void display()
    {
        cout<<"procuct details  :"<<endl;
        cout<<id<<endl;
        cout<<this->title<<endl;
        cout<<this->price<<endl;
    }
     
     virtual void calculateBill()=0;

     virtual void Finalbill()=0;
    
    protected:

    double get_price()
    {
        return this->price;
    }

    void set_price(double price)
    {
       this->price=price;
    }

    

};



class Book :public Product
{
 private:   
 string author;

 public:
  Book()
   {
    this->author="amish";
   }

   Book( string author)
   {
    this->author=author;
   }

   
    void display()
    {
        Product::display();
        cout<<this->author<<endl;
        
    }
    

  void calculateBill()
  {
    cout<<"price :"<<this->get_price()<<endl;
    this->set_price(this->get_price()-this->get_price()*.10); 
  }

      void Finalbill()
    {
        cout<<"dicount 10%"<<endl;
        cout<<"Final bill ="<<this->get_price()<<endl;
    }
 
 
};


class Tape :public Product
{
 private:
 string artist;


 public:
   Tape()
   {
    this->artist="rocky";
   }


   Tape(string artist)
   {
    this->artist=artist;
   }


    void display()
    {
        Product::display();
        cout<<this->artist<<endl;
    }
    
   void calculateBill()
   {
     cout<<"price :"<<this->get_price()<<endl;
     this->set_price(this->get_price()-this->get_price()*.05); 
   }
 
       void Finalbill()
    {
        
        cout<<"dicount 5%"<<endl;
        cout<<"Final bill ="<<this->get_price()<<endl;
    }

};




int menu()
{
    int choice;
    cout<<"enter your choice"<<endl;
    cout<<"1.For purchase book"<<endl;
    cout<<"2.For purchase Tape"<<endl;
    cout<<"3. For to see your purchase "<<endl;
    cout<<"0.EXIT"<<endl;
    cin>>choice;
    return choice;
}


int main()
{
    int choice;
    Product *p[3];
    int index=0;
    while((choice=menu())!=0)
    {
     switch(choice)
     {
      
      case 1:
      if(index<3)
      {
        p[index]=new Book;
        p[index]->calculateBill();
        p[index]->Finalbill();
        index++;
      }
        else
        cout<<"your cart exceeded product purchase....!"<<endl;
        
        break;


       case 2:
       if(index<3)
       {
         p[index]=new Tape;
         p[index]->calculateBill();
         p[index]->Finalbill();
         index++;
       }
       else
        cout<<"your cart exceeded  the product purchase....!"<<endl;
       
        break;
       
       case 3:
       for(int i=0;i<index;i++)
        p[i]->display();
       break;

       default :
       cout<<"you entered invalid choice....!"<<endl;

      }
 

    }
    for(index;index<3;index++)
     delete p[index];

     cout<<"thank you"<<endl;
}
