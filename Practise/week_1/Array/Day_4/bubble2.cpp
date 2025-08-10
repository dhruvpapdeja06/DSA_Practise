#include <iostream>
using namespace std;

//2nd way of doing

int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of an Array: ";
    cin>>n;
    cout<<"Enter elements inside the Array: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"\n Now the Array is : " ;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-1-i; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }

    // Print the array
    cout<<"\nSorted Array is : ";
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
}