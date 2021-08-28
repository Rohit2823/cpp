// // sorting nothing but ordering the elements in the acending order 

// selection sorting
//     find the minimum element in unsorted array and swap it with element at the beginning 


// example

// 12 45 23 51 19 8 
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

    //now we are going to code two for loops where one is going from 0 to n-1
    // and another loop will going to run form i+1 to n
    // here we are comparing our 2nd array with the one  

    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    return 0;
}