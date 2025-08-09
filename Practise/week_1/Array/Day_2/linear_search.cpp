#include <iostream>
using namespace std;

// Search element in an array
int main(){
    int idx = -1;
    int findElement = 9;
    // Initialize an Array
    int arr[6] = {4,22,8,9,1,9};

    for(int i=0; i<5; i++){
        if(arr[i] == findElement){
            idx = i ;
            break;
        }
    }
    cout<<idx;
}