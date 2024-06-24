// Maximum Product of three numbers

#include <iostream>
#include <climits>
using namespace std;

int maxProduct(int *arr, int n){
    int max1 = INT_MIN, max2 = INT_MIN, max3 = INT_MIN;
    int min1 = INT_MAX, min2 = INT_MAX;
    for (int i = 0; i < n; i++){
        if (arr[i] > max1){       // 1st maximum
            max3 = max2;
            max2 = max1;
            max1 = arr[i];
        }
        else if (arr[i] > max2){    // 2nd maximum
            max3 = max2;
            max2 = arr[i];
        }
        else if (arr[i] > max3){       // 3rd maximum
            max3 = arr[i];
        }

        if (arr[i] < min1){           // 1st minimum
            min2 = min1;
            min1 = arr[i];
        }
        else if (arr[i] < min2){       // 2nd minimum
            min2 = arr[i];
        }
    }

    return max(max1*max2*max3, max1*min1*min2);
}

int main()
{
    int n;
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    
    cout << maxProduct(arr, n);

    return 0;
}