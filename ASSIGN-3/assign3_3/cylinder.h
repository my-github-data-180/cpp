

#ifndef CYLINDER_H
#define CYLINDER_H

#include <iostream>
using namespace std;



class Cylinder
{
 private:  
 double rad; 
 double ht;  

 public:
 Cylinder();
 Cylinder(double rad, double ht);
 double getRadius();
 void setRadius(double rad);
 double getHeight();
 void setHeight(double ht);
 void getVolume();
 void printVolume();

};

#endif