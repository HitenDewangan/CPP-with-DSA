#include<iostream>
using namespace std;

void printArray(int arr[], int n){
    arr[1] = 100;
}

int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    printArray(arr, 5);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
}