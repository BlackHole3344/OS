#include <iostream> 
#include <vector>
using namespace std ; 

int printNDarr(int arr[][4] , int row , int column ) {
    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < column ; j++){
            // int form = column*i + j ;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

bool SearchTarget(int arr[][3] , int row , int col , int target) {
    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < col ; j++) {
            if(arr[i][j] == target) {
                cout<<"target is at : "<<i<<","<<j;
                return true ;
            }
        }
    }
    // will exit here if target element is not found 
    return false;
}

int maxElement(int arr[][3] , int row , int col ) {
    int min = 0 ; 
    int x = 0 ; 
    int y = 0 ;
    for(int i = 0 ; i < row ; i++) {
        for(int j  = 0 ; j < col ; j++){
            if(arr[i][j] > min ) {
                min = arr[i][j];
                x = i ; 
                y = j ;
                
            }
            
        }
    }
    return min;
}

int minElement(int arr[][3] , int row , int col , int max) {
    int maxnum = max ; 

    for (int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j<col ; j++){
            if(arr[i][j] < maxnum){
                maxnum = arr[i][j];
            }
        }
    }
    cout<<maxnum;
}


// sum of the row wise elements 

int sumofrow(int arr2[][4] , int row , int col) {
    int sumofr = 0 ;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++) {
            sumofr = sumofr + arr2[i][j];
            
            
            
        }
        cout<<sumofr<<endl;
        sumofr = 0 ;
        
        
    }
}
// sum of the column wise elements 
int sumofcol(int arr2[][4] , int row , int col) {
    int sumofcol = 0 ;
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++) {
            sumofcol = sumofcol + arr2[j][i];
            
            
            
        }
        cout<<sumofcol<<endl;
        sumofcol = 0 ;
        
        
    }
}

// sum of the diagonal elements 

int sumofdiagonal(int arr2[][4] , int row , int col) {
    int sumofdia = 0 ; 
    for(int i = 0 ; i<row ; i++) {
        sumofdia = sumofdia + arr2[i][i] ; 
    }
    cout<<sumofdia;
}

//converting to lower traingular matrix 
int lowerTMat(int arr2[][4] , int row , int col){
    int temp = 0 ;
    for(int i = 0 ; i < row ; i++) {
        for(int j = 0 ; j < col ; j++){
            arr2[i][j] = temp;
            arr2[i][j] = arr2[j][i];
            arr2[j][i] = temp;
        }
    }
}
// int transpose(int arr3[][4] , int row , int col) {
//     int temp = 0 ; 
//     for(int i = 0 ; i < row ; i++) {
//         for(int j = i+1 ; j<col ; j++ ) {
//             int temp = arr3[i][j] ;
//             arr3[i][j] = arr3[j][i];
//             arr3[j][i] = temp;
           
            
//         }

//     }
// } 

int transpose(int arr2[][4] , int row , int col ) {
    for(int i = 0 ; i < row ; i++) {
        for(int j = i ; j < col ; j++) {
            swap(arr2[i][j] , arr2[j][i]);

            


        }
    }
}
int printMV(vector < vector <int> > arrd) {
    for(int i = 0 ; i < arrd.size() ; i++) {
        for(int j = 0 ; j < arrd[i].size() ; j++) {
            cout<<arrd[i][j];
        }
    }
}


// int sumofcol(int arr2[][4] , int row , int col) {
//     int sumofcol = 0 ;
//     for(int)
// }
int main () {
    // creating a 2d array 
    // int arr[rows][columns]; 

    // intialising a array 
    // int arr[3][3] = {
    //     {2,3,4} , 
    //     {5,6,7} ,
    //     {8,9,0}
    // };

    // // cout<<arr[4];
    // int row = 3 ; 
    // int column = 3; 

    // printNDarr(arr , 3, 3);
    // int arr[3][3] ; 
    // for(int i = 0 ; i < 3 ; i++) {
    //     for(int j = 0 ; j < 3 ;j++) {
    //         arr[i][j] = i+2+j; 
    //     }
        
    // }
    // printNDarr(arr , 3 , 3 ) ;
    


    // linear search on multidimensional array 
    // int target = 6 ; 
    // SearchTarget(arr , 3 , 3 , target) ;
    // cout<<endl;
    

    // fint the maximum element in the aray 
    

    // find the minmum element in the array 
    // minElement(arr , 3 , 3 ,maxElement(arr , 3 ,3 ));

    // row wise and columns wise  sum of the elements 
    int arr2[4][4] = {
        {10,20,5,7} , 
        {2,4,6,8},
        {10,15,15,8} , 
        {3 , 4 ,5 ,6} 
    };
    // printNDarr(arr2 , 4 , 4 );
    // sumofrow(arr2 , 4 ,4);
    // sum of diagonal elements 
    // sumofdiagonal(arr2 , 4 ,4 ) ;
    // printNDarr(arr2 , 4 , 4 );
    // cout<<endl;
    
    // printNDarr(arr2 , 4 , 4);
    // cout<<endl;
    // int arr3[2][2] = {
    //     {10 , 20} , 
    //     {30 , 40}
    
    // };     


    // transpose(arr2 , 4 , 4);
    // printNDarr(arr2 , 4 , 4);
    
// vector in multi dimensional arrays 

// intialising the 2d vector 

// vector <vector <int> name(size , row item type (no of items , elements)) 


// vector <vector <int> > arr(5 , vector<int>(10 , -8)) ;

// printing the array 
// for(int i = 0 ; i < arr.size() ; i++) {
//     for(int j = 0 ; j < arr[i].size(); j++) {
//         cout << arr[i][j] <<" ";


//     }
//     cout<<endl;
// }


// vector <vector <int> > arrp;

 
// vector <int> v1(5 , 1); 
// vector <int> v2(2 , 0);
// vector <int> v3(3 , 1);
// vector <int> v4(4 , 0);
// vector <int> v5(4 , 1);


vector < vector <int> > arrd ; 
int n ; 
cin>>n;
int row = n ; 

for(int i = 0 ; i < n ; i++) {
    for(int j = 0 ; j < i + 1 ; j++) {
        arrd.push_back(0) ; 
    }
}
 






















    

 
}