#include<iostream>
using namespace std;
main(){

 cout<<"Enter Voltage (in volts) : ";
 int volts;
 cin>>volts;

 cout<<"Enter Current(in Amperes) : ";
 int current;
 cin>>current;

 float power;
 power = volts*current;

 cout<<"The power is "<<power<<" watts";
}