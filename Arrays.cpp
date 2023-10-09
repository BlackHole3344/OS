#include <iostream>
using namespace std;



int main() {
    int a = 5 ; 
    cout<<"address of a is : " << &a <<endl;
    // int arr[100] ; 
    // cout<<"size of the array "<< sizeof(arr)<<endl; 
    // cout<<"address of the array :"<<arr;
    // //array intilisation 
    int arr2[] = {2,3,4,6,5} ; 
    // cout<<sizeof(arr2);
    // acessing the array elements by indexing 
    // cout<<arr[2];
    // cout<<arr2[5];
    // for (int i = 0 ; i < 6 ; i++) {
    //     cout<<arr2[i]<<endl;
    // }

    // for length of the array 
    // int arr3[] = {1,2,4,5,6,7} ;
    // cout<<sizeof(arr3);

    // int length = 0 ; 
    // for(int i = 0 ; i <=sizeof(arr3) ; i+4) {
    //     length = length + 1 ; 
    
    // }
    // cout<<length;
    // int arr[6] ; 
    // int size = sizeof(arr2);
    // int len = 0 ; 
    // for(int i = 0 ; i < size ;  ) {
    //     len = len + 1 ;
    //     i = i + 4 ; 
    // }
    // cout<<len;

    //operations on arrays 
    int array1[9] = {2,3,4,5,6,7,8,9,10} ;
    for(int i = 0 ; i < 9 ; i++) {
        if(array1[i] % 2 == 0 ) {
            cout<<array1[i]<<endl;
        }
        
        
    }
    //print the sum of all the elements of the array 
    int sum = 0 ; 
    for(int i = 0 ; i <9 ; i++) {
        sum = sum + array1[i] ; 

        
    }
    cout<<sum;
    //sum of all the even numbers 
    int sum2 = 0 ; 
    for(int i = 0 ; i < 9 ; i++) {
        if(array1[i] % 2==0) {
            sum2 = sum2 + array1[i] ; 
        }

    }
    cout<<sum2;

    

    //print all the even numbers 

    
    


    

}
