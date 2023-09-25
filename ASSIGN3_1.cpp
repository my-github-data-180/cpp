#include<iostream>
using namespace std;

class volbox
{
private:
int len;
int wid;
int ht;

public:
volbox()
{
this->len=10;
this->wid=10;
this->ht=10;
}


volbox(int len,int wid,int ht)
{
this->len=len;
this->wid=wid;
this->ht=ht;
}

void accept()
{
 cout<<"enter the data for vol:"<<endl;
 cout<<"lenght"<<endl;
 cin>>this->len;
 cout<<"width"<<endl;
 cin>>this->wid;
 cout<<"height"<<endl;
 cin>>this->ht;

}

void print()
{
 int vol;
 vol=len*wid*ht;
cout<<"the volume of box  :"<<vol<<endl;


}
};



int main()
{
    volbox v1,v2;
    v1.accept();
    v1.print();
    v2.print();
    
}