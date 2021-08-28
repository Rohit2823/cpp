// what is bubble sort 
//repetedly swap two adjecent elements if they are in wrong order 
// in this what we do we compare adjecent element side by side that will give us maximum number at the correct place
// then we are going to repeat the order again till we get our sorted array

//  if we have n elements then n-1 iteration before we get our sorted array
//for ith iteration we are going to see n-i 


// why we called it bubbled array because in this whichever our maximum element it will come up like bubble first 


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
// first thing first we have to make one counter for iteration 

int counter=1;
while(counter<n)
{
    for(int i=0; i<n; i++)
    {
        if(arr[i]>arr[i+1])
        {
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
    counter++;
}

    for(int i=0; i<n; i++)
    {
        cout<<arr[i];
    }
    cout<<endl;


    return 0;
}