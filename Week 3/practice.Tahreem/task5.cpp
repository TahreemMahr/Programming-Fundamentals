#include<iostream>
using namespace std;
main(){

 cout<<"Enter your age:";
 int age;
 cin>>age;

 cout<<"Enter moves:";
 int moves;
 cin>>moves;

 float average = age /(moves + 1);

 cout<<"Average years = "<<average;
}