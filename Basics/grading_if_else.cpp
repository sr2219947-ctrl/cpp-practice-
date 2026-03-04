#include<bits/stdc++.h>
using namespace std;
void studentmarks(int marks){
    if(marks>=90)
        cout<<"Grade :A";
        else if(marks>=70)
        cout<<"GRADe :B";
        else if(marks>=60)
        cout<<"Grade:c";
        else
        cout<<"Grade: f";
    }
    int main(){
        int marks;
        cout<<"enter marks :";
        cin>>marks;
         studentmarks(marks);
        return 0;
        }
