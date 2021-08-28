/*given a square matrix A and its number of rows or coloumns N rturn the transpose of A 
the transpose of a mati=rix is the matrix is the flipped over its main diagonal switching the row and coloumn indices of the matix

row becomes coloumns and coloumns become rows
1 2 3       1 4 7
4 5 6 ===>  2 5 8
7 8 9       3 6 9
*/

#include<iostream>
using namespace std;

// approach==> while doing this in transpose rownumber becomes coloumn number and coloumn number becomes row number that means have to swap coloumns and rows 
int main(){

    int matrix [3][3] = {{ 1,2,3 }, { 4,5,6, }, { 7,8,9 }};

// we have to loop on this matrix to calculate its transpose 
//i==>row
    for(int i=0; i<3; i++)
    {
        for(int j=i; j<3; j++) 
        {
            //swap
           int temp = matrix[i][j];
           matrix[i][j]=matrix[j][i];
           matrix[j][i]=temp;
        }
    }
    //print
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}