// syntax of do while loop 
// do{ 
    // c++ statement 
// }
// while(condition) 
// do while wil run condition at once at least at once it will run then it will check conditon and then stop but in while looop this will not happen 

#include<iostream>
using namespace std;

int main (){
    int i= 1;
    do{
        cout<<i<<endl;
        i++;
    }while(false);

    return 0;
}