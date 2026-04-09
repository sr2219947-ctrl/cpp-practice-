#include <bits/stdc++.h>
using namespace std;
int main()
{
    // cout<<'c'+1; //precedence 1.)double 2.)float 3.)long double 4.)long long int 5.)long int 6.)int 7.)unsigned long long int 8.)unsigned long int 9.)unsigned int 10.)char
    //   int a=3/2.0; //1
    // double a=3/2.0;//1.5
    double a = 3 / 2;  // 1.0 because 3 and 2 are both int so it will do integer division and then typecast to double
    cout << a << endl; // 1
    cout<< 7/2*3<<endl; //left to right associativity so 7/2=3 and then 3*3=9
    cout<<7*3/2; //left to right associativity so 7*3=21 and then 21/2=10
}
