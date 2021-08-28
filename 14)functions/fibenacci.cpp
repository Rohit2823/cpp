#include<iostream>
using namespace std;

// the fibonacci sequence is a series of numbers where a number is the addition of last two numbers starting from 0 and 1 

// logic:
// here we are going to initialize two terms which will start from 0 and 1 and then they wil get updated 
void fib(int n)
{
    int t1=0;
    int t2=1;
    int nextterm;

    for(int i=1; i<=n; i++)
    {
        cout<<t1<<endl;
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }
return;
}

int main(){

    int n;
    cout<<"enter a number ";
    cin>>n;

    fib(n);

    return 0;
}