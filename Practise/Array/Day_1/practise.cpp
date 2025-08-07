#include <iostream>
#include <climits>
using namespace std;

int main(){

    // find the minimum element in the array
    // first think about the edge cases like --> contains only positive elements 
    int arr[5] = {4,7,9,1,0};
    int ans = arr[0];
    for (int i=0; i<5; i++){
        if (arr[i+1] < ans ){
            ans = arr[i + 1];
        }
    }
    cout<<ans;

    // Maximum element from the array
    int max[5] = {4,88,99,889,123};
    int maxElement = arr[0];
    for (int i=0; i<5; i++){
        if (max[i+1] > maxElement){
            maxElement = max[i+1];
        }
    }
    cout<<"\nmaxElement Is : "<<maxElement;

    // Another case if array contains negative no 
    int arr2[6] = {4,-4,-8,-1,-9,9};
    int result = INT_MAX;
    for(int i=0; i<6; i++){
        if (arr2[i] < result){
            result = arr2[i];
        }
    }
    cout<<"\nMinimum Number is : "<<result;


    // Maximum no if negative no present
    int m[] = {-3, 0, 7, 99,-888, 993938, 38383};
    int maximum = INT_MIN;
    for (int i=0; i<7; i++){
        if( m[i] > maximum){
            maximum = m[i];
        }
    }
    cout<<"\nMaximum Element is : "<<maximum;
}