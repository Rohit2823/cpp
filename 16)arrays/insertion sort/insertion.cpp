// insertion sort
    // insert an element from unsorted array to its correct positon in sorted array

 // so elements before that should be less than that and elements after that should be greater than that

    //here we are starting from 2nd element


#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
// we are not strating from 0th element we are starting from 1st thats why i=1
    for(int i=1; i<n; i++)
{
    int current=arr[i];  
    int j=i-1;
    while (arr[j]>current && j>=0)
    {
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=current;
}

for(int i=0; i<n; i++)
{
    cout<<arr[i]<<" ";
}

    return 0;
}