#include<bits/stdc++.h>
using namespace std;

void inputArray(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void displayArray(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[5];
    cout<<"enter the 5 numbers:\n";
    inputArray(arr,5);
    displayArray(arr,5);
    return 0;
}