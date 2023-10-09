#include <iostream>
using namespace std;

int main() {

    // pattern 1
    // 1
    // 12
    // 1234
    // 12345
    int i ;
    int j ;
    int k ;
    int l ;

//     for(i = 0 ; i < 5 ; i++) {
//         for(j = 0 ; j < i + 1 ; j++) {
//             cout<<"*";
//         }
//         cout<<endl;
//     }

//     for(i = 1 ; i < 5 ; i++) {
//         for(j = 1 ; j < i+1 ; j++) {
//             cout<<j;

//         }
//         cout<<endl;
//     }

//     // pattern 3 
// //     1
// //     22
// //     333
// //     4444
// //     55555
//      for(i = 1 ; i <= 5 ; i++) {
//         for(j = 1 ; j < i+1 ; j++) {
//             cout<<i;
//         }
//         cout<<endl;
//      }
//     //  pattern 4 
// //     *    
// //    ***   
// //   *****  
// //  ******* 
// // *********

//      for(i = 0 ; i < 5 ; i++) {
//         for (j=0 ; j <  5 - i - 1 ; j ++) {
//             cout<<" ";
//         }

//         for ( k = 0 ; k < 2*i + 1 ; k++) {
//             cout<<"*";
//         }

//         for ( l = 0 ; l < 5 - i - 1 ; l++) {
//             cout<<" ";
//         }
//         cout<<endl;
    
        

//      }

//     //  pattern 5
// //  *********** 
// //   *********  
// //    *******   
// //     *****    
// //      ***     
// //       *  

//      for(i = 4 ; i >= 0 ; i--) {
//         for(j = 1 ; j <= 4 - i  ; j ++) {
//             cout<<" ";
//         }
//         for(k = 0; k <2*i + 1 ; k++) {
//             cout<<"*";

//         }
//         for(l = 0 ; l <= 4 - i ; l++){
//             cout<<" ";

//         }
//         cout<<endl;
//      }

//     //  other way 

    for (i = 0 ; i < 5 ; i++) {
        for(j = 0 ; j < i ; j++ ) {
            cout<<" ";

        }
        for(k = 0 ; k < 2*5 - (2*i + 1) ; k ++) {
            cout<<"*";
        }

        for(l = 0 ; l < i ; l++) {
            cout<<" ";
        }
        cout<<endl;
        

    // pattern 32
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *


    } 
    for(i = 0 ; i <  5 ; i++) {
        for(j = 0 ; j < i + 1 ; j ++ ){
            cout<<"*";
        }
        cout<<endl;
    }

    for(i = 0 ; i < 5 ; i++) {
        for(j = 0 ; j < 5 - i - 1 ; j++) {
            cout<<"*";

        }
        cout<<endl;

    }

    

    for(i = 0 ; i < 5 ; i++) {
        for(j = 0 ; j < 5 - i - 1 ; j++) {
            cout<<"*";

        }
        for(k = 0 ; k < 2*i + 1 ; k ++) {
            cout<<" ";

        }
        for(l = 0 ; l < 5 - i - 1 ; l ++ ){
            cout<<"*";

        }
        cout<<endl;

    }

    for(i = 0 ; i < 4 ; i++) {
        for(j = 1 ; j < i + 1 ; j++ ) {
            cout<<" ";

        }
        for(k = 0 ; k < 2*4 - j ; k++) {
            cout<<"*";

        }
        for(l = 1 ; l < i + 1 ; l++) {
            cout<<" ";
        }
        cout<<endl;
    }


}
