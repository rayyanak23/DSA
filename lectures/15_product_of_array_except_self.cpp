#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


vector<int> productExceptSelf(vector<int>& nums) {
    int n = size(nums);
    vector<int> ans(nums.size(),1);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i != j){
                ans[i]*=nums[j];
            }
        }
    }
    return ans;   
}

vector<int> productExceptSelf(vector<int>& nums) {
    int n = size(nums);
    vector<int> ans(n,1);
    vector<int> p(n,1);
    vector<int> s(n,1);
    for(int i = 1; i < n; i++){
        p[i] = p[i-1]*nums[i-1];
    }
    for(int i = n-2; i >= 0; i--){
        s[i] = s[i+1]*nums[i+1];
    }
    for(int i = 0; i < n; i++){
        ans[i] = p[i]*s[i];
    }

    return ans;   
}

vector<int> productExceptSelf(vector<int>& nums) {
    int n = size(nums);
    vector<int> ans(n,1);
    // vector<int> p(n,1);
    vector<int> s(n,1);
    int prefix = 1;
    int suffix = 1;
    for(int i = 1; i < n; i++){

        ans[i] = ans[i-1]*nums[i-1];
    }
    for(int i = n-2; i >= 0; i--){
        suffix *= nums[i+1];
        ans[i] = ans[i]*suffix;
        

    }

    return ans;   
}