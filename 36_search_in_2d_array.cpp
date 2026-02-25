#include <iostream>
#include <vector>

using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    int r = 0, c = n-1;

    while( r <= m-1 && c >=0 ){
        if(target == matrix[r][c]){
            return true;
        }else if(target < matrix[r][c]){
            c--;
        }else{
            r++;
        }
    }

    return false;
}

bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    int st = 0;
    int end = rows-1;
    int targetRow = -1;
    bool rowFound = false;
    while(st<=end && !rowFound){
        int mid = st + (end-st)/2;
        if(matrix[mid][0]> target){
            end = mid-1;
        }else if(matrix[mid][cols-1]< target){
            st = mid+1;
        }else{
            targetRow = mid;
            rowFound = true;

        }

    }

    // now col Search

    if(targetRow == -1){
        return false;
    }

    st = 0;
    end = cols-1;
    

    while(st <= end){
        int mid = st + (end-st)/2;
        if(matrix[targetRow][mid] == target){
            return true;
        }else if(matrix[targetRow][mid] > target){
            end = mid-1;
        }else if(matrix[targetRow][mid] < target){
            st = mid+1;
        }
    }

    return false;


    
}