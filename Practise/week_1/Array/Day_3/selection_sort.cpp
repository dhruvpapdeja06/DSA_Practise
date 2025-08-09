#include <iostream>
using namespace std;

// Sorting --> Sorting is the process of arranging the data in ascending or descending order.

// Selection sort --> (Find the minimum element and put it to the starting)

// For Increasing or Ascending order

int main(){
    int arr[1000];
    int n;
    cout<<"Enter the size of an array : ";
    cin>>n;
    cout<<"Enter the elements in the array"<<" ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int index;
    // int arr[6] = {8,2,6,9,1,0};
    for(int i=0; i<n-1; i++){
        index = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[index]){
                index = j;
            }
        }
        swap(arr[index],arr[i]);
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
}