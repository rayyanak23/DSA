#include <iostream>
#include <vector>

using namespace std;

int minSwaps(vector<vector<int>>& grid) {
    int n = grid.size();
    vector<int> rightmost(n);

    // Step 1: compute rightmost 1 for each row
    for(int i = 0; i < n; i++) {
        int pos = -1;
        for(int j = n - 1; j >= 0; j--) {
            if(grid[i][j] == 1) {
                pos = j;
                break;
            }
        }
        rightmost[i] = pos;
    }

    int swaps = 0;

    // Step 2: greedy row fixing
    for(int i = 0; i < n; i++) {
        int j = i;

        // find suitable row
        while(j < n && rightmost[j] > i) {
            j++;
        }

        if(j == n) return -1; // not possible

        // bring row j to position i
        while(j > i) {
            swap(rightmost[j], rightmost[j - 1]);
            swaps++;
            j--;
        }
    }

    return swaps;
}