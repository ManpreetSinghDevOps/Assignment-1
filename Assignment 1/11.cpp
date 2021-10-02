// Write a program to check whether a entered character is lowercase ( a to z ) or uppercase ( A to Z )

#include<iostream>
using namespace std;

int main(){
    char x;
    cout<<"Enter a Character: ";
    cin>>x;
    cout<<x<<endl;

    if ((x>65 && x<90) || (x>97&& x<122))
    {
        cout<<"Yes "<<x<<" is a Character in ASCII Table"<<endl;
    }
    else{
        cout<<"NO! "<<x<<" is Not a Character in ASCII Table"<<endl;
        
    }
    
    return 0;
}