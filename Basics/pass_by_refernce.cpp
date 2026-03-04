#include<bits/stdc++.h>
using namespace std;
// void doSomething(string &s){
//     s[0]='t';
//     cout<<s<<endl;
// }
// int main(){
//     string s="sakshi";
//     doSomething(s);// changed 
//     cout <<s<<endl;// original also changed 
//     return 0;
// }
// void dosome(int &num){
//     cout<<num<<endl;
//     num+=5;
//    cout<<num<<endl;
//    num+=5;
//    cout<<num<<endl;
// }
// int main(){
//     int num=10;
//     dosome(num);// 10 , 15 ,20 ,
//     cout<<num<<endl; // 20 now  original also chnaged and 20 prints 
//     return 0;
// }
// in array there is always pass by reference 
void dosome(int arr[],int n){
    arr[0]+=100;
    cout<<"value inside fn :"<<arr[0]<<endl;
}
int main(){
    int n=5;
    int arr[n];
    for(int i=0;i<n;i=i++){
        cin>>arr[i];
    }
    dosome(arr,n);
    cout<<"value inside main : "<< arr[0]<<endl;
    return 0;
}