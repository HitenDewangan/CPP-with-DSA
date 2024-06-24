// Print the product of array elements which are not equal to zero
#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int *arr = new int [n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int prod = 1;
    for(int i=0; i<n; i++){
        if(arr[i] != 0){
            prod *= arr[i];
        }
    }
    cout<<prod;
}