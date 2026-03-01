#include<iostream>
using namespace std;
int main(){
   int sides;
  cout<<"Enter the number of sides of the polygon:";
  cin>>sides;
  
 
 float angles;
 angles = (sides-2)*180;

 cout<<"The total sum of internal angles of a : "<<sides<<"-sided polygon is : "<<angles<<"-degrees";
return 0;
}