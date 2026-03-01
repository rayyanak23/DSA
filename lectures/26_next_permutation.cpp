#include <iostream>
#include <vector>

using namespace std;

void revArray(vector<int>& a, int stIdx, int endIdx){
    int i = stIdx, j = endIdx;
    while(i<=j){
        swap(a[i],a[j]);
        i++,j--;
    }
}
void nextPermutation(vector<int>& a) { //O(n)
    int n = a.size();
    //find pivot
    int piv = -1;
    for(int i = n-2; i>=0; i--){
        if(a[i]<a[i+1]){
            piv = i;
            break;
        }
    }

    // if(piv == -1){
    //     revArray(a,0,n-1);
    // }else{
    //     // find right most element greater than pivot
    //     for(int i = n-1; i> piv; i--){
    //         if(a[i]>a[piv]){
    //             swap(a[i],a[piv]);
    //             break;
    //         }
    //     }
    //     revArray(a,piv+1,n-1);
    // }

    if(piv == -1){
        reverse(a.begin(),a.end());
        return;
    }

    // find right most element greater than pivot
    for(int i = n-1; i> piv; i--){
        if(a[i]>a[piv]){
            swap(a[i],a[piv]);
            break;
        }
    }
    revArray(a,piv+1,n-1);
    

    
}