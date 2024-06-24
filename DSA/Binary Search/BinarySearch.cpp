/*Given an array sorted in decreasing order & given a target. Find out if it exists in the array using binary search.
*/

#include<iostream>
using namespace std;

bool binarySearch(int arr[], int n, int target){
    
    int low=0, high=n-1;
    

    while(low<=high){
        int mid = (low+high)/2;

        if(arr[mid] == target) return true;

        else if(target < arr[mid]) low = mid+1;

        else    high = mid-1;

    }
    return false;
}

int main(){
    int arr[] = {94, 82, 73, 68, 58, 43, 36, 24, 12, 7, -2};
    int target = 35;
    int n = sizeof(arr)/sizeof(arr[0]);

    cout<<binarySearch(arr, n, target);

}