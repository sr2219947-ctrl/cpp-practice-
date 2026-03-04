//pass by value  //original value does not change 
#include<bits/stdc++.h>
using namespace std;
// void doSomething(int num){
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
//     num+=5;
//     cout<<num<<endl;
// }
// int main(){
//     int num=10;
//     doSomething(num);
//     cout<<num<<endl; //value still remians the same 
//     return 0;
// }
// in case of string 
void doSomenthing(string s){
    s[0]='t';
    cout<<s<<endl;
}
int main(){
    string s="Raj";
    doSomenthing(s); //chnaged 
    cout<<s<<endl; // original still remains the same 
    return 0;
}
