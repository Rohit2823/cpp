// given an array of size n the task is to find out first repeating elements in the array of integers i.e an element that occurs more than once and whose index of first occuerence is smallest

// 1<=N<=10^6

#include<iostream>
#include<climits>
using namespace std;

int main(){


// we are going to maintain array idx and minidx in 
// in array idx we will initialise it with the -1 and minidx we are going to initialise it with INR_MAX



    int n;
    cin>>n;
    int a[n];

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }


    return 0;
}