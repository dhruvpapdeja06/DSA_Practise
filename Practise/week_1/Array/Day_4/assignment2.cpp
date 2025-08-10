#include <iostream>
using namespace std;

//  using loop at last sort in increasing order

int main(){
    int arr[5] = {4,6,2,1,9};
    for(int i=4; i>0; i--){
        for(int j=i-1; j>=0; j--){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"Sorted Array is : ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}