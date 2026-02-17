#include <bits/stdc++.h>
using namespace std;

int binarySearch (vector<int> &arr, int s, int k) {
    int low = 0; 
    int high = s - 1; 
    while(low <= high){
        int mid = (low + high) / 2; 
        if(arr[mid] == k){
            return mid; 
        }
        else if(k > arr[mid]){
            low = mid + 1; 
        }
        else {
            high = mid - 1; 
        }
    }
    return -1; 
}

int lowerBound (vector<int> &arr, int s, int k) {
    int low = 0; 
    int high = s - 1;
    int ans = s;  
    while(low <= high){
        // int mid = (low + high) / 2; 
        // if(arr[mid] == k){
        //     return mid; 
        // }
        // else if(k > arr[mid]){
        //     low = mid + 1; 
        //     if(arr[low] >= k){
        //         return low;
        //     }
        // }
        // else {
        //     high = mid - 1; 
        //     if(arr[high] < k) return mid; 
        //     else return high;
        // }
        int mid = (low + high) / 2;  

        if (arr[mid] >= k) {
            ans = mid;          
            high = mid - 1;      
        } else {
            low = mid + 1;       
        }
    }
    return ans; 
}

int upperBound(vector<int> &arr, int s, int k){

    //! Brutte force approach: 
    // for (int i = 0; i < s; i++) {
    //     if (arr[i] > k) {
    //         return i; 
    //     }
    // }
    // return s; 

    //! Optimal approach: 
    int low = 0; 
    int high = s - 1;
    int ans = s;  
    while(low <= high){
        int mid = (low + high) / 2;  

        if (arr[mid] > k) {
            ans = mid;          
            high = mid - 1;      
        } else {
            low = mid + 1;       
        }
    }
    return ans; 
}

int findFloor(vector<int> &arr, int n, int x) {
        int low = 0, high = n - 1;
        int ans = -1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (arr[mid] <= x) {
                ans = arr[mid];     // Potential floor
                low = mid + 1;      // Search right side
            } else {
                high = mid - 1;     // Search left side
            }
        }
        return ans;
}

int findCeil(vector<int> &arr, int n, int x) {
    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;
        if (arr[mid] >= x) {
            ans = arr[mid];     // Potential ceil
            high = mid - 1;     // Search left side
        } else {
            low = mid + 1;      // Search right side
        }
    }
    return ans;
}

int main () {
    vector<int> arr1 = {3, 4, 4, 7, 8, 10};
    int s1 = arr1.size(); 
    //! Search X in sorted array
    // cout << binarySearch(arr1, s1, 15); 

    //! Lower bound 
    // cout << lowerBound(arr1, s1, 19);

    //! Upper bound
    // cout << upperBound(arr1, s1, 15);

    //! Floor and Ceil in Sorted Array
    // cout << findFloor(arr1, s1, 8) << endl;
    // cout << findCeil(arr1, s1, 8);

    



    return 0; 
}