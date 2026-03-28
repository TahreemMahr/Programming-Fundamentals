#include<iostream>
using namespace std;
int main(){
float lbs = 0.45;
cout<<"Enter weight in pounds : ";
int weight;
cin>>weight; 
float pounds;
pounds = weight * lbs;
cout<<" "<<weight<<" pound is equal to "<< pounds <<" kgs";
return 0;
}