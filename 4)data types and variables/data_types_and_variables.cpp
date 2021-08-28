// calculate two numbers 

// input a, b

// average= (a+b)/2
//  a and b are variables

// types of data types 
// 1-integer 
// 2-float
// 3-character
// 4-boolean

// making code in variable 
#include <iostream>
using namespace std;

int main(){

    int a; //declaration
    a= 12;  //initialisation
    
    cout<<"size of int"<<sizeof(a)<<endl;

    float b; //declaration
    cout<<"size of float"<<sizeof(b)<<endl;

    char c; //declaration
    cout<<"size of char"<<sizeof(c)<<endl;

    bool d;
    cout<<"size of bool"<<sizeof(d)<<endl;

    short int si;
    long int li;
    cout<<"size of short int "<<sizeof(si)<<endl;
    cout<<"size of long int "<<sizeof(li)<<endl;
    
    return 0;

    

}

// type modifier
// signed 4 bytes
// unsigned 4 bytes
// long 8 bytes
// short 2 bytes
