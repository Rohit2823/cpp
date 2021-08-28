// given an array a[] of size n. output sum of wach subarray of the given array

// example.
//  1 2 2 
//  subarrays--->

//  1  12  122  2  22  2
//  1   3   5   2   4  2

// approach
// iterate over all the subarray using nested
 

 #include<iostream>
 using namespace std; 

 int main(){

     int n;
     cin>>n;

    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }

//approach

    int sum=0;  

    for(int i=0; i<n; i++)
    {
        sum=0;
        for(int j=i; j<n; j++)
        {   
            // dont initialise it dual time it will give you error like when i initialise sum as int double time then i got a really big number which was not related to my output

            sum = sum + a[j];
            cout<<sum<<" ";
        }
    }
     return 0;
 }