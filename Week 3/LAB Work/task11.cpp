#include<iostream>
using namespace std;
main(){

 cout<<"Enter the current world population:";
 int population;
 cin>>population;

 cout<<"Enter the monthly birth rate(number of births per month):";
 int birth;
 cin>>birth;

 float amount;
 amount = population + (birth*360);

 cout<<"Population in three decades will be "<<amount;
}