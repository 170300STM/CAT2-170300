// Admission number:170300
// course:DBIT sep-dec 2023
// Strathmore University
const int user=123;
const int pass=345;
#include<iostream>
using namespace std;
int main(){

int username,password;

cout<<"Please enter the user name: ";
cin>>username;
cout<<"\nPLease enter the password: ";
cin>>password;

if((username==user)&&(password==pass))
{
    int d;
    while(d=3)
   {
 int c;
    cout<<"\nLogin successful";
    cout<<"\nWelcome to my simple app and actio to perform";
    cout<<"\n1. Go To About Us to page";
    cout<<"\n2. Go to service page";
    cout<<"\n3. Go to Full profile page";
    cout<<"\n4. Logout";
    cin>>c;

    switch (c)
    {
    case 1:
        cout<<"\n My name is James francis \n The chief manager";
        cout<<"\ni enjoy creating programs";
        cout<<"\n If you wanna continue enter 3:";
        cin>>d;

         break;

         case 2:
         cout<<"\nI can make websites to earn money";
         cout<<"\n I can grden and do other hard labour to earn money";
         cout<<"\n If you wanna continue enter 3:";
        cin>>d;
         break;
         case 3:
         cout<<"\n Name: James Francis";
         cout<<"\n Age: 24";
         cout<<"\n Country: Kenyan";
         cout<<"\n City:Nairobi";
         cout<<"\n University: Strathmore";

         break;

         case 4:
         cout<<"\n Logout";
         break;
    
    default:
        break;
    }
   }
}else{
    cout<<"\n Worng password";
}
    return 0;
}