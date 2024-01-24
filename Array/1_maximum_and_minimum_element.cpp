/*Maximum and minimum of an array using minimum number of comparisons

Given an array of size N. 
The task is to find the maximum 
and the minimum element of the array using the minimum number
of comparisons.

Input: arr[] = {3, 5, 4, 1, 9}
Output: Minimum element is: 1
              Maximum element is: 9

Input: arr[] = {22, 14, 8, 17, 35, 3}
Output:  Minimum element is: 3
              Maximum element is: 35

*/

#include <iostream>
#include <algorithm>

using namespace std;

/*keep the function here*/

// Method-1 : Using the api from algorithm header
void min_max_method1(int* arr,int arr_size){
    cout<<*std::min_element(arr,arr+arr_size); cout<<endl ;
    cout<<*std::max_element(arr,arr+arr_size);
}

//Method-2 : Using the for loop
void min_max_method2(int* arr,int arr_size){
    int min = arr[0],max = arr[0];
    for(int i=0;i<arr_size;i++){
        if(arr[i]<min) min = arr[i];
        if(arr[i]>max) max = arr[i];
    }
    cout<<min<<endl;
    cout<<max;
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
    min_max_method1(input_arr,arr_size);
    

    return 0;
}