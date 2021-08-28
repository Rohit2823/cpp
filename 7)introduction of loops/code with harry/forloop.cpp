// there are three types of loop in c++
// 1. for loop
// 2.while loop
// 3.do while loop

// when we use loops
// ans= imagine you got a homework that you have to write 1 to 100 numbers in c++ so what you will do 
// you have one option that you will print all those one by one or if you are smart then you will use loops in c++. 

// initialization happens only one time only when loop strated 
// after that next step is checking condition
// if true then  proceed or if false then exit 
// if it proceeds then it will run your command then it will go to updation



// can we print infinite loop 
// yes 
// make condition true for always 

// for loop in c++

#include<iostream>
using namespace std;

int main(){


    //syntax for for loop 
    //for(initialisation; condition; updation)
    //{
    //    loop body(c++code);
    //}
// initialization runs code one time then it check conditon is it true yes it is true then it will print if it prints or runs the code then it will go in updation condition 
// if you write i++ in code then it will take one step more 

    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout<<i<<endl;
        
    }
    

    return 0;
}