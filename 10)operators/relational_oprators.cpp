// relational operators ;
// define a relation between two oprands;
// they are returning booliens value

// ==      gives true value if both operands have equal value

// !=      gives true if both oprands are not equal 

// >       gives true if left oprand is more that right operand

// <       gives true if right oprand is more than left oprand

// >=      gives true if left oprand is more than or is equal to right oprand

#include<iostream>
using namespace std;
int main(){

// input a number n and tell whether it is equal to less than or more than 10\
 
    int n;
    cout<<"enter a number : ";
    cin>>n;

    if (n>10)
    {
        cout<<"n is more to 10"<<endl;
    }else if(n<10){
        cout<<"n is less than 10"<<endl;
    }else{
        cout<<"n is equal to 10"<<endl;

    }
    



    return 0;
}