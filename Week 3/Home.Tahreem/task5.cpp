#include<iostream>
using namespace std;
main(){

 cout<<"Enter the name of the person:";
 string name;
 cin>>name;

 cout<<"Enter the target weight loss in kilograms:";
 float target;
 cin>>target;

 float loss = target*15;

 cout<<name<<" will need "<<loss<<" days to lose "<<target<<" kg by followng doctor's suggestions";
}