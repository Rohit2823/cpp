// in do while loop we exicute our loops body with statement and then we are checking our condition if it is true then we are continuing our loop and if it is false then it will terminate loop
// point is what it will loop at once because it is not cheking condition at 1st  




// we have to take numbers from users till hi do not give us a negative number
#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    do{
        cout<<n<<endl;
    }while (n>0);
    
    return 0;
}