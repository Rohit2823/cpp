/*
what are character array ?
array of characters.

declaration==>
char arr[n+1]; n+1 because we are using null character in the end.

    why we need to add null character in the end
-> whenever we use space in c++, compiler imagines that we are giving input after space



*/


#include<iostream>
using namespace std;

//taking input and output in character array
int main(){

    char arr[100];
    cin>>arr;

    cout<<arr;
    cout<<arr[3];

    return  0;
}