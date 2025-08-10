#include <iostream>
using namespace std;

// sort the char array using bubble sort

int main(){
    char arr[5] = {'c','d','a','b','e'};
    for(int i=3; i>=0; i--){
        for(int j=0; j<=3; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    // Print the array
    cout<<"Sorted array is : ";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}