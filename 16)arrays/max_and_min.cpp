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

    //we are comparing every element of an array with the maximum number if element of an array is max then we will update our max number.
    int maxno=INT_MIN;
    int minno=INT_MAX;
    //here we have to initialize our min and max no if we havent then compiler will give any garbage value to it.
    
    for(int i=0; i<n; i++)
    {
        // if(arr[i]>maxno)
        // {maxno=arr[i];}
        // else if(arr[i]<minno)
        // {minno=arr[i]}

        //        to consize this code we re going to use function


        maxno=max(maxno,arr[i]);
        minno=min(minno,arr[i]);
    }
    
    cout<<maxno<<" "<<minno;
 
    return 0;
}