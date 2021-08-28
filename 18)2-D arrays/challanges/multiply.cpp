#include<iostream>
using namespace std;

int main(){

    /*approach =>
    1) initialise 1st and 2nd matrix
    2) initialize ans matrixz with 0
    */

   int m1[3][4]={{2,4,2,1},{8,4,3,6},{1,7,9,5}};
   int m2[4][3]={{1,2,3},{4,5,6},{7,8,9},{4,5,6}};

    int ans[3][3]={0};
    

    //1st loop for rows 2nd loop for coloumn and last inner loop multiplication
    //1st loop will 3  3 4
    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<4; k++)
            {
                ans[i][j]+= m1[i][k] * m2[k][j];

            }
        }
    }


    for(int i=0; i<3; i++)
    {
        for(int j=0; j<3; j++)
        cout<< ans[i][j]<<" ";
        cout<<endl;
    }


    return 0;
}