/*
given two dimensional arrays of sizes n1xn2 and n2xn3 your task is to multiply this matrices and output the given matrix

2 4 2 1     1 2 3       33   42   51
8 4 3 6  x  4 5 6 ===>  69   90   111
1 7 9 5     7 8 9       112  134  156
            4 5 6 


            we are going with 1st row of 1st matrix and we will mlti[ly 1st row with the 1st coloumn of 2nd matrix
            and again with this 2nd row
*/

#include<iostream>
using namespace std;

/*approach==> 1. make a nested loop of order 3 . in the outer loop iterate over rows of 1st matrix and in the inner 
                 loop iterate over coloumns of 2nd matrix
              2. multiply rows of 1st matrix with coloumn of 2nd matrix in the innermost loop and update in the answer matrix.

    1si loop for rows 2nd loop for coloumn and last inner loop multiplication

*/
int main(){

    int n1,n2,n3;

    cin>>n1>>n2>>n3;

    int m1[n1][n2]; 
    int m2[n2][n3];

    //input for 1st matrix
    cout<<"enter your 1st matrix: \n";
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n2; j++)
            cin>>m1[i][j];                          //just because only one comand we can write it directly
    }

    //input for 2nd matrix
    cout<<"enter your 2nd matrix: \n";
    for(int i=0; i<n2; i++)
    {
        for(int j=0; j<n3; j++)
            cin>>m2[i][j];
    }

    int ans[n1][n3];
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n3; j++)
            ans[i][j]=0;
    }    

    //here we are starting our main code we are going to use 3 order nested loop
 // 1st loop for rows 2nd loop for coloumn and last inner loop multiplication   
    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n3; j++)
        {
            //coloumns of 1st matrix are same as rows of 2nd matrix
            for(int k=0; k<n2; k++)
            {
                ans[i][j] += m1 [i][k] * m2[k][j];
            }
        }
    }

    for(int i=0; i<n1; i++)
    {
        for(int j=0; j<n3; j++)
        cout<< ans[i][j]<<" ";
        cout<<endl;
    }


    return 0;
}