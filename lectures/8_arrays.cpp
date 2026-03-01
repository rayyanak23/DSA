#include <iostream>
using namespace std;

// int main(){
//     // int marks[100]; // no elements
//     // int marks[100] = {55,75,24,54};
//     // double price[] = {55.45,24.53,13.345};
//     int marks[5] = {55,75,24,54,88};
//     int size = 5;
//     for(int i = 0; i < size; i++){
//         cout << marks[i] <<endl;
//     }
//     // marks[0] = 88;
//     // cout << marks[0] << endl;
//     // cout << marks[1] << endl;
//     // cout << marks[2] << endl;
//     // cout << marks[3] << endl;
//     // cout << marks[4] << endl;
//     return 0;
// }




// int main(){

//     int size = 5;
//     int marks[size];
//     for(int i = 0; i < size; i++){
//         cin >> marks[i];
//     }

//     for(int i = 0; i<size; i++ ){
//         cout << marks[i]<< endl;
//     }
    
//     return 0;
// }


// int main(){
//     int nums[] = {23,432,53,13,-452,24};
//     int size  = 6;
//     int smallest = INT_MAX;

//     // for(int i = 0; i < size; i++){
//     //     if(nums[i]< smallest){
//     //         smallest  = nums[i];
//     //     }
//     // }

//     for(int i = 0; i < size; i++){
//         smallest = min(nums[i],smallest);
//     }

//     cout << "smallest = " << smallest << endl;

//     return 0;
// }


// int main(){
//     int nums[] = {23,432,53,13,452,24};
//     int size  = 6;
//     int smallest = INT_MAX;
//     int index = 0;

//     for(int i = 0; i < size; i++){
//         if(nums[i]< smallest){
//             smallest  = nums[i];
//             index = i;
            
//         }
//     }

//     // for(int i = 0; i < size; i++){
//     //     smallest = min(nums[i],smallest);
        
//     // }

//     cout << "smallest = " << smallest << " at index = "<< index << endl;


//     return 0;
// }

int linearSearch(int arr[], int sz, int target){

    for(int i = 0; i < sz; i++){
        if(arr[i] == target){
            return i;
        }
    }
    return -1;
}



// int main(){
//     int arr[] = {768,52,3463,25,643,98,99};
//     int sz = 7;
//     int target = 5;

//     cout << linearSearch(arr,sz,target)<< endl;


//     return 0;
// }

void revArray(int arr[], int sz){
    int start = 0, end = sz-1;
    while(start < end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}

int sumArray(int arr[], int sz){
    int sum = 0;
    for(int i = 0; i<sz; i++){
        sum += arr[i];
    }
    return sum;
}

int prodArray(int arr[], int sz){
    int prod = 1;
    for(int i = 0; i < sz; i++){
        prod*=arr[i];
    }
    return prod;
}

void swapMaxMin(int arr[], int sz){
    int max = INT_MIN;
    int index_max;
    int index_min;
    int min = INT_MAX;
    for(int i = 0; i < sz; i++){
        if(arr[i] < min){
            min = arr[i];
            index_min = i;
        }
        if(arr[i] > max){
            max = arr[i];
            index_max = i;
        }

    }
    swap(arr[index_max],arr[index_min]);
}

// void printUnique(int arr[],int sz){
//     for (int i = 0; i<sz; i++){
//         for ()
//     }
// }

int main(){

    int arr[] = {1,2,3,4,5,6,7};
    int sz = 7;
    cout << "Product is "<<prodArray(arr,sz)<< endl;
    cout << "Sum is "<< sumArray(arr,sz)<< endl;
    swapMaxMin(arr,sz);

    for(int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    revArray(arr,sz);
    for(int i = 0; i < sz; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}