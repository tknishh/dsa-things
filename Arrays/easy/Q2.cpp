// Write a program to reverse an array or string

// Approach: mark start and end nodes and replace them at each step.

#include<iostream>
using namespace std;

// normal way
void reverseArray(int arr [], int start, int end){
    
    while(start<end){
        int temp;
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

// Recursive way
/* 
void reverseArray(int arr [], int start, int end){
    
    if(start >= end)
    retuurn;

    int temp;
    temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    
    reverseArray(arr, start++, end--);
}
*/

void printArr(int arr[], int size){
    for(int i=0; i < size; i++ ){
        cout<< " " << arr[i];
    }
    cout<<endl;
}

int main(){
    int arr[] = {1,2,6,7,9};
    int size = sizeof(arr)/sizeof(arr[0]);
    printArr(arr, size);
    reverseArray(arr, 0, size-1);
    cout << "Reverse array: "<<endl;
    printArr(arr, size);
    
    return 0;
}