#include <iostream>
using namespace std;

// Decreasing order -- selection sort

int main(){
    int temp;
    int index;
    int arr[5] = {1,9,3,6,5};
    for(int i=0; i<4; i++){
        index=i;
        for(int j=i+1; j<5; j++){
            if(arr[j] > arr[index]){
                index = j;
            }    
        }
        temp = arr[i];
        arr[i] = arr[index];
        arr[index] = temp;
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}