#include <iostream>
#include <vector>

using namespace std;

bool linearSearch(int mat[][3],int rows, int cols, int key){// must have to specify col nums in matrix
    
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j ++){
            if(mat[i][j]==key){
                return true;
            }
        }
    }

    return false;

}

pair<int,int> linearSearchPair(int mat[][3],int rows, int cols, int key){// must have to specify col nums in matrix
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j ++){
            if(mat[i][j]==key){
                return {i,j};
            }
        }
    }

    return {-1,-1};

}




// int main(){

//     int matrix[4][3]; //2d array (non initialized)
//     int rows = 4;
//     int cols = 3;

//     // matrix with initialization
//     int mat2[4][3] = {{1,2,3},{4,5,6},{7,8,9},{10,11,12}};// treat individual row as individual array
//     int rows2 = 4;
//     int cols2 = 3;

//     // to access
//     cout << mat2[2][1] << endl; 
//     // to print all elements row wise (nested loops)

//     for(int i = 0; i < rows2; i++){
//         for(int j = 0; j < cols2; j++){
//             cout << mat2[i][j] << " ";
//         }
//         cout << endl;
//     }

//     // now lets take matrix as input

//     int mat3[3][4];
//     int rows3 = 3;
//     int cols3 = 4;

//     // // input 
//     // for(int i = 0; i < rows3; i++){
//     //     for(int j = 0; j < cols3; j++){
//     //         cout << "Enter  " << j << "th element of " << i << "th row"<< endl; 
//     //         cin >> mat3[i][j];
//     //     }
        
//     // }

//     // // output
//     // for(int i = 0; i < rows3; i++){
//     //     for(int j = 0; j < cols3; j++){
//     //         cout << mat3[i][j] << " ";
//     //     }
//     //     cout << endl;
//     // }
//     // // linear serach in matrix
//     // for(int i = 0; i < rows2; i++){
//     //     for(int j = 0; j < cols2; j++){
//     //         if(mat2[i][j] == 8){
//     //             cout << (i,j) <<endl;
//     //         }
//     //     }
//     // }
//     cout << linearSearch(mat2, rows2, cols2, 9) << endl;

//     // use pair <i,j> from stl

//     return 0;
// }

int getMaxSum(int mat[][4], int rows, int cols){
    int maxRowSum = INT_MIN;
    for(int i = 0; i < rows; i++){
        int sum = 0;
        for(int j = 0; j < cols; j++){
            sum += mat[i][j];
        }

        maxRowSum = max(maxRowSum,sum);

    }
    return maxRowSum;


}

int getMaxColSum(int mat[][4], int rows, int cols){
    int maxColSum = INT_MIN;
    for(int j = 0; j < cols; j++){
        int sum = 0;
        for(int i = 0; i < rows; i++){
            sum += mat[i][j];
        }

        maxColSum = max(maxColSum,sum);

    }
    return maxColSum;
    

}

int getDiagSum(int mat[][4], int size){// O(n*n)
    int diagSum = 0;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++){
            if(i==j){
                diagSum += mat[i][j]; // PD
            }else if(i+j == size-1 && i !=j ){ // SD (excluding center)
                diagSum += mat[i][j];
            }
        }


    }
    return diagSum;
    

}

int getDiagSum(int mat[][4], int size){// O(n) 
    int diagSum = 0;
    for(int i = 0; i < size; i++){
        diagSum += mat[i][i];
        
        if(i != size-i-1){ // to exclude common
            diagSum+=mat[i][size-i-1];
        }


    }
    return diagSum;

}

// int main(){
//     int matrix[4][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//     int rows  = 4;
//     int cols = 4;

//     cout << getMaxSum(matrix,rows,cols) << endl;
//     cout << getMaxColSum(matrix,rows,cols) << endl;
//     cout << getDiagSum(matrix, rows) << endl;

// }

int main(){
    vector<vector<int>> mat = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    // rows = mat.size()
    // cols = mat[i].size()
    for(int i = 0; i <mat.size(); i++){
        for(int j= 0; j < mat[i].size(); j++){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    // in vectors each row can have different size
    return 0;
}