#include <iostream>
using namespace std;

// square Patterns

// int main(){
//     int n=8;
//     int m=8;
//     for(int i=1; i<=n; i++){
//         for(int j=1; j<=m; j++){
//             cout<<j<< " ";

//         }
//         cout << endl;
//     }

//     return 0;
// }


// int main(){

//     int m = 10;
//     int n = 10;

//     for(int i = 0; i<=n-1; i++){
//         for(int j = 0; j <= m-1; j++){
//             cout << "*" << " "; 
//         }

//         cout << endl;
//     }


//     return 0;
// }


// int main(){

//     int m = 5;
//     int n = m;

//     for(int i = 0; i<n; i++){
//         for(int j = 65; j<65+m; j++){
//             cout << (char)j << " "; 
//         }

//         cout << endl;
//     }


//     return 0;
// }



// int main(){

//     int m = 5;
//     int n = 10;

//     for(int i = 0; i<n; i++){


//         for(int j = 0+ m*(i) ; j < m*(i)+ m; j++){
//             cout << j + 1 << " "; 
//         }

//         cout << endl;
//     }


//     return 0;
// }


// same output as before


// int main(){

//     int m = 5;
//     int n = 10;
//     int num = 11;

//     for(int i = 0; i<n; i++){

//         for(int j = 0; j<m; j++){
//             cout << num << " ";
//             num ++; 
//         }

//         cout << endl;
//     }
//     return 0;
// }



// int main(){

//     int m = 5;
//     int n = 5;
//     char c = 'A';

//     for(int i = 0; i<n; i++){

//         for(int j=0; j<m; j++){
//             cout << c << " ";
//             c++; 
//         }

//         cout << endl;
//     }
//     return 0;
// }



// int main(){

//     int m = 5;
//     int n = 3;
//     int num = 11;

//     for(int i = 0; i<n; i++){

//         for(int j = 0; j<i+1; j++){
//             cout << "*" << " "; 
//         }

//         cout << endl;
//     }
//     return 0;
// }



// int main(){
//     int n=5;

//     for(int i=0; i<n; i++){
//         for(int j = 0; j<i+1; j++){
//             cout << i+1;
//         }

//         cout << endl;
//     }

//     return 0;
// }


// int main(){
//     int n=5;
//     char c = 'A';
//     for(int i=0; i<n; i++){

//         for(int j = 0; j<i+1; j++){
//             cout << c << " ";
//         }

//         c++;
//         cout << endl;
//     }

//     return 0;
// }



// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){

//         for(int j = 0; j<i+1; j++){
//             cout << j+1 << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }


// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){

//         for(int j = i+1 ; j>0; j--){
//             cout << j << " ";
            
//         }
//         cout << endl;
//     }

//     return 0;
// }


// int main(){
//     int n=5;
//     int num = 1;
//     for(int i=0; i<n; i++){

//         for(int j = 0; j<i+1; j++){
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }

//     return 0;
// }



// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){

//         for(int j = 0; j<n; j++){
            

//             if(j<i){
//                cout<< " "; 
//             }else{
//                 cout << "*";
//             }
            
//         }
//         cout << endl;
//     }

//     return 0;
// }


// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){

//         for(int j = 0; j<n; j++){
            

//             if(j<i){
//                cout<< " "; 
//             }else{
//                 cout << i+1;
//             }
            
//         }
//         cout << endl;
//     }

//     return 0;
// }



//same as above


// int main(){
//     int n=5;
//     for(int i=0; i<n; i++){

//         for(int j = 0; j<i; j++){
//             cout<< " ";  
//         }
//         for(int j = 0; j < n-i; j++){
//             cout << i+1;
//         }
//         cout << endl;
//     }

//     return 0;
// }


// Pyramid Pattern


// int main(){
//     int n = 8;
//     for(int i = 0; i < n; i++){
//         for(int j = 0; j < n-i-1; j++){
//             cout << " ";
//         }
//         int num = 1;
//         for(int j = 0; j < i+1; j++ ){

//             cout << j+1;
//             num++;
//         }
        
//         for(int j = i; j>=1; j--){
//             cout << j;
//         }

//         cout << endl;
//     }
    
//     return 0;
// }

// Hollow Diamoind Pattern

// int main(){

//     int n = 3;

//     for(int i = 0; i < n; i++){

//         for(int j = 0; j<n-i-1; j++){
//             cout << " ";
//         }
//         cout<<"*";
        
//         for(int j = 0; j< 2*i-1; j++){
//             cout << " ";
//         }

//         if(i!=0){
//             cout<< "*";
//         }
//         cout<<endl;
//     }
//     for(int i= 0; i<n-1; i++){
//         for(int j = 0; j < i+1; j++){
//             cout<< " ";
//         }
//         cout<<"*";
//         cout<<endl;
//         // for(int j = )

//     }
//     return 0;
// }

// int main(){

//     int n = 10;

//     for(int i = 0; i < n; i++){

//         for(int j = 0; j<n-i-1; j++){
//             cout << " ";
//         }

//         cout<<"*";



//         if(i!=0){
//             for(int j = 0; j< 2*i-1; j++){
//                 cout << " ";
//             }
//             cout<< "*";
//         }
        
//         for(int j = 0; j< 2*i-1; j++){
//             cout << " ";
//         }

       
//         cout<<endl;
//     }



//     for(int i= 0; i<n-1; i++){
//         for(int j = 0; j < i+1; j++){
//             cout<< " ";
//         }
//         cout<<"*";

//         if(i!=n-2){
//             for(int j = 0; j<2*(n-i)-5;j++){
//                 cout << " ";
//             }
//             cout<<"*";

//         }
//         cout<<endl;

//     }
//     return 0;
// }

// Butterfly


int main(){

    int n = 4;

    // upper
    for(int i = 0; i<n; i++){
        for(int j = 0; j<i+1; j++){
            cout<<"*";
        }
        for(int j = 0; j<2*(n-i-1); j++){
            cout << " ";
        }
        for(int j = 0; j<i+1; j++){
            cout<<"*";
        }
        cout << endl;
    }

    //lower

    for(int i = 0; i<n; i++){
        for(int j = 0; j<n-i; j++){
            cout<<"*";
        }
        for(int j = 0; j<2*i; j++){
            cout << " ";
        }
        for(int j = 0; j<n-i; j++){
            cout<<"*";
        }
        cout << endl;
    }
    
    return 0;
}
