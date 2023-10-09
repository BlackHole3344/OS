#include <iostream> 
#include <vector>
using namespace std ;


// Algo 1 






// Bruteforce approach
int shiftzeros1(int arr[] , int size ) {
    vector<int> temp;
    for(int i  = 0 ; i < size ; i++) {
        if(arr[i] != 0) {
            temp.push_back(arr[i]);
        }
    }
    int nz = temp.size();
    for(int i = 0 ; i < nz ; i++){
        arr[i] = temp[i];

    }
    for(int i = nz ; i < size ; i++){
        arr[i] = 0 ;
    }
        
} 


// Optimal solution 

int shiftzeros2(int arr[] , int size ){
    int j = -1 ; 
    for(int i = 0 ; i < size ; i++){
        if (arr[i] == 0) {
            j = i ;
            break;
        }

    }
    
    for(int i = j+1 ; i < size ; i++){
        if( arr[i] != 0 ){
            swap(arr[i] , arr[j]);
            j++;
        }
        
    }
}



// }
int printarr(int arr[] , int size ) {
    for(int i = 0 ; i < size ; i++){
        cout<<arr[i]<<" ";
    }
}















int main () {
    int arr[] = { 1 , 4 ,5  , 6 , 0 , 7 , 34 , 0 } ;
    printarr(arr , 8 );
    cout<<endl;
    shiftzeros2(arr , 8);
    printarr(arr , 8 );
    
    

}    