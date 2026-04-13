#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int n;
    // cin>>n;
    // if(n%2==0){
    //     int x=2;
    // }
    // cout<<x<<endl; // compilation error because x is declared inside the if block and cannot be accessed outside of it
    // int i=1;
    // while(i<=10){
    //     cout<<i<<" "<<endl;
    //     i++;
    int t;
    cin>>t;
    for (int test = 0; test < t; ++test)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= n; ++i)
        { // outer loop to print the number of rows
            for (int j = 1; j <= i; ++j)
            { // nested loop to print the pattern
                cout << "*";
            }
            cout << endl;
        }
    }
    return 0;
}
    // }