#include <iostream>
#include <vector>
#include <algorithm>
using  namespace std;

vector<int> pairSum(vector<int> nums, int target){
    vector<int> ans;
    int n = nums.size();
    for(int i = 0; i < n; i++){
        for(int j = i+1; j<n; j++){
            if(nums[i]+nums[j]==target){
                ans.push_back(i);
                ans.push_back(j);
                return ans;
            }
        }
    }
    return ans;
}

vector<int> pairSumLinear(vector<int> nums, int target){ // O(n)
    vector<int> ans;
    int n = nums.size();
    int i = 0, j = n-1;
    while(i < j){
        int pairSum = nums[i] + nums[j];
        if(pairSum < target){
            i++;
        } else if(pairSum > target){
            j--;
        } else{
            ans.push_back(i);
            ans.push_back(j);
            return ans;
        }

    }
    return ans;
    
}

int majorityElementBruteForce(vector<int> nums){
    int n = nums.size();
    for(int val : nums){
        int freq = 0;
        for(int el : nums){
            if(el == val){
                freq ++;
            }
        }
        if(freq > n/2){
            return val;
        }
    }

    return -1;
}

int majorityElementOptimized(vector<int> nums){
    int n = size(nums);
    // sort
    sort(nums.begin(),nums.end());
    int freq = 1, ans = nums[0];
    for(int i = 1;i<n;i++){
        if(nums[i]==nums[i-1]){
            freq++;
        }else {
            freq = 1,ans = nums[i];
        }
        if(freq > n/2){
            return ans;
        }
    }
    return ans; // without this edge case with array of length will not return anything 
}


int majorityElementMoores(vector<int> nums){
    int freq = 0;
    int ans = 0;
    int n = size(nums);
    for(int i = 0; i<n; i++){
        if(freq == 0){
            ans = nums[i];

        }
        if(ans == nums[i]){
            freq++;
        }else{
            freq--;
        }
    }
    return ans;
}



int main(){
    vector<int> nums = {2,7,11,15};
    int target = 100;

    vector<int> ans = pairSum(nums,target);
    cout << ans[0] << "," << ans[1]<<endl;

    return 0;
}