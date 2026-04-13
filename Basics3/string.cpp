#include<bits/stdc++.h>
using namespace std;
int main(){
    // char a='x'; // only store single character
    // string str="Hello World"; // store sequence of characters
    // string str2="Sakshi";
    // // string result=str+" "+str2; // concatenation of two strings
    // // cout<<result<<endl;
    // // cout<<a<<endl;
    // // cout<<str<<endl;
    // if(str==str2){
    //     cout<<"Strings are equal"<<endl;
    // }
    // else{
    //     cout<<"Strings are not equal "<<endl;
    // }

    // }
    string str="Hello";
    cout<<str[0]<<endl; // access first character
    str[0]='h'; // modify first character you cannot write="h" because string is not a character
    cout<<str<<endl; // print modified string
    cout<<str.size()<<endl; // size of string
// for iterate through the string 
    for(int i=0;i<str.size();i++){
        cout<<str[i]<<endl;
    }
}



