// check if a given number is armstrong number or not
// what is armstrong number?
// armstrong number is number whose sum of cube of its digit is number itself


// 1 2 3

#include<iostream>
#include<math.h>
using namespace std;

int main(){

        //original number=og
        //sum= last digit^3 + lastdigit3 +lastidgit^3

    int n , lastdigit ;
    cout<<"enter a number : ";
    cin>>n;
    
    int og=n;
    
    int sum=0;
    while (n>0)
    {
        int lastdigit = n%10;
        sum = sum+ lastdigit*lastdigit*lastdigit ; //i removed brackets still it is giving us a right solution . then i used pow function pow is not giving us a right solution 
        n=n/10;
    }
    if (sum==og)
    {
        cout<<"Armstrong number";

    }
    else
    {
        cout<<"not an Armstrong number";
    }
    
    




return 0;
}