#include<iostream>
using namespace std;
main(){

 cout<<"Enter a 4-digit number:";
 int number;
 cin>>number;

 int digit1 = number%10;
 number = number/10;

 int digit2 = number%10;
 number = number/10;

 int digit3 = number%10;
 number = number/10;

 int digit4 = number%10;

 int sum = digit1+digit2+digit3+digit4;

 cout<<"Sum of individuals digits = "<<sum;
}