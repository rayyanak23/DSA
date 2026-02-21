#include <iostream>
#include <vector>

using namespace std;

void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) { // My solution, tc not optimal
    if(n == 0){
        return;
    }
    for(int i = 0; i < n ; i++){
        int toAssign = nums2[i];
        bool isAssigned = false;
        int possibleLoc = m+i;
        while(!isAssigned){
            if(possibleLoc == 0){
                nums1[possibleLoc] = toAssign;
                isAssigned = true;
            }else if(toAssign >= nums1[possibleLoc-1]){
                nums1[possibleLoc] = toAssign;
                isAssigned = true;
            }else{
                nums1[possibleLoc] = nums1[possibleLoc-1];
                possibleLoc--;
            }

        }
    }
    
}

void merge(vector<int>& A, int m, vector<int>& B, int n) { // Optimal O(m+n)
    int idx = m+n-1, i = m-1, j = n-1;

    while(i >= 0 && j >= 0){
        if(A[i]>=B[j]){
            A[idx--] = A[i--];
        }else{
            A[idx--] = B[j--];
        }
    }
    while(j >= 0){
        A[idx--] = B[j--];
    }
    
}
int main(){

    return 0;
}