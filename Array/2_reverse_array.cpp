//Given an array (or string), the task is to reverse the array/string.

/*
Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}

*/


#include <iostream>
#include <algorithm>

using namespace std;

//Method-1: using function
void reverse_array_method1(int* arr,int n){
    std::reverse(arr,arr+n);
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
}

//Method-2: using the swap method
void reverse_array_method2(int* arr,int n){
    for(int i=0; i< n/2;i++) swap(arr[i],arr[n-1-i]);
    for(int i=0;i<n;i++) cout<<arr[i]<<" "; //print
}


int main(void){
    int arr_size;
    //cout<<"Type in array size: "; 
    cin>>arr_size;
    int input_arr[arr_size];
    for(int& i:input_arr) cin>>i;

    #ifdef DEBUG_PRINTS
    cout<<"The input array:\n";
    for(int& i:input_arr) cout<<i<<" ";
    cout<<endl;
    #endif

    // Write the function here
    reverse_array_method2(input_arr,arr_size);
    

    return 0;
}