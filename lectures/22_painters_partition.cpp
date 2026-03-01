#include <iostream>
#include <vector>

using namespace std;
bool isValid(vector<int> &arr, int n, int m, int maxAllowedLength){ // time == length
    int painters = 1, length = 0;
    for(int i = 0; i < n; i++){
        if(arr[i]> maxAllowedLength){
            return false;
        }
        if(length+arr[i]<= maxAllowedLength){
            length+=arr[i];
        }else{
            painters++, length = arr[i];
        }
    }
    return painters <= m? true:false; 
}

int minPaintTime(vector<int> &arr, int m){// m = no. of painters
    int n = arr.size();
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum+=arr[i];
    }
    int st = 0, end = sum;
    int ans = -1;
    while(st <= end ){
        int mid = st + (end - st)/2;
        if(isValid(arr, n, m, mid)){
            ans = mid;
            end = mid-1;
        }else{
            st = mid+1;
        }
    }
    return ans;

}


int main(){



    return 0;
}