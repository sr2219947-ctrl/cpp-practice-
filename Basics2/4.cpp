#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    { // how while(t--) works ? it will run the loop t times and after each iteration it will decrease the value of t by 1 until t becomes 0
        int n;
        cin >> n;
        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= i; j++)
            {
                cout<< "*";
            }
            cout<<endl;
        }
        cout<<endl;
    }
    return 0;
}