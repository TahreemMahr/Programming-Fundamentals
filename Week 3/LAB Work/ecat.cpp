#include<iostream>
using namespace std;
main(){

 cout<<"Enter the student's name : ";
 string name;
 cin>>name;

 cout<<"Enter matriculation marks (out of 1100) : ";
 int marks;
 cin>>marks;

 cout<<"Enter intermediate marks (out of 555) : ";
 int mark;
 cin>>mark;

 cout<<"Enter Ecat marks (out of 400) : ";
 int ecat;
 cin>>ecat;

 float aggregate;
 aggregate = (10*marks)/1100 + (40*mark)/555 + (50*ecat)/400 ;

 cout<<"Aggregate score for "<<name<<"  "<<aggregate<<"%";
}