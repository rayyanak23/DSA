#include <iostream>
#include <vector>

using namespace std;

vector<int> spiralOrder(vector<vector<int>>& mat) { // O(m*n)
    int m = mat.size(), n = mat[0].size();
    int srow = 0, erow = m-1;
    int scol = 0, ecol = n-1;
    vector<int> ans;
    while (srow <= erow && scol <= ecol){
        //top row
        for(int j = scol; j <= ecol; j++){
            ans.push_back(mat[srow][j]);
        }

        // right col
        for(int i = srow+1; i <= erow; i++){
            ans.push_back(mat[i][ecol]);
        }

        // bottom row
        if(srow<erow){
            for(int j = ecol - 1; j >= scol; j--){
                ans.push_back(mat[erow][j]);
            }
        }
        // left col
        if(scol < ecol){
            for(int i = erow-1; i >= srow +1 ; i--){
                ans.push_back(mat[i][scol]);
            }
        }
        srow++, erow--; // peel like onion
        scol++, ecol--;
    }
    return ans;
    
}