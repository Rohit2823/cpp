#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number ";
    cin>>n;

    for(int row=1; row<=n; row++)
    {
        for(int coloumn=1; coloumn<=row; coloumn++)
        {
         cout<<"*";   
        } 
        int space=2*n-2*row;
        for (int coloumn=1; coloumn<=space; coloumn++)
        {
            cout<<" ";
        }
        for(int coloumn=1; coloumn<=row; coloumn++)
        {
            cout<<"*";
        }
        cout<<endl;
    }  


       for(int row=n; row>=1; row--)
    {
        for(int coloumn=1; coloumn<=row; coloumn++)
        {
         cout<<"*";   
        } 
        int space=2*n-2*row;
        for (int coloumn=1; coloumn<=space; coloumn++)
        {
            cout<<" ";
        }
        for(int coloumn=1; coloumn<=row; coloumn++)
        {
            cout<<"*";
        }
        cout<<endl;
    }  



    return 0;
}