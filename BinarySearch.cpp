#include <iostream> 
using namespace std ; 



int binarySearch(int arr[] , int size , int target) {
    int s = 0 ; 
    int e = size - 1 ; 
    int mid = (s+e)/2 ; 
    while(s <= e) {
        if (arr[mid] == target) {
            cout<<"target founda at :"<<mid;;
            return mid;
        }
        else if (target > arr[mid]) {
            s = mid + 1 ; 
        }
        else if (target < arr[mid]) {
            e = mid - 1 ;
        }
        mid = (s+e)/2 ; 
    }
    
}

// find the first occurance of numbers in the sorted array 
int FirstOccur(int arr[] , int size , int target) {
    int s =  0 ; 
    int e = size - 1 ;
    int mid = (s+e)/2 ; 
    int ans = -1 ; 
    while(s<=e){
        if (arr[mid] == target) {
            ans = mid; 
            e = mid - 1 ;               
        }
        else if (arr[mid] > target) {
            e = mid - 1  ; 
        }
        else if(arr[mid] < target) {
            s = mid + 1;
        }
        mid = (s+e)/2 ; 
    }
    return ans;
    
    

}




int main () {

    // taking a array 
    int arr[] = {10 , 20 , 30 , 40 , 50 , 60 ,70 ,80} ;
    int target = 60 ; 
    // array with duplicate 
    int arrd[] = {10 , 20 , 30 , 30 , 50 , 60 ,70 ,80};
    int targetd = 30 ;

    binarySearch(arr , 8 , 60);
    cout<<endl;
    int index = FirstOccur(arrd , 8 , 30) ;

    if(index == -1) {
        cout<<"the item not found";
    }
    else {
        cout<<index;
    }


}