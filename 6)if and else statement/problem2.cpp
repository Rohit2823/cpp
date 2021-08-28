// we have to find out max from given three numbers
// 4 7 2  

#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cin>>a>>b>>c;
    
    if(a>b){
        if (a>c){
            cout<<a<<endl;
        }
        else{
            cout<<c<<endl;
        }
    }
    else{
        if(b>c){
            cout<<b<<endl;
        }else
        {cout<<c<<endl;
        }
    }



    return 0;
}