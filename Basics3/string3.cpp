#include<bits/stdc++.h>
using namespace std;
int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         string s; //
//         getline(cin,s);
//         cout<<s<<endl;
//     }
// }
//for example t=3 but at start it prints the empty linr because after reading t, the newline character is still in the input buffer. to fix this issue,
// int t;
// cin>>t;
// t++;
// while(t--){
//     string s;
//     getline(cin,s);
//     cout<<s<<endl;
// }
// }
//see how first we take input three and then show all output we will use vector to store the strings and then print them after taking all input
int t;
cin>>t;
// t++; 
cin.ignore(); // ignore the newline character after reading t   
vector<string>v;
while(t--){
    string s;
    getline(cin,s);
    v.push_back(s); // store the input string in the vector 
}
// for(int i=0;i<v.size();i++) {
    // cout<<v[i]<<endl; // print the stored strings
    for(string x:v){
        cout<<x<<endl; // print the stored strings using range-based for loop
    }
}


