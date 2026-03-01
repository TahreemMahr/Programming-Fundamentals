#include<iostream>
using namespace std;
main(){

 cout<<"Enter minutes:";
 int minutes;
 cin>>minutes;

 cout<<"Enter fps:";
 int fps;
 cin>>fps;

 float frame;
 frame = minutes*60*fps;

 cout<<"Total frames = "<<frame;
}