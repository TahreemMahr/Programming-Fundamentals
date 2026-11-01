#include<iostream>
using namespace std;
main() {

 cout<<"Enter the size in megabytes(MB): ";
 int mb;
 cin>>mb;

 float bits;
 bits = mb*1024*1024*8 ;

 cout<<" "<<mb<<" mb is equal to "<<bits<<"bits";
}