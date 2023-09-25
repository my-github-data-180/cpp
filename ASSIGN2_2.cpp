
#include<iostream>
#include<string.h>
using namespace std;

class address
{
private:
string building;
string street;
string city;
int pin;

public:
address()
{
this->building="sunbeam";
this->street="peth";
this->city="karad";
this->pin=411052;
}


address(string building,string street,string city,int pin)
{
    this->building=building;
    this->street=street;
    this->city=city;
    this->pin=pin;


}


void accept()
{
    cout<<"enter address :"<<endl;
    cout<<"enter building :"<<endl;
    cin>>this->building;
    cout<<"enter street :"<<endl;
    cin>>this->street;
    cout<<"enter city:"<<endl;
    cin>>this->city;
    cout<<"enter pin :"<<endl;
    cin>>this->pin;

}


void display()
{
cout<<" :ADDRESS:"<<endl;
cout<<"building :"<<this->building<<endl;
cout<<"street :"<<this->street<<endl;
cout<<"city :"<<this->city<<endl;
cout<<"pin :"<<this->pin<<endl;
}


 void set_building(string building)
{
this->building=building;

}


void set_street(string street)
{
this->street=street;

}


void set_city(string city)
{
this->city=city;

}


void set_pin(int pin )
{
this->pin=pin;

}


string get_building()
{
 return building;
}


string get_street()
{
 return street;

}


 string get_city()
{
  return city;

}


int get_pin()
{
return pin;

}

};




int main()
{
 address d1,d2,d3;
 d1.set_building("xyz");
 d1.display();
 d2.accept();
 d2.display();
 d3.set_pin(586255);
 d3.display();


}