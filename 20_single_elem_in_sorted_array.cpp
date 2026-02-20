#include <iostream>
#include <vector>

using namespace std;

int singleNonDuplicate(vector<int>& a) {
    int st = 0, end = a.size()-1;
    
    while(st <= end){
        int mid = st + (end - st)/2;
        if(st == end){
            return a[st];
        }
        // if(((end-st) / 2) % 2 == 0){
        if(mid % 2 == 0){

            if(a[mid] != a[mid-1] && a[mid] != a[mid+1]){
                return a[mid];
            }else if(a[mid] == a[mid-1]){
                end = mid;
            }else{
                st = mid;
            }
        }else{
            if(a[mid] != a[mid-1] && a[mid] != a[mid+1]){
                return a[mid];
            }else if(a[mid] == a[mid-1]){
                st = mid+1;
            }else{
                end = mid-1;
            }
        }
        
    }

    return -1;
}