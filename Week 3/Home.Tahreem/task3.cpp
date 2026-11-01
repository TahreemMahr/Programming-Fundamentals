#include<iostream>
using namespace std;
main(){

 cout<<"Enter initial velocity (m/s):";
 float vi;
 cin>>vi;

 cout<<"Enter acceleration (m/s^2):";
 float a;
 cin>>a;
  
 cout<<"Enter time (s):";
 float t;
 cin>>t;

 float fv = (a*t)+vi;

 cout<<"Final velocity (m/s) is "<<fv;
}