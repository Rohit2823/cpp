#include<iostream>
using namespace std;

int main(){

    int a = 1025;
    int *p = &a;

// p = adress *p = value
    cout<< "size of int a " << sizeof(a)<< endl;
    cout<< "address=" << p << " " << "value" << *p << endl;

    char *p0;
    p0 = (char*) p; // while doing typecasting in pointers dont forget to add *
    cout<< "size of char " << sizeof(p0) << endl;
    cout<< "address "<< p0 << " "<< " value "<< *p0<< endl;
    return 0;
}