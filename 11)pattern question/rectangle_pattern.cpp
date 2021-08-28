// #include<iostream>
// using namespace std;

// int main(){

//     for (int i = 1; i <=5; i++)
//     {
//         cout<<"****"<<endl;
//     }
    

//     return 0;
// }


// alternate method 




#include<iostream>
using namespace std;

int main(){

    int row , col;
    cout<<"enter rows you want to print";
    cin>>row;
    cout<<"enter columns you want to print";
    cin>>col;

    for (int i = 1; i <=row; i++)
    {
        for (int j = 1; j <=col; j++)
        {
         cout<<"*";
        }
        cout<<endl;
    }
    


    return 0;
}