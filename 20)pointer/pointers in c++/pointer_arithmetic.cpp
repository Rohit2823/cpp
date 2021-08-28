#include<iostream>
using namespace std;

int main(){
    int a = 10;
    int *p = &a ;

    cout<< p <<endl; // p is 2002
    cout<< sizeof(a) << endl;
    cout<< p+1 << endl; // p is 2006 
    cout<< *(p+1) << endl; // 
    // it is possible to change address of a pointer like using + operation it will skip while taking that much space like if it is pointing an integer it will skip 4 bytes 
    return 0;
}