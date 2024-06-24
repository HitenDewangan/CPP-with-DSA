#include<iostream>
using namespace std;

//============================= Segregate 0s and 1s ===================================
void segregate(int arr[], int n){

    int n0 = 0, n1 = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 0) n0++;
        else    n1++;
    }

    for(int i=0; i<n0; i++){
        arr[i] = 0;
    }

    for(int i=0; i<n1; i++){
        arr[n-i-1] = 1;
    }
}

//============================= Segregate 0s and 1s using swap ================Better approach==============
void segregateSwap(int arr[], int n){
    int i = 0, j = n-1;

    while(i < j){
        while(arr[i] == 0 && i < j) i++;
        while(arr[j] == 1 && i < j) j--;

        if(i < j)
            swap(arr[i], arr[j]);
    }
}

void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//============================= Main Function ==============================

int main(){
    int arr[] = {1, 0, 0, 1, 1, 0, 1, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    segregate(arr, n);

    print(arr, n);

}
