#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> twoSumBrute(vector<int> arr, int tar){
    int n = arr.size();
    int sum = 0;
    vector<int> ans(2,-1);
    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            sum = arr[i]+ arr[j];
            if(sum == tar){
                ans[0] = i;
                ans[1] = j;
                return ans;
            }
        }
    }

    return ans;
}

vector<int> twoSumBetter(vector<int> arr, int tar){
    int n = arr.size();
    int sum = 0;
    vector<pair<int, int>> nums;
    for(int i = 0; i < n; i++){
        nums.push_back({arr[i], i});
    }
    sort(nums.begin(),nums.end()); // sort by 1st element
    int st = 0;
    int end = n-1;
    while(st < end){
        int sum = nums[st].first + nums[end].first;
        if(sum == tar){
            return {nums[st].second , nums[end].second};
        }else if(sum < tar){
            st++;
        }else{
            end--;
        }
    }

    return {-1,-1};
}

// int main(){

//     vector<int> arr = {1,5,8,9};
//     int tar = 10;
//     vector<int> ans = twoSumBrute(arr,tar);
//     for(int i: ans ){
//         cout << i;

//     }
//     cout << endl;
//     return 0;
// }

int main(){
    vector<int> arr = {1,5,8,9};
    int target = 10;

    vector<int> ans = twoSumBetter(arr, target);

    cout << ans[0] << " " << ans[1] << endl;

    return 0;
}