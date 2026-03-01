#include<iostream>
using namespace std;
main(){

 cout<<"Enter the movie name:";
 string movieName;
 cin>>movieName;

 cout<<"Enter the adult ticket price: $";
 float adultPrice;
 cin>>adultPrice;

 cout<<"Enter the child ticket price: $";
 float childPrice;
 cin>>childPrice;

 cout<<"Enter the number of adult tickets sold:";
 float sold1;
 cin>>sold1;

 cout<<"Enter the number of child tickets sold:";
 float sold2;
 cin>>sold2;

 cout<<"Enter the percentage of amout to be donated to charity:";
 float percent;
 cin>>percent;

 float totalMoney = (adultPrice*sold1) + (childPrice*sold2);
 float donation = totalMoney * (percent/100);
 float remaining = totalMoney-donation;

 cout<<"-------------------------------------"<<endl;
 cout<<"Movie: "<<movieName<<endl;
 cout<<"Total amount generated from ticket sales: "<<totalMoney<<endl;
 cout<<"Donation to charity("<<percent<<"): "<<donation<<endl;
 cout<<"Remaining amount after donation: "<<remaining;
}