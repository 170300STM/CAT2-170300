//Admission number:170300
//course:DBIT sep-dec 2023
//Strathmore University
#include <iostream>

using namespace std ;

int main()
{
    int num1,num2,num3,choice;
     cout<<"Please enter your first number: ";
     cin>>num1;
     cout<<"\nPlease enter your second number: ";
     cin>>num2;
      cout<<"\nPlease enter your third number: ";
     cin>>num2;

     if ((num1<num2)&&(num1<num3)){
        choice=1;
        
     }else
     if((num2<num1)&&(num2<num3))
     {
        choice=2;
        
     }else 
     {
        choice=3;
       
     }

     switch (choice)
     {
     case 1:
        cout<<"\nThe smallist number is "<<num1;
        break;
         case 2:
        cout<<"\nThe smallist number is "<<num2;
        break;
         case 3:
        cout<<"\nThe smallist number is "<<num3;
        break;
     default:
        break;
     }
    

    return 0;
}