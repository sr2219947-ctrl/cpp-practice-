#include<bits/stdc++.h>
using namespace std;
int main(){
    // int a=100000;
    // int b=100000;
    // int c=a*b;
    // cout<<c<<endl; //overflow because the result is greater than the maximum value that can be stored in an int
    // int mx=INT_MAX; //maximum value that can be stored in an int
    // cout<<mx+1<<endl; //overflow because the result is greater than the maximum value that can be stored in an int

    // long int a=100000;
    // long int b=100000; 
    // int a=100000;
    // int b=100000;
    // long long  int c= a*1ll*b; //100000000000 because we are typecasting a to long long int before multiplying with b so the result will be stored in long long int which can store larger values than int
    // cout<<c<<endl; // no overflow because long int can store larger values

    double a=100000;
    double b=100000;
    double c=a*b; //100000000000 because double can store larger values than int
    c=1e24; //1e24 is 1 followed by 24 zeros which is 1000000000000000000000000
    cout<<fixed<<c<<endl; //double can store larger values than int but it has limited precision so it will round off the value to 1e+24 which is 1 followed by 24 zeros
}