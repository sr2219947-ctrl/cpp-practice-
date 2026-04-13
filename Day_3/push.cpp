#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        s.push_back('a'); //time complexity O(n) because push_back function takes O(1) time to add a character at the end of the string
    }
    // for(int i=0;i<n;i++){
    //     s=s+'a';// s = s ki copy banayega aur usme a add karega isliye time complexity O(n^2) hoti hai
    // }
}