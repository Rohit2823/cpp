// /*
// stack
// when a function is called there stack frame are added to our memeory stack 

// local variables have scope there in there function only

// memory stack is of fixed size 

// it is not possible to change our variables if they are in memory stack so 

// here comes the idea of heap or dynamic memory allocation
// we can manually allocate memory or dealocate 
// heap size is not fixed

// */


// #include<iostream>
// using namespace std;

// int main(){
//     int a = 10; //stored in stack
//     int *p = new int(); // allocate memory in heap
//     *p= 10; // p will be store in stack and it will point to address to int 
    
//     // we can access it from anywhere till we have its address
    
//     // if we are allocating manually then we have to deallocate manualy also so we use ==>

//     delete(p); // dealocate memory
//     // memory will get deleted so now pointer points to dangling pointer 

//     //there should not be dangling pointer

//     p = new int[4];

//     delete[]p; delete //array whatever we stored in that

//     p = NULL // will delete pointer

// // in heap we have to allocating memory and deallocating 

// // memory leak should be avoided at all time 



//     return 0;
// }