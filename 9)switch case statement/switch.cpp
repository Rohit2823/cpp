#include<iostream>
using namespace std;

//here we added break to get out of code after it is done otherwise it will exicuted other cases which are after that



int main(){
    char button;
    cout<<"enter a character"<<endl;
    cin>>button;

    switch (button)
    {
    case 'a' :
    cout<<"this is a"<<endl;
        break;
    case 'b':
    cout<<"this is b"<<endl;
        break;
    case 'c':
    cout<<"this is c "<<endl;
        break;
    case 'd':
    cout<<"this is d"<<endl;
        break;
    case 'e':
    cout<<"this is e  "<<endl;
        break;
    
    default:
    cout<<"kuch pata ho aisa bol"<<endl;
        break;
    }



    return 0;
}