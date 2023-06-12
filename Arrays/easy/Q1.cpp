// Maximum and minimum of an array using minimum number of comparisons

// Approach: sort array in ascending order and return first and last element

#include<iostream>
#include<algorithm>
using namespace std;

struct Pair{
    int min;
    int max;
};

Pair getMinMax(int arr[], int n){
    Pair minmax;

    sort(arr, arr + n);
    minmax.min = arr[0];
    minmax.max = arr[n-1];

    return minmax;
}

int main(){
    int arr[] = {132,21,3,42,5};
    int arr_size = sizeof(arr)/sizeof(arr[0]);

    Pair minmax = getMinMax(arr, arr_size);

    cout<<"Min: "<<minmax.min<<endl;
    cout<<"Min: "<<minmax.max<<endl;

    return 0;
}