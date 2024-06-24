#include<iostream>
using namespace std;

void reverse(int arr[], int l, int r){
    while(l<r){
        swap(arr[l], arr[r]);
        l++;
        r--;
    }
}

void rotateClockwise(int arr[], int n, int k){
    k %= n;
    reverse(arr, 0, n-1);
    reverse(arr, 0, k-1);
    reverse(arr, k, n-1);
}

void rotateAntiClockwise(int arr[], int n, int k){
    k %= n;
    reverse(arr, 0, n-1);
    reverse(arr, 0, n-k-1);
    reverse(arr, n-k, n-1);
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


// ======================== Driver Code ==========================
int main(){
    int arr[] = {5, 8, 9, 3, 20, 0, 2, 3, 3, 1};
    int n = sizeof(arr)/sizeof(arr[0]);

    int k = 3;

    rotateClockwise(arr, n, k);

    print(arr, n);

}

