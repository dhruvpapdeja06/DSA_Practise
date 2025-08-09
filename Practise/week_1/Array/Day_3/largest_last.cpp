#include <iostream>
using namespace std;

// largest at last

int main(){
    int index;
    int arr[5] = {4,3,9,1,7};
    for(int i=4; i>0; i--){
        index = i;
        for(int j=i-1; j>=0; j--){
            if(arr[j] > arr[index]){
                index = j;
            }
        }
        swap(arr[index],arr[i]);
    }
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}