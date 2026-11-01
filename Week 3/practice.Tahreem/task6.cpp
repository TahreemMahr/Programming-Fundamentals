#include<iostream>
using namespace std;
main(){

 cout<<"Enter paint area:";
 int n;
 cin>>n;

 cout<<"Enter Width:";
 int w;
 cin>>w;
 
 cout<<"Enter Height:";
 int h;
 cin>>h;

 float painted = n/(w*h);

 cout<<"Walls Painted: "<<painted;
 }