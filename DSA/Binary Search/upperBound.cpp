// upperbound - returns the index of the first element which is strictly greater than the target.

#include<iostream>
using namespace std;

int upperBound(int arr[], int n, int target){
    int low = 0, high = n-1;
    int ub;
    while(low <= high){
        int mid = (low+high)/2;
        if(arr[mid] > target){
            ub = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ub;
}

int main(){
    int arr[] = {1, 2, 2, 2, 2, 2, 3, 4, 4, 4, 4, 5, 6};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<upperBound(arr, n, 0)<<endl;

}