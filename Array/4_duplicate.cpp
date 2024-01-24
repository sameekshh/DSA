/*
Given an integer array nums,
 return true if any value appears at least twice in the array,
  and return false if every element is distinct.

Example 1:

Input: nums = [1,2,3,1]
Output: true
Example 2:

Input: nums = [1,2,3,4]
Output: false
Example 3:

Input: nums = [1,1,1,3,3,4,3,2,4,2]
Output: true
*/
#include <iostream>
#include <algorithm>
#include <set>


using namespace std;


//Using set STL
void is_dupe_method1(int* arr,int arr_size){
    std::set<int> unique_elements;

    for(int i=0;i<arr_size;i++){
        if(!unique_elements.insert(arr[i]).second) {   // The insert function returns a pair where the first element of the pair is an iterator pointing to the inserted element or the already existing element if the insertion fails due to duplication.
            cout<<"true";
            return;
        }
    }

    cout<<"false";
    return;
}

//Using has table
void is_dupe_method2(int* arr,int arr_size){
    int hash_table[arr_size]={0};

    for(int i=0;i<arr_size;i++){
        if(hash_table[arr[i]]==1) {
            cout<< "true";
            return;
        }
        else{
            hash_table[arr[i]]=1;
        }
    }
    cout<<"false";
    return;
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
    is_dupe_method2(input_arr,arr_size);
    

    return 0;
}