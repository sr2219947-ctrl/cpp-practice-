#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string str_rev;
    for(int i=str.size()-1;i>=0;i--){
//         str_rev=str_rev+str[i]; // concatenate characters in reverse order how --> str_rev=str_rev+str[i] because str_rev is a string and str[i] is a character so we can concatenate them to form the reversed string
//     }
//     cout<<str_rev<<endl; // print the reversed string
// }
str_rev.push_back(str[i]); // push_back function is used to add a character at the end of the string
    }
    cout<<str_rev<<endl; // print the reversed string
}
