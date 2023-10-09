#include <iostream>
using namespace std ; 



// factorial
// int facto(int n ) {
//     int facto = 1 ; 
//     int i = 0 ; 
//     for(i = 0 ; i < n ; i++) {
//         int op = n-i ;
//         facto = facto*op ; 

//     }
//     cout<<facto;
// }

// array revise
// getting the length of the array 

// int lenofarr(int arr[] ,int size) {
//     int len = 0 ; 

//     for(int i = 0 ; i < size ; ){
         
//         i = i + 4 ;
//         len = len + 1 ; 
//     }
//     cout<<len;
// }

// array reversing 

// int RevArr(int arr[] , int size) {
//     int temp = 0 ; 
//     for(int i = 0 ; i < size / 2 ; i++) {
//         temp = arr[i] ;
//         arr[i] = arr[size - 1 - i] ; 
//         arr[size - 1 - i] = temp ;

//     }
//     for(int i = 0 ; i < size ; i++) {
//         cout<<arr[i]<<" ";
//     }

    
// }



int reverses(int arr[] , int size ) {
    for(int i = 0 ; i < size /2 ; i++) {
        swap(arr[i] , arr[size - 1 - i]);
        
    }
}

int printarr(int arr[] , int size ) {
    for(int i = 0 ; i < size ; i++) {
        cout<<arr[i]<<" ";
    }
}








int main() {
    // facto(6);
    int arr[8] = {10 , 20 , 30 , 40 , 50 , 60 , 70 , 80} ;
    // int csize = sizeof(arr);
    // cout<<csize;
    // for(int i = 0 ; i < 8 ; i++) {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;
    
    // // lenofarr(arr , csize) ; 
    // RevArr(arr , 8) ; 
    reverses(arr , 8);
    cout<<endl;
    printarr(arr , 8);

    
}


