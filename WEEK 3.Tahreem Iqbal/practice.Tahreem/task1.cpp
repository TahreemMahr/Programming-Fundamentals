#include<iostream>
using namespace std;
int main(){
   int sides;
  cout<<"Enter sides (>=3):";
  cin>>sides;
  
 
 float angles;
 angles = (sides-2)*180;

 cout<<"Sum of angles = "<<angles;
return 0;
}