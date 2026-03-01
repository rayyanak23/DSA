#include <iostream>
using namespace std;


int decToBinary(int decNum){
    int ans = 0;
    int power = 1;
    

    while(decNum > 0){
        int rem = decNum % 2;
        decNum /= 2;
        ans += rem*power;
        power *= 10;


        
    }
    return ans;
}

int binToDec(int bin){
    int ans = 0;
    int power = 1;
    while(bin > 0){
        int rem = bin % 10;
        bin /= 10;
        ans += rem*power;
        power *= 2;
    }
    return ans;
}

int main(){
    
    // for(int i = 1; i<=50;i++){
    //     cout<<decToBinary(i)<<endl;
    // }
     
    cout << binToDec(10100111) << endl;
    return 0;
}