//implimenting a simple calsulator using switch


#include<iostream>
using namespace std;

int main(){

    int a,b;
    char op;

    cout<<"enter number a"<<endl;
    cin>>a;
    cout<<"what operation you want to perform"<<endl;
    cin>>op;
    cout<<"enter number b"<<endl;
    cin>>b;

switch (op)
{
case 'a':
    cout<<a+b<<endl;
    break;
case 's':
    cout<<a-b<<endl;
    break;
case 'm':
    cout<<a*b<<endl;
    break;
case 'd':
    cout<<a*b<<endl;
    break;

default:
cout<<"out of syllabus"<<endl;
    break;
}






    return 0;
}