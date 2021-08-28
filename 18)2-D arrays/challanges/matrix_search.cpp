/*
given a matrix of n x m
write an algorithm to find that the given value exists in the matrix or not 
integer in each row are sorted in ascending from left to right 
intergers in eah coloumn are sorted in ascending from top to bottom 
*/
#include<iostream>
using namespace std;

/*
approach==>
one way to solve this problem is searching linearly with every element that will take time complexity of nxm;
so the optimize way is to use the statement of sorting 
we will start from one point and the target is less then we will move to left coloumn 
but if target is greater then we will move to bottom row;
*/

/*
 we need one matrix of nxm
input matrix
take a target
we can not start our algorithm from any element we can only start from 3rd element or the 7th element because that will give us choice to of bigger and smaller number
here we are starting from 3rd element
*/
int main(){

    int n,m,t;
    cin>>n>>m>>t;

    int mat[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> mat[i][j];
        }
    }


    int r=0, c=m-1;
    bool found = false;

    while ( r<n && c>=0 )
    {
        if(mat[r][c]==t)
        {
           found = true ;
        }//if target is less we are moving left coloumn
        if (mat[r][c]>t)
        {
            c--;
        }
        else
        {
            r++;
        }
    }

    if(found)
    {
        cout<<"element is found";
    }
    else
    {
        cout<<"element is not found";
    }

    return 0;
}  