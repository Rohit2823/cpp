// how to control flow of loop 
// there are two condition in this one is break and second is continue 


// suppose there is one girl neha who likes to travel a lot but her mom allows her to go out only on odd days so write a program for this 


#include<iostream>
using namespace std;

int main (){
    int pocketmoney=3000;
    for(int date=1; date<=30; date++){
        if(date%2==0){
            continue;
        }
        if(pocketmoney==0){
            break;
        }
        cout<<"you can go out"<<endl;
        pocketmoney=pocketmoney-300;
    }

    return 0;
}