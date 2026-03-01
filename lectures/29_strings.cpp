#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;



// int main(){
//     char str[] = "college";// string literals whose value cant be changeg
//     char str2[] = {'a','b','c','\0'}; // '\0' is imp to make string valid
//     cout << str << endl;
//     cout << str[2] << endl;
//     cout << str[7] << endl; // print nothing
//     cout << str2  << endl;
//     cout << str2[2]<< endl;


//     //char input output

//     // char str3[100];

//     // cout <<"Enter char array: " ; 
//     // // cin >> str; // if  i enter "hello world" then only hello is entered 

//     // cin.getline(str3,11,'$');  // args() // high size will give garbage characters


//     // // cout << "output : " << str3 << endl;
//     // for(char ch: str3){
//     //     cout << ch << " ";
//     // }


//     char str4[] = "Hello World";
//     int len = 0;
//     for(int i = 0; str4[i] != '\0'; i++){
//         len++;
//     }
//     cout << "length is: "<< len << endl; 
//     return 0;
// }



int main(){
    string str = "apna college";
    cout << str << endl;

    str = "hello"; //dynamic in nature adjust size itself in runtime
    cout << str << endl;

    string str1 = "apna college";//dynamic in nature adjust size itself
    cout << str1 << endl;

    string str2 = "hello"; //dynamic in nature adjust size itself
    cout << str2 << endl;

    string str3 = str2 + str1; // concatenation

    cout << str3 << endl;
    cout << (str1 == str2) << endl;
    cout << str1.length() << endl;  // .length() for strings

    //similarly cin wont work we need getline()

    getline(cin,str);
    cout << "output : " << str << endl;

    string str5 = "rayyan";
    reverse(str.begin(),str.end());
    cout << "rversed output : " << str << endl;

    return 0;
}