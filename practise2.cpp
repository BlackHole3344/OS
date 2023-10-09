#include <iostream>
using namespace std ;


// linear search in multi dimensional array

bool linears(int arr[][3] , int target , int row , int col ) {
    int tar = target ; 
    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < col ; j++) {
            if(arr[i][j] == tar) {
                cout<<"target found at : " << i <<" ," <<j;
                return true;

            }
        }
    }
}

// rowwise sum of the elements 

int sumRow(int arr[][3] , int row , int col) {
    int sum = 0 ; 
    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < col ; j++){
            sum = sum + arr[i][j];
        }
        cout<<sum<<endl;
        sum = 0 ;
    }
}

int Max(int arr[][3] , int row , int col  ) {
    int max = 0 ; 
    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < col ; j++){
            if(arr[i][j] > max){
                max = arr[i][j];
            }
        }

    }
    cout<<max;
}

int Min(int arr[][3] , int row , int col) {
    int min = arr[0][0];
    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < col ; j++) {
            if(arr[i][j]<min){
                min = arr[i][j];
            }
        }
    }
    cout<<min;
}

int sumdi(int arr[][3] , int row , int col ){
    int sum = 0 ; 
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(i == j){
                sum = sum + arr[i][j];
            }
        }
    }
    cout<<sum;
}

int lowTmat(int arr[][3] , int row , int col) {
    int temp = 0 ; 
    for(int i = 0 ; i < row ; i++ ){
        for(int j = 0 ; j < col ; j++) {
            arr[i][j] = temp;
            arr[i][j] = arr[j][i] ;
            arr[j][i] = temp ;

        }

    }
}
int parray(int arr[][3] , int row , int col ){
    for(int i = 0 ; i<row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main () {
    int arr[3][3] = { {2 , 5 , 6 } ,
    {4, 7 ,8} ,
    {9 , 1 , 3}

    };
    // linears(arr , 0 , 3 , 3) ;
    // cout<<endl;

    // sumRow(arr , 3 , 3 ) ;

    Max(arr , 3 ,3);
    cout<<endl;
    Min(arr , 3 , 3 );
    cout<<endl;
    parray(arr,3,3);
    // sumdi(arr , 3 ,3 );
    lowTmat(arr , 3 ,3 );
    cout<<endl;
    parray(arr , 3 ,3);


}