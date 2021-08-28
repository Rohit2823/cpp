//   if i want to print hello world 10 times then instead of writing it 10 times i will just add one loop


// for loop 

// for(initialisation;condition;update){//body}
//  counter initialisation

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;


    int sum=0; 
    for (int counter=1; counter<=n; counter++){
    
        sum=sum+counter;
    }
    cout<<sum<<endl;


    return 0;
}