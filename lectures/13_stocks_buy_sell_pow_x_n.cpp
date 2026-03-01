#include <iostream>
#include <vector>
#include <algorithm>
using  namespace std;


double myPow(double x, int n){
    long binForm = n;
    double ans = 1;

    if(n < 0){
        binForm = -binForm;
        x = 1/x;
    }
    while(binForm > 0){
        if(binForm % 2 == 1){
            ans *= x;
        }
        x *= x;
        binForm /= 2;

    }

    return ans;
}

int maxProfit(vector<int>& prices) {
    int bb = prices[0], mp = 0;
    int n = size(prices);
    for(int i = 1; i < n; i++ ){
        mp = max(mp, prices[i]-bb);
        bb = min(bb,prices[i]);
    }

    return mp;
}


int main(){

    return 0;
}