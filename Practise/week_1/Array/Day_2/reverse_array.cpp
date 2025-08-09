#include <iostream>
using namespace std;

// Reverse an array 

int main(){

    int arr[8] = { 1,2,3,4,5,6,7,8}; // 8,7,6,5,4,3,2,1
    int temp[8];

    int end = 7;
    int start = 0;

    while(end >= 0){
        temp[start] = arr[end];
        end --;
        start++;
    }
    // print the temp array
    cout<<"Temp Array is : "; 
    for (int i=0; i<8; i++){
        cout<<temp[i]<<" ";
    }

    int i = 0;
    int j = 0;
    while (i < 8){
        arr[i] = temp[j];
        i++;
        j++;
    }

    cout<<"\nReverse Array is : ";
    for(int k=0; k<8; k++){
        cout<<arr[k]<<" ";
    }

    // Second Approach to solve the problem 

    int arr1[5] = {3,8,9,1,7};
    int first = 0;
    int last = 4;
    int aux;
    while( first < last){
        aux = arr1[first];
        arr1[first] = arr1[last];
        arr[last] = aux;
        first++;
        last--;
    }
    for(int i=0;i<5; i++){
        cout<<"\nOptimal way : "<<arr1[i];
    }

}