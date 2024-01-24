/*
Given an integer array nums, find the 
subarray
 with the largest sum, and return its sum.

 Example 1:

Input: nums = [-2,1,-3,4,-1,2,1,-5,4]
Output: 6
Explanation: The subarray [4,-1,2,1] has the largest sum 6.
Example 2:

Input: nums = [1]
Output: 1
Explanation: The subarray [1] has the largest sum 1.
Example 3:

Input: nums = [5,4,-1,7,8]
Output: 23
Explanation: The subarray [5,4,-1,7,8] has the largest sum 23.
*/
#include <iostream>

using namespace std;

void max_subarray_sum(int* arr,int n){
    int max_sum=arr[0];
    int local_max = 0;

    for (int i = 0; i < n; i++)
    {
        if( (local_max + arr[i]) <= 0){
            local_max = 0;
        }
        else {
            local_max += arr[i];
            if(local_max > max_sum) max_sum = local_max;
        }
    }

    cout<< max_sum;
    
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
    max_subarray_sum(input_arr,arr_size);
    

    return 0;
}