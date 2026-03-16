#include<iostream>
using namespace std;
main(){

 cout<<"Number of square meter you can paint:";
 int n;
 cin>>n;

 cout<<"Width of the single wall (in meters):";
 int w;
 cin>>w;
 
 cout<<"Height of the single wall (in meters):";
 int h;
 cin>>h;

 float painted = n/(w*h);

 cout<<"Number of walls you can paint: "<<painted;
 }