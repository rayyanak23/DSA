#include <vector>

using namespace std;
int numSpecial(vector<vector<int>>& mat) {

    int row = mat.size();
    int col = mat[0].size();

    vector<int> rowSum(row, 0);
    vector<int> colSum(col, 0);

    // count 1s in each row
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(mat[i][j] == 1){
                rowSum[i]++;
            }
        }
    }

    // count 1s in each column
    for(int j = 0; j < col; j++){
        for(int i = 0; i < row; i++){
            if(mat[i][j] == 1){
                colSum[j]++;
            }
        }
    }

    int count = 0;

    // check special positions
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(mat[i][j] == 1 && rowSum[i] == 1 && colSum[j] == 1){
                count++;
            }
        }
    }

    return count;
}
