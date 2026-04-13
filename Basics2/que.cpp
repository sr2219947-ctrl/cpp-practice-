/* 1 
   2
   88
   42
   99 
   we have to print till 42 is not reached then stops */
   #include<bits/stdc++.h>
   using namespace std;
   int main(){
   vector<int>v; // this will create an empty vector of integers to store the input values
    while(true){
        int x;
        cin>>x;
        if(x==42){
            break; // this will break the loop when x becomes 42 and stop taking input
        }
        v.push_back(x);// this will print the value of x until x becomes 42
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl; // this will print the values stored in the vector v
    }
   }