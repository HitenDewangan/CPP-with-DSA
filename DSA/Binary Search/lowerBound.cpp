// lowerbound - returns the index of the first element which is equal or just greater than the target.

#include<iostream>
using namespace std;

int lowerBound(int arr[], int n, int target){
    int low = 0, high = n-1;
    int lb;
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
    return lb;
}

int main(){
    int arr[] = {1, 2, 2, 2, 2, 2, 3, 4, 4, 4, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<lowerBound(arr, n, 1)<<endl;

}