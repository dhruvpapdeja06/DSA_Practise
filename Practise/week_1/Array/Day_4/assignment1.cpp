#include <iostream>
using namespace std;

//Use Bubble Sort Algorithm to sort the array of integers in decreasing order.

int main(){
    int arr[5] = {4,9,0,2,8};
    for(int i=3; i>=0; i--){
        for(int j=0; j<=i; j++){
            if(arr[j] < arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    cout<<"Sorted Array is : ";
    for(int i=0; i<5; i++){
        cout<<arr[i];
    } 
}