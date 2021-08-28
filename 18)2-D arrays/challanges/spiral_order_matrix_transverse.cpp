    /*
    what is spiral order==>

    first we will print top row
    1 2 3

    then we will print last coloumn
    1 2 3 
        6
        9

    then we will print last row
    1 2 3
        6
    7 8 9

    and then we will print our 1st coloumn
    1 2 3
    4   6
    7 8 9

    and then we will print remaining elements in the same manner    

    */
    #include<iostream>
    using namespace std;

    signed main(){

        int n,m;
        cin>>n>>m;

        int a[n][m];
        
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }  
        }

        /*
        spriral order print 
        i have to go with four things
        int row start 0
        int row endr-1
        int col start 0
        int col end c-1 

        now till when we have to continue our algorithm 
        till our start row is less than that of end row 
        and also our start col is less than our end col.
        we will acompllished this using while loop
        */

    int row_start=0, row_end=n-1, col_start=0, col_end=m-1;  //initialization

        while (row_start>=row_end && col_start>=col_end)
        {
            //for start row 
            //form col start to col end print all elements and then jump to next row

            for( int col=col_start; col<=col_end; col++)
            {
                cout<< a[row_start][col]<<" ";
            }
            row_start++;


            //for coloumn end
            for(int row=row_start; row<=row_end; row++)
            {
                cout<< a[row][col_end]<< " ";
            }
            col_end--;


            //for last row;
            for(int col=col_end; col>=col_start; col--)
            {
                cout<<a[row_end][col]<<" ";
            }
            row_end--;


            //for coloumn start 
            for(int row=row_end; row>=row_start; row--)
            {
                cout<< a[row][col_start]<<" ";
            }
            col_start++;
        }


 
                                                            

        return 0;
    }