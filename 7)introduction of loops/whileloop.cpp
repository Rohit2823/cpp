// in forloop we have to maintain one counter variable who take care of our our itration 
// there is nothing like this in whileloop 
// we use whileloop when we dont have care about itration we will continue our loop till then our condition is truw 

// while loop
// i have to take a input till user dont give us a negative number


#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    
    while(n>0){
        cout<<n<<endl;
        cin>>n;

    }


    return 0;
}