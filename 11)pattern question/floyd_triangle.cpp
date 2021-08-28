#include<iostream>
using namespace std;

int main(){

    int n;
    cout<<"enter a number ";
    cin>>n;

    int counter = 1 ;

    for (int row = 1; row <= n; row++)
    {
        for (int coloumn = 1; coloumn < row; coloumn++)
        {
            cout<<counter<<" ";
            counter++;
        }
      cout<<endl;  
    } 
    
    

    return 0;
}