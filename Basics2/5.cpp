//Infinite loop 
#include<bits/stdc++.h>
using namespace std;
int main(){
    // while(1){
    //     cout<<"Hello World"<<endl; // this will print "Hello World" infinitely because the condition of the while loop is always true (1 is considered as true in C++)

    // }
    // for(;;){
    //     cout<<"Hello World"<<endl; // this will also print "Hello World" infinitely because the for loop has no initialization, condition and increment/decrement statement, so it will run indefinitely
    // }
    // for(int i=1; i>0; i++){
    //     cout<<"Hello World"<<endl; // this will also print "Hello World" infinitely because the condition of the for loop is always true (i>0 is true for all positive values of i)
    // }
    
//     for(int i=0;i<10;i++){
//         if(i==8){
//             if(true){
//                 if(true){
//                     break;
//                 }
//             }
//         }
//         cout<<i<<endl; // this will print the numbers from 0 to 7 and then break out of the loop when i becomes 8
//     }
// }
for(int i=0;i<10;i++){
    if(i==8){
        if(true){
            if(true){
                continue; // this will skip the current iteration when i becomes 8 and continue with the next iteration, so it will print the numbers from 0 to 9 except 8
            }
        }
    }
    cout<<i<<endl;
}
}