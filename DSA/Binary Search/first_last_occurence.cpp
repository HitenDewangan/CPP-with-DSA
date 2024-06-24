// find the first and last occurence(index) of an element in a sorted array

#include<iostream>
using namespace std;

int firstOccurence(int arr[], int n, int target){
    int low = 0, high = n-1;
    int lb = n;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(arr[mid] >= target){
            lb = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    if(arr[lb] != target) return -1;
    return lb;

}

int lastOccurence(int arr[], int n, int target){
    int low = 0, high = n-1;
    int ub = n;
    while(low <= high){
        int mid = low+(high-low)/2;
        if(arr[mid] > target){
            ub = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    if(arr[ub-1] != target) return -1;
    return ub-1;
}

int main(){
    // int arr[] = {1, 2, 2, 2, 2, 2, 3, 4, 4, 4, 4, 5, 6};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // int target = 5;
    // cout<<firstOccurence(arr, n, target)<<" ";
    // cout<<lastOccurence(arr, n, target)<<endl;

    int arr[] = {5,7,7,8,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 5;
    cout<<firstOccurence(arr, n, target)<<" ";
    cout<<lastOccurence(arr, n, target)<<endl;
}