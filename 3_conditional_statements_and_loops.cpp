#include <iostream>
using namespace std;

// int main(){
//     int n = -42
// ;
//     if(n%2==0){
//         cout << "n is even\n";
//     } else {
//         cout << "n is odd \n";
//     }

//     return 0;
// }

// int main(){
//     char ch;
//     cout << "enter Char: ";
//     cin >> ch;

//     if (ch >= 65 && ch <= 90){
//         cout << "Uppercase\n";
//     } else {
//         cout << "Lowercase\n";
//     }

//     return 0;
// }

// A-->65 Z=90


// int main(){ // ternary statement
//     int n = -42;
//     //n>=0 ? cout << "positive" : cout << "negative";
//     cout << (n>=0 ? "positive":"negative");
//     return 0;
// }

// int main(){
//     int count = 1;
//     while (count <= 5){
//         cout << count << "\n" ;
//         //count += 1;
//         count ++ ;
//     } 
//     return 0;
// }

// int main(){
//     int n = 3;
//     for (int i = 1; i <= n; i++){
//         cout << i << " ";

//     }

//     return 0;
// }

// int main(){
//     int n = 15;
//     int sum = 0;
//     for (int i =1 ; i<=n; i++ ){
//         sum += i;
//         if(i==5){
//             break;
//         }
//     }
//     cout << "sum is " <<sum;
//     return 0;
// }


// int main(){
//     int n = 10;
//     int i = 1;
//     int sum = 0;
//     while(i<=n){
//         sum+=i;
//         i++;
//     }    
//     cout << "sum is "<< sum;
//     return 0;
// }


// int main(){
//     int n = 10;
//     int sumOdd = 0;
//     for (int i = 0; i<=n; i++){
//         if(i % 2 != 0){
//             sumOdd +=i;
//         }
//     }
//     cout << "sum of odd nums is "<< sumOdd;
//     return 0;
// }

// Do while (runs loop atleast once because condition is checked after execution)

// int main(){

//     int n = 10;
//     int i = 1;

//     do{
//         cout << i << " ";
//         i++;
//     }while(i<=-10);

//     return 0;
// }



//Check prime

int main(){
    bool isPrime = true;
    int n= 999999999;
    for(int i=2; i*i<= n; i++){
        if(n % i ==0){
            isPrime = false;
            // cout << "divisible by " << i << "\n";
            // break;
        }
    }
    cout << (isPrime? "yes": "no");
    return 0;
}


