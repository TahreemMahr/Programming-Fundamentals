#include<iostream>
using namespace std;
int main(){

 
  cout<<"Enter Imposters:";
  float imposters;
  cin>>imposters;

 cout<<"Enter Players:";
 float players;
 cin>>players;

 float chance;
 chance = 100 * (imposters/players);

 cout<<"Chance = "<<chance;
}