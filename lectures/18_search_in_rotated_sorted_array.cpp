#include <iostream>
#include <vector>

using namespace std;

int search(vector<int>& nums, int target) {
    int st = 0, end = size(nums)-1;
    while(st <= end){
        int mid = st + (end - st)/2;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[st] <= nums[mid]){ // left sorted //Dont do nums[mid-1] other wise will fail in notfound case of arr of size 1
            if(nums[st]<= target && target <= nums[mid]){
                end = mid - 1; 
            }else{
                st = mid + 1;
            }
            
        }else{// right sorted
            if(nums[mid] <= target && target <= nums[end]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
    }
    return -1;
}