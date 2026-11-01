#include<iostream>
using namespace std;
main(){

 
  cout<<"Enter Imposters count:";
  float imposters;
  cin>>imposters;

 cout<<"Enter Player count:";
 float players;
 cin>>players;

 float chance;
 chance = 100*(imposters/players);

 cout<<"Chance of being an imposter: "<<chance<<"%";
}