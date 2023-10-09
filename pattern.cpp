#include <iostream>
using namespace std;
#include <cmath>
// patern 1
int main() {     
    int i ;
    int j ; 
    // for(i = 0 ; i < 4 ; i++) {
    //     for(j = 0 ; j <= i ; j++) {
    //         cout <<"*";
    //     }
    //     cout << endl;
    // }
    // // patern 2 
// 1
// 12
// 123
// 1234
// 12345
    // for(i = 1 ; i < 5 ; i++) {
    //     for(j = 1 ; j < i+1 ; j ++) {
    //         cout<<j;
    //     }
    //     cout << endl;
    // }
    // pattern 
   // 1
   // 22
   // 333
   // 4444
   // 55555
   // 666666
   // 7777777
    // for(i = 1 ; i <= 7 ; i++) {
    //     for(j = 1 ; j<i+1 ; j++) {
    //         cout << i;
    //     }
    //     cout << endl;
    // }


    // pattern 4 
    // 1234
    // 123
    // 12
    // 1

    // for(i = 1  ; i <= 5 ; i ++ ) {
    //     for(j = 1 ; j <= 5 - i ; j++) {
    //         cout << j ;
    //     }
    //     cout << endl;
    // }
    // reactangle
    // for(int i = 0 ; i < 4 ; i++) {
    //     for(int j = 0 ; j < 4 ; j ++){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
     
    
    // traingle
    // for(int i = 0 ; i <5 ; i++) {
    //     for(int j = 0 ;j < i+1 ; j++) {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // other way 
    // for (int i = 0 ; i < 5 ; i ++) {
    //     for(int j = 0 ; j <= i ; j++   ){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // reverse traingle
    // for(int i = 0 ; i < 6 ; i++) {
    //     for(int j = 0 ; j < 6 - i ; j++) {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }

    // pyramid 
    // for(int i = 0 ; i < 5 ; i++) {
    //     for (int j = 0 ; j < 5 - i - 1 ; j++){
    //         cout<<" ";
    //     }
    //     for (int k = 0 ; k < 2*i + 1 ; k++ ){
    //         cout<<"*";
    //     }
    //     for (int y = 0 ; y < 5 - i - 1 ; y++){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // reverse pyramid
    //  for(int i = 5 ; i >=0 ; i--){
    //     for(int j = 0 ; j < 5 - i  ; j++){
    //         cout<<" ";
    //     }
    //     for(int k = 0 ; k < 2*i - 1 ; k++) {
    //         cout<<"*";
    //     }
    //     for(int y = 0 ; y < 5 - i  ; y++){
    //         cout<<" ";
    //     }
    //     cout<<endl;0 
    //  }

    //  other way 
        // for (int i =  0 ; i < 5 ; i++) {
        //     for(int j = 0 ; j < i + 1; j ++){
        //         cout<<" ";
        //     }
        //     for (int k = 0 ; k < 2*5 - (2*i+1) ; k++ ) {
        //         cout<<"*";
        //     }
        //     for (int y = 0 ; y < i + 1 ; y++){
        //         cout<<" ";
        //     }
        //     cout<<endl;
        // }
    // hollow pyramid
        //   for(int i = 0 ; i < 5 ;  i++){
            
        //   }
        //    for(int i = 0  ; i < 5 ; i++) {
        //     for (int j = 0 ; j<5-1-i ; j ++) {
        //         cout<<" ";
        //     }
        //     for(int k = 0 ; k < 2*i+1 ; k++){
        //         cout<<"*";
        //     }
        //     for(int l = 0 ; l < 5-i-1 ; l++){
        //         cout<<" ";
        //     }
        //     cout<<endl;
        //    }
            //   for(int i = 0 ; i < 5 ; i++){
            //     for(int j = 0 ; j < i ; j ++){
            //         cout<<" ";
            //     }
            //     for(int k = 0 ; k <(2*5) - (2*i + 1 ) ; k++ ){
            //         cout<<"*";
            //     }
            //     for(int l = 0 ; l < i ; l++){
            //         cout<<" ";
            //     }
            //     cout<<endl;
            //   }

            //   for(int i = 0 ; i < 5 ; i++) {
            //     for(int j = 0 ; j < 5-i-1 ; j++) {
            //         cout<<" ";
            //     }
            //     for(int k = 0 ; k < 1 ; k++) {
            //         cout<<"*";
            //     }
            //     for(int s = 0 ; s < (2*i + 1) - (i - 1) ; s++ ){
            //         cout<<" ";
            //     }
            //     for(int l = 0 ; l < 1 ; l++) {
            //         cout<<"*";
            //     }
            //     for(int m = 0 ; m < 5-i-1 ; m++) {
            //         cout<<" ";
            //     }
            //     cout<<endl;
            //   } 
//                for(int i = 0 ; i < 5 ; i++) {
//     // Loop to print spaces before the first asterisk
//     for(int j = 0 ; j < 5 - i - 1 ; j++) {
//         cout << " ";
//     }
//     // Print the first asterisk
//     for(int k = 0 ; k < 1 ; k++) {
//         cout << "*";
//     }
//     // Loop to print spaces in the middle
//     for(int s = 0 ; s < (2 * i + 1) - (i - 1) ; s++ ){
//         cout << " ";
//     }
//     // Print the second asterisk
//     for(int l = 0 ; l < 1 ; l++) {
//         cout << "*";
//     }
//     // Loop to print spaces after the second asterisk
//     for(int m = 0 ; m < 5 - i - 1 ; m++) {
//         cout << " ";
//     }
//     cout << endl;

// }
      int deciamlToBinary(int n ){
        int i = 0 ; 
        int binary = 0 ; 
        while(n>0) {
            int bit = n % 2 ; 
            binary = bit*pow(10 , i++) + binary ;
            n = n / 2 ;
        }
        return binary ; 



     }

     int y = 76 ; 
     int ff = deciamlToBinary(y);
     cout<<ff;







    


}



//other way 

// int main() {
//     int i, j;
//     for(i = 0; i < 4; i++) {
//         for(j = 0; j < 4 - i; j++ ) {
//             cout << "*";
//         }
//         cout << endl;
//     }
//     return 0; // Don't forget to return 0 at the end of the main function.
// }



