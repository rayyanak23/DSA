#include <iostream>
#include <vector>

using namespace std;

void bubbleSort(int arr[], int n){ //O(n^2)
    for(int i = 0; i < n-1; i++){
        bool isSwap = false;
        for(int j = 0; j < n-i-1; j++){
            if(arr[j]>arr[j+1]){ //arr[j]<arr[j+1] for descending
                swap(arr[j],arr[j+1]);
                isSwap = true;
            }
        }

        if(!isSwap){// array is already sorted
            return; 
        }
    }

}

void selectionSort(int arr[], int n){//O(n^2)
    for(int i = 0; i < n-1; i++){
        int smallestIdx = i; // starting index of unsorted
        for(int j = i+1; j < n; j++){
            if(arr[j]<= arr[smallestIdx]){ //arr[j]>= arr[smallestIdx] for descending
                smallestIdx = j;
            }
        }

        swap(arr[i], arr[smallestIdx]);
    }
}

void insertionSort(int arr[], int n){

    for(int i = 1; i < n; i++){
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr){ //arr[prev] < curr for descending
            arr[prev+1] = arr[prev];
            prev--;
        }

        arr[prev+1] = curr;
    }
}


void printArray(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
}

int main(){
    int n = 5;
    int arr[] = {4,6,7,2,3};

    insertionSort(arr,n);
    printArray(arr,n);



    return 0;
}
