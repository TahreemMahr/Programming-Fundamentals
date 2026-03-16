#include<iostream>
using namespace std;
main(){

 cout<<"Enter the size of the fertilizer bag in pounds:";
 float size;
 cin>>size;

 cout<<"Enter the cost of the bag: $";
 float cost;
 cin>>cost;

 cout<<"Enter the area in the square feet that can be covered by the bag:";
 float area;
 cin>>area;

 float costPerPound = cost/size;
 float ab = area/size;
 float fertilizerPer = cost/area;

 cout<<"Cost of fertilizer per pound: $"<<costPerPound<<endl;
 cout<<"cost of fertilizer per square foot is $"<<fertilizerPer;
}