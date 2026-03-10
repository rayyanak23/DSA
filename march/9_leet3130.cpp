#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int numberOfStableArrays(int zero, int one, int limit) {
        const long long MOD = 1e9 + 7;
        // dp0[i][j]: arrays with i zeros, j ones, ending in 0
        // dp1[i][j]: arrays with i zeros, j ones, ending in 1
        vector<vector<long long>> dp0(zero+1, vector<long long>(one+1,0));
        vector<vector<long long>> dp1(zero+1, vector<long long>(one+1,0));
        // col_pre1[i][j] = sum_{x=0}^{i-1} dp1[x][j]
        // row_pre0[i][j] = sum_{y=0}^{j-1} dp0[i][y]
        vector<vector<long long>> col1(zero+2, vector<long long>(one+1,0));
        vector<vector<long long>> row0(zero+1, vector<long long>(one+2,0));
        
        for(int i=0;i<=zero;i++){
            for(int j=0;j<=one;j++){
                if(i==0 && j==0){
                    // nothing
                } else {
                    // Ending in 0: placed k zeros at end (1<=k<=limit), preceded by dp1[i-k][j]
                    if(i>0){
                        int lo = max(0, i-limit);
                        // sum dp1[lo..i-1][j] = col1[i][j] - col1[lo][j]
                        dp0[i][j] = (col1[i][j] - col1[lo][j] + MOD) % MOD;
                        // edge: arrays of all zeros
                        if(j==0 && i<=limit) dp0[i][j] = 1;
                    }
                    // Ending in 1: placed k ones at end (1<=k<=limit), preceded by dp0[i][j-k]
                    if(j>0){
                        int lo = max(0, j-limit);
                        // sum dp0[i][lo..j-1] = row0[i][j] - row0[i][lo]
                        dp1[i][j] = (row0[i][j] - row0[i][lo] + MOD) % MOD;
                        // edge: arrays of all ones
                        if(i==0 && j<=limit) dp1[i][j] = 1;
                    }
                }
                // Update prefix sums
                col1[i+1][j] = (col1[i][j] + dp1[i][j]) % MOD;
                row0[i][j+1] = (row0[i][j] + dp0[i][j]) % MOD;
            }
        }
        return (dp0[zero][one] + dp1[zero][one]) % MOD;
    }
};