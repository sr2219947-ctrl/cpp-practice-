// size limits of the array
#include <bits/stdc++.h>
using namespace std;
const int n = 1e7;  
int a[n]; // global array of size 10^7
int main(){
    // {
    //     int n=1e5; // 10^5
    //     int a[n];
    //     a[n-1]=7;
    //     cout<<a[n-1];
    // } // when 1e7 is used then it will give segmentation fault because of memory limit exceeded
    // local arrays can have size upto 10^5

    // global arrays can have size upto 10^7  --> because global arrays are stored in the heap memory and local arrays are stored in the stack memory and stack memory is limited to 1 MB and heap memory is unlimited
    a[n - 1] = 7;
    cout << a[n - 1];
}