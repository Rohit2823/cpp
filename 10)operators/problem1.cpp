#include<iostream>
using namespace std;

int main(){
  int i;
    i=1;
        //1   //3
    i = i++ + ++i;

    cout<<i<<endl;


    return 0;
}
//pre incremental means value will be reserved at first opration and then it will be incremented 
// talking about our problem
// we decided that value of i is 1
// then we used post incremental which will not increase its value at its first opration and then we add pre incremental it will instantly increase value of a function  

