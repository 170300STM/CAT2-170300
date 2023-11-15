//Admission number:170300
//course:DBIT sep-dec 2023
//Strathmore University

#include <iostream>
using namespace std;

bool check(int p){
    if (p<=1){
        return false;
    }
    for(int i=2;i*i<=p;i++)
    {
        if (p%i==0){
            return false;
        }
    }
    return true;
}

int main(){
int i,len;
cout<<"what is the limit of printing ";
cin>>len;

 for (int i = 2; i <=len; i++)
 {
    if (check(i)){
        cout<<i<<"\n";
    }
 }

 cout<<"\nThe prime number is up to "<<len<<"are those above ";
 
}