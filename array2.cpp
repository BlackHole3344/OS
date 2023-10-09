#include <iostream>
using namespace std ; 

// int findU(int arr[] , int size) {
//     int x = 0 ; 
//     int unElement = 0 ;
//     for (int i = 0 ; i < size ; i++) {

//         x = x ^ arr[i] ; 

//     }
//     cout<<unElement;
// }

// print the pairs

// int printPair1(int arr[] , int size) {
//     for(int i = 0 ; i < size ; i++) {
        
//         for(int j = 0 ; j < size ; j++) {   
//             cout<<arr[i]<<","<<arr[j];
//             cout<<endl;
//         }
//         cout<<endl;
//     }
// }

// int printPair2(int arr[] , int size) {
//     for(int i = 0 ; i < size ; i++) {
        
//         for(int j = size-1 ; j >= 0 ; j--) {
//             cout<<arr[j]<<","<<arr[i];
//             cout<<endl;
//         }
//         cout<<endl;
//     }
// }

// print the triplet 
// int printtriplet(int arr[] , int size){
//     for(int i = 0 ; i < size-1 ; i++) {
//         for(int j = 0 ; j < size-1 ; j++) {
//             for(int k = 0 ; k<size-1 ; k++) {
//                 cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
//             }

//         }
//         cout<<endl;
//     }
// }

// replacing the elements of two arrays
// int arrayReplace(int arr[] , int arr2[] , int size ){
//     for(int i = 0 ; i < size ; i++) {
//         int temp = arr[i] ; 
//         arr[i] = arr2[i];
//         arr2[i] = temp;
//     }
//     for(int i = 0 ; i < size ; i++) {
//         cout<<arr[i]<<endl;
//         cout<<arr2[i]<<endl;
        
        
//         // cout<<endl;
//         // cout<<arr2[i];
//     }
// }

// right shifting the arrray 



int main() {

    int arr[] = { 1 , 2 , 3, 4};
    int size = 4; 
    int arr2[] = {4 , 5 , 6 ,7 };
    // printPair1(arr , size) ; 
    // printPair2(arr , size) ; 
    // printtriplet(arr , size); 
    // arrayReplace(arr , arr2 , size) ;
    arrSh(arr , size) ;

    




}