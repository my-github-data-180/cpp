#include "cylinder.h"

Cylinder::Cylinder()
 {
  
  this->rad=5;
  this->ht=5;

 }


 Cylinder::Cylinder(double rad, double ht)
 {
  this->rad=rad;
  this->ht=ht;

 }


  double Cylinder::getRadius()
  {
    return rad;

  }
  
  void Cylinder::setRadius(double rad)
  {
    this->rad=rad;
  }


  double Cylinder::getHeight()
  {
    return ht;
  }

  void Cylinder::setHeight(double ht)
  {
    this->ht=ht;
  }


  void Cylinder::getVolume()
  {
    cout<<"the radius :"<<endl;
    cin>>this->rad;
    cout<<"the height :"<<endl;
    cin>>this->ht;

  }


  void  Cylinder::printVolume()
  {
    double vol;
    vol=3.14*this->rad*this->rad*this->ht;
    cout<<"the volume of the cylinder :"<< vol<<endl;
  }