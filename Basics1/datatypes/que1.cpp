// Constraints :
/*1<=l <=10^9
  1<=b<=10^9
  Input Format:
  2 space seperated integerd l and b
    Output Format:
    Single number which is are of rectangle
    Sample Input 0:
    3 4
    Sample Output 0:
    12
  */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    // int l,b; //wrong answer because l and b are both int and their product can be greater than the maximum value that can be stored in an int which is 2^31-1=2147483647 so it will overflow and give a wrong answer

    //  long long int area=(long long int)l*b; //correct answer because we are typecasting l to long long int before multiplying with b so the result will be stored in long long int which can store larger values than int
    //  cout<<area<<endl;
    //  return 0;
    /*Another method*/
    int l, b;
    cin >> l >> b;
    cout << l * 1ll * b << endl; // correct answer because we are typecasting l to long long int before multiplying with b so the result will be stored in long long int which can store larger values than int
    return 0;
}