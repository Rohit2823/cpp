/*
Pointers are variables that store the address of the other variables

why we use pointer ?
because through pointer we can access that variable
we do that using *aptr
*/

#include <iostream>
using namespace std;

int main()
{

    int a = 10;
    int *aptr;
    aptr = &a;
    //this will give us location of variable
    cout << &a << endl;
    cout << aptr << endl;

    cout << *aptr << endl; //this will give us value of variable

    *aptr = 20;
    cout << "new value" << a << endl;

    return 0;
}