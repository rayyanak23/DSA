#include <iostream>
#include <vector>

using namespace std;

void sortColorsOtimized(vector<int>& nums) {
    int n = nums.size();
    int count0 = 0, count1 = 0, count2 = 0;

    for(int i = 0; i < n; i++){
        if(nums[i] == 0) count0++;
        else if(nums[i]== 1) count1++;
        else count2++;
    }
    // int index = 0;
    // while(count0 + count1 + count2 >0){
    //     if(count0 > 0){
    //         nums[index] = 0;
    //         index++;
    //         count0--;
    //     }else if(count1 > 0){
    //         nums[index] = 1;
    //         index++;
    //         count1--;
    //     }else{
    //         nums[index] = 2;
    //         index++;
    //         count2--;
    //     }
    // }

    int idx = 0;
    for(int i = 0; i < count0; i++){
        nums[idx++] = 0;
    }
    for(int i = 0; i < count1; i++){
        nums[idx++] = 1;
    }
    for(int i = 0; i < count2; i++){
        nums[idx++] = 2;
    }
    
}


void sortColorsOptimalDNF(vector<int>& nums){
    int n = size(nums);
    int mid = 0, high = n-1;
    int low = 0;
    while(mid <= high){
        if(nums[mid] == 0){
            swap(nums[mid], nums[low]);
            mid++, low ++;
        }else if(nums[mid] == 1){
            mid++;
        }else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}