#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[7];
    int sum=0;
    cout<<"Enter the 5 numbers"<<endl;
    for(int i=0;i<5;i++){
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<"Sum="<<sum;
    return 0;
}