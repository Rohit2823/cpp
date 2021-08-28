// used to connect multiple conditinons together or to reverse logical value 

//  &&-----AND gives us true if both operands are true, else false

//  ||-----OR gives us true if atleast one of the operand is false

//  !------NOT gives the opposite logical value of the operand true becomes false and false becomes true 

#include<iostream>
using namespace std;

int main(){

    //write a program to output whether a number is divisible by both 2 and 3 or divisible by only one of them 
    // %2 and %3 or only one of them 

    int n;
    cout<<"number";
    cin>>n;

    if (n%2==0 && n%3==0)
    {
        cout<<"number is divisible by both"<<endl;
    }else if (n%2==0)
    {
        cout<<"n is divisible by 2"<<endl;
    }else if (n%3==0)
    {
        cout<<"n is divisible by 3"<<endl;
    }else
    {
        cout<<"number is nor divisible by 2 neither 3 "<<endl;
    }
    
    
    


    return 0;
}