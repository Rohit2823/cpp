/*
character array                         string

*need to know size beforehand            *no need to know size beforehand
*larger size required for operations     *performing operations like concatenation and append easier
*no terminating extra character          *terminated with a special character '\0'


we can change or modify our size  


if we want to use string we have to add one other header file 
#include<string>
*/

#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){

//declare a string
    string str;
    cout<<"enter a string:\n";
    cin>>str;   //input a string
    cout<<str<<endl;  //output a string

//2) declare a string of of size 5 of particular 
    string str2(5,'n');
    cout<< str2 <<endl;

//3) declare a value of string
    string str3 = "mayurvivobook";    
    cout<< str3 << endl;
    
//4) input a string with spaces
    string str4;
    getline(cin,str4); //if you use cin and not getline then it will just output 1st word of your sentence.
    cout<< str4 << endl;


//append of two strings

    string str;

    string s1="fam";
    string s2="ily";

    //1) s1 mai s2
    s1.append(s2);
    //instead of using append you can easily use 
    // s1= s1+s2;
    cout<< s1 << endl;

    //2)if you dont want to append them but also you want to see them together 
    cout<< s1+s2 <<endl;

    //asccesing character of a string
    cout<< s1[2] << endl;

    //clear
    string abc = "my name is mayur i am good boy";
    abc.clear();
    cout<< abc<< endl;

    //comparing two string
    string s1="abc";
    string s2="abc"; 

    if(s1.compare(s2)==0)
    
    cout<< "strings are equal";
    else
    cout<< "strings are not equal"<< endl;
 
    //check if string is empty or not
    string code = "just make it empty";
    code.clear();

       if(code.empty())
       cout<< "string is empty"<<endl; 

    //erase
    string big = " itissobig"; 
            
    big.erase(3,3); // (argument from where we have to strart erase,how much character you want to delete)
    cout<< big << endl;

    //finding things in string
    string good = "itissobig";
    cout<< good.find("itis") <<endl;
    

    //insert new string in string
    string bad = "itissobig";
    bad.insert(4, "not");
    cout<< bad << endl;

    //length of string
    string length = "mayur";
    cout<< length.size()<< endl;

    //iterating string
    string loop = "mayur";
    for(int i=0; i<loop.length(); i++)
    {cout<< loop[i] << " " ;}
    cout<<endl;

    //want substring of any string  
    string want = "ItIsNotSoBig";
    string want2 = want.substr(4,3);
    cout<< want2 << endl;


    // numeric string to integer
    string num = "786";
    int x = stoi(num);
    cout<< x+1 << endl;
    
//difference between adding to string and adding to int in int value if you add then it will do arithmetic operations and in string if you add then it add that number next to your string it will not do any kind of arithmetic operation 

    // integer to string
    int x = 23;
    cout<< to_string(x)+"2" << endl;

    //sorting in sort
    string s1 = "jihgfedcba";
    sort(s1.begin(), s1.end());

    cout<< s1 << endl;

return 0;
}