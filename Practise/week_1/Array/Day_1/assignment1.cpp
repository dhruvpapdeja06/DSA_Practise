// Take 20 elements from user input and find its sum with the help of an array.

#include <iostream>
using namespace std;

int main(){
    int arr[1000];
    int n;
    int sum = 0;
    cout<<"Enter the size of an array : ";
    cin>>n;
    cout<<"Enter the elements in the array : ";
    for(int i=0; i<20; i++){
        cin>>arr[i];
    }

    // Print the array 
    cout<<"Array is : ";
    for(int i=0; i<20; i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<20; i++){
        sum += arr[i];
    }
    
    cout<<sum; 
}