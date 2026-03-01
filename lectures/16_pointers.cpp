#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;


// int main(){
//     int a = 10;
//     cout << &a <<endl;

//     return 0;
// }

// int main(){
//     // int a = 10;
//     // int* ptr = &a;
//     // cout << &a << endl;
//     // cout << ptr << endl;
//     // cout << &ptr << endl;

//     float price = 12.35f;
//     float* ptr2 = &price;

//     cout << &price << endl;
//     cout << ptr2 << endl;
//     cout << &ptr2 << endl;
//     cout << *(&price) << endl;


//     return 0;
// }


// void changeA(int &a){
//     a = 20;
// }

void changeAPointers(int* ptr){ // pass by reverence --> pointers
    *ptr = 20;

}

void changeAAlias(int &b){ // pass by reference --> Alias
    b = 20;
}


// int main(){
//     int a = 10;
//     changeAPointers(&a); 
//     changeAAlias(a); // Alias
    
//     cout << "inside main: "<< a << endl;  
//     return 0;
// }


int main(){
    int arr[] = {1,2,3,4,5};
    cout << arr << endl;
    cout << *arr << endl;
    
    cout << arr+1 << endl;
    cout << *(arr+1) << endl;
    return 0;
}