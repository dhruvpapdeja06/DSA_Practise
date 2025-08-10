#include <iostream>
using namespace std;


// Bubble sort algo --> 1st Method 
// If array is already sorted in this case T.C = Theta of (n)
int main(){
    // arr[5] = {4,8,2,1,5}
    int arr[1000];
    int n;
    cout<<"Enter the size of an Array : ";
    cin>>n;
    cout<<"Enter elements in the Array : ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    for(int i=n-2; i>=0; i--){
        bool swapped = 0;
        for(int j=0; j<=i; j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = 1;
            }
        }
        if(swapped == 0){
            break;
        }
    }
    cout<<"\nSorted Array is :";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}