
#include <iostream>
using namespace std;
int main(){
    int age  = 36;
    char grade = 'i';
    float PI = 3.14f;
    double num = 2.222;
    bool isSafe = false;
    int num_2 = (int)num;
    char name;
    cout << sizeof(PI) << endl;
    cout << "Enter Your Name : ";
    cin >> name;
    cout << grade << " is your name.\n";

    cout << num_2 << endl;
    return 0;
}

// Boilerplate code
// large size to small size implicit type convert