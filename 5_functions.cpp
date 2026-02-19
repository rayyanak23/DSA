#include <iostream>
using namespace std;

//function definition


// void printHello(){
//     cout << "hello\n";
// }

int printHello(){
    cout << "hello\n";
    return 3;
}

// int main(){
//     int val = printHello();
//     cout << "val = " << val << endl;
//     return 0;
// }

// int sum(int a, int b){
//     int s = a + b;
//     return s;
// }

double sum(double a, double b){
    double s = a + b;
    return s;
}

int minOfTwo(int a, int b){
    if(a<b){
        return a;
    } else{
        return b;
    }
}


int sumN(int n){
    int sum = 0;
    for(int i = 1; i<=n;i++){
        sum+=i;
    }

    return sum;
}

int factorialN(int n){
    int fact  = 1;
    for(int i = 1; i<=n;i++){
        fact *= i;
    }
    return fact;
}


int sumOfDigits(int num){
    int DigSum  = 0;
    while(num>0){
        int lastDig = num % 10;
        num /= 10;
        DigSum += lastDig;
    }
    return DigSum;
}


int nCr(int n, int r){
    int fact_n = factorialN(n);
    int fact_r = factorialN(r);
    int fact_nmr = factorialN(n-r);

    return fact_n/(fact_r * fact_nmr);

}


int isPrime(int n){
    for(int i = 2; i*i <= n; i++){
        if( n%i == 0){
            return false;
        }
    }
    return true;
}

int primesN(int n){
    for(int i = 2; i <= n ; i++){
        if(isPrime(i)){
            cout << i << endl;
        }
    }
    return 0;
}

int main(){
    
    // cout << printHello()<< endl;
    // cout << sum(10.2,5.99) << endl;
    // cout << "min is " << minOfTwo(4,5) << endl;
    // cout << sumN(5)<< endl;
    // cout << factorialN(5)<< endl;
    // cout << sumOfDigits(996734279)<< endl;
    // cout << nCr(8,2)<< endl;
    cout << primesN(17)<< endl;

    return 0;
}


// to calculate 