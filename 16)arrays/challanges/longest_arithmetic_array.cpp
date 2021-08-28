// longest arithematic subarray

// problem statement

// an arithematic array is an array that contains at least two integers and the difference between consecutive integers are equal. for example [9,10],[3,3,3] and [9,7,5,3] are arithmetic arrays. 

//saraswati has an array of N non-negative integers. the i-th integer of an array is A. she wants to choose a contigous arithmetic subarray for her array that has maximum length.please help her to determine the length of the longest contigous arithmetic subarray.

// at least 2 
// difference wil be same 
// want a subarray whose length is maximum.

// input-->
// the first line of the input gives the number of test cases,t. t test cases follow each test case begins with line containing the integer N. the seconf line contains N integers. The i-th integer is A.

// // output--->
// for each test case, output one line containing case #x:y, where x is the test case number (starting from 1)and y is the length of the longest contigous arithmetic subarray

// constraints:

#include<iostream>
using namespace std;

// approach:---> previous difference 
                //  current difference 
                //  minidx


int i=0;
int main(){

        int n;
        cin>>n;

        int a[n];

        for( i=0; i<n; i++)
        {
            cin>>a[i];
        }
        

        int ans = 2 ; // why 2=> because in ans we have given that at least 2.
        int pd = a[1]-a[0];
        int j=2;
        int curr =2;

        while(j<n)
        {
            if(pd==a[i]-a[i-1])
            {
                curr++
            }
            else{
                pd = a[j]-a[j-1]
                curr =2
            }
            ans= max
            j++;
        }





    return 0;
}





















