#include <iostream>
#include <vector>
using  namespace std;


// int maxSubarraySum(int arr[]){
    

// }

// int main(){
//     int n = 5;
//     int arr[5] = {1,2,3,4,5};
//     for(int st = 0; st < n; st++){
//         for(int end = st; end < n; end ++){
//             for(int i = st; i <= end; i++){
//                 cout << arr[i];
//             }
//             cout << endl;
//         }
//     } 
//     return 0;
// }


int kadane(vector<int> arr){
    int currSum = 0, maxSum = INT_MIN;
    for(int val : arr){
        currSum += val;
        maxSum = max(currSum, maxSum);
        if(currSum < 0){
            currSum = 0;
        }
    }
    return maxSum;
}

int main(){
    int n = 7;
    // int arr[5] = {1,2,3,4,5};
    int arr[7] = {3,-4,5,4,-1,7,-8};

    int maxSum  = INT_MIN;
    for(int st = 0; st <n; st++){
        int currSum = 0;
        for(int end = st; end<n; end++){
            currSum += arr[end];
            maxSum = max(currSum,maxSum);

        }
    }

    cout << "max subarray Sum brute force (O(n^2)) = "<< maxSum << endl;

    return 0;
}