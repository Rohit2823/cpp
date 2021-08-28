//switch statements are substitute to long if else statement
//switch(n){
//     variable n compared to multiple cases one by one and wherever he will get then the corresponding to that value will get exicuted
     
// }

// que====== suppose there is one robot and there are 5 buttons on the button which are labeled as a b c d e after pressing every button he says a says hello b says bhature c says catlover d says dogiebaba e says elephant loves you 



#include<iostream>
using namespace std;

int main(){
    

    char button;
    cout<<"enter a button"<<endl;
    cin>>button;

    if(button=='a')
    {
        cout<<"this is a "<<endl;
    }else if (button='b')
    {
        cout<<"this is b"<<endl;
    }else if(button=='c')
    {
        cout<<"this is c"<<endl;
    }else if (button=='d')
    {
        cout<<"this is d"<<endl;
    }else
    {
        cout<<"i dont know sorry"<<endl;
    }
    
    

     return 0;
}