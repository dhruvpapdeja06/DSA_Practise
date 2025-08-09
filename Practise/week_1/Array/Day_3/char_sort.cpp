#include <iostream>
using namespace std;


// char array selection sorting

int main(){
    int idx;
    char arr[5] = {'c','a','d','b','e'};
     cout<<"Array is :";
    for(int i=0; i<5; i++){
       cout<<arr[i]<<" ";
    }
    for(int i=0; i<4; i++){
        idx = i;
        for(int j=i+1; j<5; j++){
            if(arr[j] < arr[idx]){
                idx = j;
            }
        }
        swap(arr[idx],arr[i]);
    }
    cout<<"\nSorted Array is :";
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}