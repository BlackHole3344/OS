#include <iostream>
#include <bits/stdc++.h>
using namespace std ; 



// problem 1 
// int sum(int arr[] , int size ,  int target ) {
//     int index ;
//     int j = 0 ; 
//     for(index = 1 ; index < size ; index++) {
//         if (arr[index] + arr[j] != 9) {
//             j++;

//         }
//         if(arr[index]+arr[j] == 9){
//             int arr2[] = {index , j};
//             cout<<arr2[index]<<" "<<arr2[j];
//             return arr2[0] , arr2[1];
//         }


//     }
// }
// problem to rotating a array 
int printRoAR(int arr[] , int size) {
    for(int i = 0 ; i < size ; i++) {
        cout<<arr[i]<<" ";
    }
}

// int RoAR(int arr[] , int size , int k) {
//     int j = size-2; 
//     // int point = 0 ;
//     for(int i = size-1 ; i > 0 ; i--) {
//         swap(arr[i] , arr[j] );
//         j--;
//     }
    
//     int u = size - 2;
//     for(int i = size - 1 ; i > 1 ; i--){
//         swap(arr[i] , arr[u]);
//         u--;
//     }
//     int z = size - 2 ;
//     for(int i = size - 1 ; i > 2 ; i--){
//         swap(arr[i] , arr[u] );
//         z--;
        
//     }


// }
int RoAr(int arr[] , int size , int k) {
    int i = size - k;
    int j = i - 1 ; 
    for(i ; i > 0 ; i--){
        swap(arr[i] , arr[j]);
        j--;

        
    }



    
    
    // for(i;i>1;i--){
    //     swap(arr[i],arr[j]);
    //     j--;
    // }





}

// left rotating the array 
int LRoar(int arr[] , int size ){
    int n = size ; 
    for(int i = 1 ; i < n ; i++){
        swap(arr[i] , arr[i-1]);
    }

}
int LRoar2(int arr[] , int size ){
    // int n = size ; 
    int temp = arr[0];
    for(int i = 0 ; i < size - 1 ; i++){
        arr[i] = arr[i+1];
    }
    arr[size-1] = temp;
 
}

int lRoar3(int arr[] , int size){
    int temp = arr[0];
    for(int i = 1 ; i < size ; i++){
        arr[i-1] = arr[i];
    }
    arr[size-1] = temp;
}

int leftRotate(int arr[], int size) {
    int temp = arr[0];
    for (int i = 0; i < size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    arr[size - 1] = temp;
}

// rotating the array by d places 
// int DRoar(int arr[] , int size , int d ) {
//     int temp1 = arr[0];
//     int temp2 = arr[1];
//     for(int i = d ; i < size ; i++){
//         arr[i-d] = arr[i];
//     } 
//     arr[size - 1 ] = temp2 ; 
//     arr[size - 2 ] = temp1 ; 
// }

int RotateBYd(int arr[] , int size , int d ) {
    int temp[d] = {} ; 
    for(int i = 0 ; i < d ; i++){
        temp[i] = arr[i];
    }  
    for(int i = d ; i < size ; i++) {
        arr[i-d] = arr[i];
    }
    for(int i = size - d ; i < size ; i++ ){
        arr[i] = temp[i - (size - d)];
    }
}

// optimal way 

int RotateBYd2(int arr[] , int size , int d ) {
    reverse(arr , arr+d);
    reverse(arr+d , arr+size) ; 
    reverse(arr , arr+size);
   

}
 

int main() {
    int arr[] = {1 , 2 , 3 , 4 , 5 , 6 , 7} ;

    

    // int target = 9 ;
    // printRoAR(arr , 7);
    // cout<<endl;
    // RoAr(arr , 7 , 1);
    // cout<<endl;
    // printRoAR(arr , 7);
    // cout<<endl;
    // // LRoar(arr , 7);
    // // cout<<endl;
    // // printRoAR(arr , 7);
    // cout<<endl;
    // LRoar2(arr,7);
    // cout<<endl;
    // // leftRotate(arr , 7);
    // cout<<endl;
    // printRoAR(arr , 7);

    // lRoar3(arr,7);
    // cout<<endl;
    // printRoAR(arr , 7);

    // rotating the array by d places 
    // printRoAR(arr , 7);
    // cout<<endl;
    // DRoar(arr , 7 , 2) ;
    // cout<<endl;
    // printRoAR(arr , 7);
    // cout<<endl;
    // RotateBYd(arr, 7 , 4 ) ;
    // cout<<endl;
    // printRoAR(arr , 7 );
    // cout<<endl;
    RotateBYd2(arr , 7 , 3 );
    printRoAR(arr , 7 ) ;


    // int ty[4] = {} ;
    // cout<<sizeof(ty);




    

}    
