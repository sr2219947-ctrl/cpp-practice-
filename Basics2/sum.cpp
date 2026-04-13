#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
    int digit_sum=0;
    while(n>0){
     int last_digit=n%10; // this will give the last digit of the number n
     digit_sum=digit_sum+last_digit;
     n=n/10; // this will remove the last digit from the number n
    }
    cout<<digit_sum<<endl;
}
}