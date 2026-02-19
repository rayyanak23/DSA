#include <iostream>
using namespace std;


int revInt(int num){
    int ans = 0;

    while(num>0){
        int rem = num % 10;
        if(ans == 0){
            ans += rem;
        } else {
            ans = ans*10 + rem;
        }

        num/=10;
    }

    return ans;
}
int main(){
    int a = 4, b = 7;

    // cout << (a ^ b) << endl;
    cout << revInt(1276872600)<< endl;


    return 0;
}