#include <iostream>
using namespace std;


// Array --> Declaration and Initialization 

int main(){

    // Declaration of an array
    int arr[4];

    // Initialization of int type array
    int arr1[4] = {5,7,2}; //output 5 7 2 0
    for (int i=0; i<4; i++){
        cout<<arr1[i]<<" ";
    }

    int arr2[5] = {0}; // 0 0 0 0 0
    cout<<"\nArray is : ";
    for(int j=0; j<5; j++){
        cout<<arr2[j]<<" ";
    }

    int arr3[] = {2,4,6,2,6}; // 2 4 6 2 6 0 0 0 
    cout<<"\nArray is : ";
    for(int k=0; k<8; k++){
        cout<<arr3[k]<<" ";
    }

    //access value more than size
    int arr4[4] = {3,6,88}; //garbage value
    cout<<"\nAccessing Array : ";
    for (int j=0; j<8; j++){
        cout<<arr4[j]<<" ";
    }


    // Accessing array more than size
    char c[5] = {'a','g','e','d'}; //give the garbage value
    cout<<"\nChar array is : ";
    for (char i=0; i<7; i++){
        cout<<c[i]<<" ";
    }

    // float type of array
    float f[4] = {1.2,5.4,7.7 , 9.999};
    cout<<"\nFLoat array is : ";
    for (int i=0; i<6; i++){
        cout<<f[i]<<" ";
    }

}