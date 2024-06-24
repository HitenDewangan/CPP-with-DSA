// find the peak element in a mountain array
#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& arr) {

        int low = 1, high = arr.size()-2;
        while(low <= high){
            int mid = low+(high-low)/2;

            if(arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]){
                return mid;
            }
            else if(arr[mid] > arr[mid-1] && arr[mid] <arr[mid+1]){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return -1;

    }

int main(){
    // 1 2 3 4 5 4 3 2 1
    vector<int> arr = {1, 2, 3, 4, 5, 4, 3, 2, 1};
    cout<<"Peak Index in Mountain Array: "<<peakIndexInMountainArray(arr);
}