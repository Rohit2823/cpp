// // suppose your teacher gave you files of checked answer sheets and they are ordered from 1 to 50 now you have to find your sheet from that and your roll no is 35 
// // will you start from roll no 1
// // no you will randomly taken out half of the sheet and then decide where you have to go 

// to implement binary searvch our elements should be in sorted order 
//  what we will do we will find mid element of our array then we compare our key with that 
// summurize what we do is we half our array till we get our desire less array 


#include<iostream>
using namespace std;

int binarysearch(int arr[], int n, int key)
{
    int start=0;
    int end=n;
    while(start<=end)
    {
        int mid=(start+end)/2;

        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
    }
    return -1;
}

int main(){

    int n;
    cin>>n;

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;

    cout<<binarysearch(arr,n, key)<<endl;

    return 0;
}
// timecomplexity
