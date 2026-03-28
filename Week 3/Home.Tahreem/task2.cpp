#include<iostream>
using namespace std;
main(){

 cout<<"Number of minutes:";
 int minutes;
 cin>>minutes;

 cout<<"Frames per second:";
 int fps;
 cin>>fps;

 float frame;
 frame = minutes*60*fps;

 cout<<"Total number of frames: "<<frame;
}