// we have to print from 1 to 100 but there is one condition we dont want to print numbers which are divisible by 3

#include<iostream>
using namespace std;

int main(){
    
    int i;
    
    for(i=1;i<=100;i++){
        if(i%3==0){
            continue;
        }
        cout<<i<<endl;
    }

    return 0;
}
