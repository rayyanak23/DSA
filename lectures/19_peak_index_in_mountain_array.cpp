#include <iostream>
#include <vector>

using namespace std;

int peakIndexInMountainArray(vector<int>& a) {
    int st = 1, end  = a.size()-2; // end points can be ans
    // by this we dont need to worry about mid edge cases
    while(st <= end){
        int mid = st + (end-st)/2;
        if(st == end){
            return st;
        }
        if(a[mid] > a[mid-1] && a[mid]> a[mid+1]){
            return mid;
        }else if (a[mid] > a[mid-1]){
            st = mid+1;
        }else{
            end = mid-1;
        }
    }
    return -1;
}