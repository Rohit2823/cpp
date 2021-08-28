// function are to use to avoid repeatative code

// syntax of function
// ||
// returnType functionName (parameter1, parameter2, .......)

#include <iostream>
using namespace std;

void print(int num)
{
    cout<<num<<endl;
    return;

}
 int add(int num1, int num2)
    {
         int sum= num1 + num2;
         return sum;
    }

int main(){

    int a,b;
    cout<<"enter two numbers ";
    cin>>a>>b;
    cout<<add(a,b)<<endl;

  return 0;
}