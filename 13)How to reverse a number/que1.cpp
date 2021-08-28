// check if number is prime or not 
// here we are using one header file cmath which wil allow us to use sqrt function.

// here to minimise the process of finfing the root we are fiinding the number till the squart of number till that all numbers will cover 

#include<iostream>
#include<cmath>
using namespace std;

int main(){

    int n;
    cout<<"enter a number : ";
    cin>>n;
    bool flag=0;
    for(int i=2; i<= sqrt(n); i++)
    {
        if(n%i==0)
        {
            cout<<"this is not prime"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"number is prime"<<endl;
    }


    return 0;
}