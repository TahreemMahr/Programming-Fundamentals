#include<iostream>
using namespace std;
main(){

 cout<<"Enter vegetable price per kilogram (in coins): ";
 float price1;
 cin>>price1;

 cout<<"Enter fruit price per kilogram (in coins): ";
 float price2;
 cin>>price2;

 cout<<"Enter total kilograms of vegetables: ";
 float total1;
 cin>>total1;

 cout<<"Enter total kilograms of fruits: ";
 float total2;
 cin>>total2;

 float totalCoins = (price1*total1) + (price2*total2);

 float final = totalCoins/1.94;

 cout<<"Total earning in Rupees (Rps): "<<final;
}