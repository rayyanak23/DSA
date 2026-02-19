#include <iostream>
#include <vector>
#include <algorithm>
using  namespace std;


int maxArea(vector<int>& height) {
        
    int n = size(height);

    int ma = min(height[0],height[1]);
    int ca;
    for(int i = 2; i < n; i++){
        for(int j = 0; j<i; j++){
            ca = min(height[i],height[j])*(i-j);
            ma = max(ma,ca);
            }
        }

    return ma;
}

int maxArea(vector<int>& height) {
        
    int r = size(height)-1, l = 0;

    int ans = 0;
    int ca;
    while(l < r){
        ca = min(height[l],height[r])*(r-l);
        ans = max(ans,ca);
        height[l] < height[r] ? l++ : r--;
    }

    return ans;
}