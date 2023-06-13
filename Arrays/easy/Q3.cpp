// Maximum Subarray

// Approach: Kadane's Algorithm. calculate sum of all elements until certain point, if it is more than max_so_far update it.

#include<iostream>
using namespace std;

int maxSubArray(int arr, int n){

       int max_so_far = INT_MIN;
       int max_ending_here = 0;

       for(int i=0; i<n; i++){
           max_ending_here = max_ending_here + arr[i];
           if(max_so_far < max_ending_here)
           max_so_far = max_ending_here;

           if(max_ending_here<0)
           max_ending_here=0;
       }
       return max_so_far;
    }


int main(){
    int arr[] = {1,-5,6,1,-8,4,-6,9};
    int size = sizeof(arr)/sizeof(arr[0]);

    maxSubArray(arr[], size);
}
