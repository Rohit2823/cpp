/*
pointers => pointer that store address of other variables

int a = integer
int *p = pointer to integer 
char c = character 
char *po = pointer to character 
double d = double 
double *pl = pointer to double 
p = &a; a = 8;
(*p= value of a )
*/

 #include<iostream>
 using namespace std;

 int main(){

     int a;
     int *p;
     a = 10;
     p = &a;
    cout<< "value of a before " << a << endl;
     
     // we can also modify value of variable on which pointer points to 
    *p = 12;

    cout<< "value after modification" << *p << endl; 
    // what if we declare another variable and points p to it 
    int b = 20;
    *p = b;

    // when we point another variable using same pointer unless we use &b statement it will not change address it will point towards the same variable but it will modify value of your variable 1 with the variable 2 



     cout<< "value later " << a << endl;
     cout<<"address of a" << p <<endl;  
     cout<<"address of a" << &a <<endl;   
     cout<<"address of p" << &p <<endl;   
     cout<< p << endl;
     cout<< *p << endl;

     return 0;
 }
 