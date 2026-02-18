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

int lastOccurence (vector<int> &arr, int s, int k) {
    //! Brutte force approach: 
    // int ans = -1; 
    // for(int i = s - 1; i >= 0; i--){
    //     if(arr[i] == k){
    //         ans = i; 
    //         break;
    //     }
    // }
    // return ans;

    //! Optimal approach: 
    int start = 0; 
    int end = s - 1; 
    int ans = -1; 
    while(start <= end){
        int mid = (start + end) / 2; 
        if(arr[mid] == k){
            ans = mid; 
            start = mid + 1; 
        }
        else if (arr[mid] > k){
            end = mid - 1;
        }
        else {
            start = mid + 1; 
        }
    }
    return ans ;
    
}

int firstOccurence (vector<int> &arr, int s, int k) {
    int start = 0; 
    int end = s - 1; 
    int first = -1; 
    while(start <= end){
        int mid = (start + end) / 2; 
        if(arr[mid] == k){
            first = mid; 
            end = mid - 1; 
        }
        else if (arr[mid] > k){
            end = mid - 1;
        }
        else {
            start = mid + 1; 
        }
    }
    return first ;
}

int countOccurence (vector<int> &arr, int s, int k){
    //! Brutte force approach: 
    // int cnt = 0; 
    // for(int i = 0; i < s; i++){
    //     if(arr[i] == k){
    //         cnt++; 
    //     }
    // }
    // return cnt; 

    //! Optimal approach: 
    int a = firstOccurence(arr, s, k); 
    int b = lastOccurence(arr, s, k); 
    return (b - a) + 1 ;
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

int searchInSortedArray1(vector<int> &arr, int s, int k){
    int low = 0, high = s - 1, ans = -1;
    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] == k){
            return ans = mid;
        }
        else if(arr[low] <= arr[mid]){
            if(arr[low] <= k && arr[mid] >= k){
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        } 
        else {
            if(arr[mid] <= k && arr[high] >= k){
                low = mid + 1;
            }
            else {
                high = mid - 1;
            } 
        }
    }
    return ans; 
}

bool searchInSortedArray2(vector<int> &arr, int s, int k){
    int low = 0, high = s - 1, ans = -1;
    while(low <= high){
        int mid = (low + high) / 2;

        if(arr[mid] == k){
            return 1;
        }
        else if(arr[mid] == arr[low] && arr[mid] == arr[high]){
            low++;
            high--;
            continue;
        }
        else if(arr[low] <= arr[mid]){
            if(arr[low] <= k && arr[mid] >= k){
                high = mid - 1;
            }
            else {
                low = mid + 1;
            }
        } 
        else {
            if(arr[mid] <= k && arr[high] >= k){
                low = mid + 1;
            }
            else {
                high = mid - 1;
            } 
        }
    }
    return 0; 
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

    vector<int> arr2 = {3, 4, 13, 13, 13, 20, 40};
    int s2 = arr2.size();

    //! Last occurrence in a sorted array
    // cout << lastOccurence(arr2, s2, 13); 

    //! Count Occurrences in Sorted Array
    // cout << countOccurence(arr2, s2, 13); 

    //! Search in rotated sorted array-I
    vector<int> arr3 = {4, 5, 6, 7, 0, 1, 2}; 
    int s3 = arr3.size(); 
    // cout << searchInSortedArray1(arr3, s3, 0); 

    vector<int> arr4 = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6}; 
    int s4 = arr4.size(); 
    cout << searchInSortedArray2(arr4, s4, 3); 

    



    return 0; 
}