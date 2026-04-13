#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> a(n);  // dynamic array

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }

    cout << sum;
}