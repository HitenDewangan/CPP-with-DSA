#include<iostream>
using namespace std;

//====================================Reverse Array in place ==============
void reverse(int arr[], int n){

    for(int i=0; i<n/2; i++){
        swap(arr[i], arr[n-i-1]);
    }
}
//==================================== Reverse in Range ================
void reverseRange(int arr[], int l, int r){

    while(l<r){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}
//==================================== Print Array ================
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//============================================================================
int main(){

    int n;
    cin>>n;

    int *arr = new int[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    reverse(arr, n);
    print(arr, n);

    reverseRange(arr, 3, 7);
    print(arr, n);


    

}