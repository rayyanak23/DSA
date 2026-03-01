//1689. Partitioning Into Minimum Number Of Deci-Binary Numbers

#include <iostream>
#include <string>

using namespace std;

int minPartitions(string n){
        int ans = 0;
        for(char ch:n){
            ans = max(ch-'0',ans);
            if(ans == 9) return 9;
        }

        return ans;

}

int main(){
    string n = "56707757005454776555";
    cout << minPartitions(n) << endl;

    return 0;

}