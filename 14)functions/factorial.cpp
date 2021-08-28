#include<iostream>
using namespace std;

int main (){

    int n;
    cout<<"enter a number ";
    cin>>n;
    int fact1=1;

    for (int i = 1; i <=n; i++)
    {
        fact1=fact1*i;
        
    }
    cout<<fact1;



    return 0;
}

//functions are the piece of code to avoid repeatative code