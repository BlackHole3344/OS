#include <iostream>
using namespace std;

int main() {
    // for(int i = 0 ; i <= 10 ; i++) {
    //     if(i%2 != 0 | i == 0)
    //         continue;
    //     cout<<i<<endl;    
    // }

    // local variables and global variables
    int h = 0 ;
    for(int i = 0 ; i <=5 ; i++) {
        cout<<"hello"<<endl;
        int h = h + i ;
    }

    cout<<h;
    // output is error because h is accesible within the loop only and 
    // example of local variable


    

}