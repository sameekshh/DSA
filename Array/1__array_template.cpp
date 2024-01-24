
#include <iostream>

using namespace std;

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
    
    

    return 0;
}