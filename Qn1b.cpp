//Admission number:170300
//course:DBIT sep-dec 2023
//Strathmore University
#include <iostream>
 
using namespace std;

int main()
{
int num;

cout<<"please enter the year you are checking: ";
cin>>num;

if(num%4==0){
    cout<<"\nThis is a leap year";
}
else{
    cout<<"\nThis is not a leap year";
}
}