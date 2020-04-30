#include<stdio.h> 
#include<stdlib.h> 
#include<iostream>
  using namespace std;
int bitonic(int arr[], int n) 
{ 
    int inc[n]; // Length of increasing subarray ending at all indexes 
    int dec[n]; // Length of decreasing subarray starting at all indexes 
    int i, max; 
  
    // length of increasing sequence ending at first index is 1 
    inc[0] = 1; 
  
    // length of decreasing sequence starting at last index is 1 
    dec[n-1] = 1; 
  
    // Step 1) Construct increasing sequence array 
    for (i = 1; i < n; i++) 
       inc[i] = (arr[i] >= arr[i-1])? inc[i-1] + 1: 1; 
  
    // Step 2) Construct decreasing sequence array 
    for (i = n-2; i >= 0; i--) 
       dec[i] = (arr[i] >= arr[i+1])? dec[i+1] + 1: 1; 
  
    // Step 3) Find the length of maximum length bitonic sequence 
    max = inc[0] + dec[0] - 1; 
    for (i = 1; i < n; i++) 
        if (inc[i] + dec[i] - 1 > max) 
            max = inc[i] + dec[i] - 1; 
  
    return max; 
} 
  
/* Driver program to test above function */
int main() 
{ 
    int t;
    cin>>t;
    while(t--){
    int n;
    cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }
           cout<<bitonic(arr, n)<<endl; 
    
} 
return 0;
}