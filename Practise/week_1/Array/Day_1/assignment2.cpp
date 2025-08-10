//  Calculate the average of elements in an array of size 18.

#include <iostream>
using namespace std;

int main(){
    int avg;
    int sum = 0;
    int arr[18] = {4,8,2,9,1,5,88,99,1,34,25,32,23,43,98,16,17,18};
    for(int i=0; i<18; i++){
        sum = sum + arr[i];
    }

    cout<<"Sum is : " <<sum <<endl;
    avg = sum / 18;
    cout<<"Average is : " <<avg << endl;
}