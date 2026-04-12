#include<bits/stdc++.h>
using namespace std;
int main(){
    int a=2;
    int b=3;
    // cout<<(a==b)<<endl;
   //&& is used to check if both the conditions are true || is used to check if any one of the conditions is true
    if(a==2 && b==3){
        cout<<"Both the conditions are true"<<endl;
    }
    if(a==2 || b==4){
        cout<<"At least one of the conditions is true"<<endl;
    }
     if(a==1 || b==4){
        cout<<"At least one of the conditions is true ? "<<endl;
    }
     if(a==1 && b==4){
        cout<<"Both the conditions are true ? "<<endl;
    }
     return 0;
}