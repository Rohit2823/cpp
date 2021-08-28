// calculate ncr
// n!/(n-r)!*r!

#include<iostream>
using namespace std;

//mistakes--> mistake in loops and return 
int fact(int n)
{
    int factorial=1;
    for(int i=2; i<=n; i++)
    {
        factorial=factorial*i;
    }
return factorial;
    
}

int main(){

    int n,r;
    cout<<"enter n and r: ";
    cin>>n>>r;

    int ans= fact(n)/(fact(r)*fact(n-r));
    cout<<ans<<endl;

    return 0;
}