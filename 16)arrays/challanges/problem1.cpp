//given an array a[] of size n. for every i from 0 to n-1 output max(a[0],a[1],.....,a[i])

// here what will you do you compare adjecent two elements and then print max between two 
// you will continue this step till end 

#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n; 
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    for(int i=0; i<n; i++)
    {
        int mx= max(mx,arr[i]);
        cout<<mx<<" ";
    }

    return 0;
}