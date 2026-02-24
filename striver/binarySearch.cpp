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

int minInRotatedSortedArray(vector<int> &arr, int s){
    int low = 0;
    int high = s - 1; 
    int mini = INT16_MAX; 
    while(low <= high){
        int mid = (low + high) / 2;
        if(arr[low] <= arr[mid]){
            mini = min(mini, arr[low]);
            low = mid + 1;
        }
        else {
            mini = min(mini, arr[mid]);
            high = mid - 1;
        }
    }
    return mini;
}

int howManyTimesArrayIsRotated(vector<int> &arr, int s) {
    int low = 0;
    int high = s - 1; 
    int mini = INT_MAX; 
    int index = -1; 
    
    //! 1st approach: 
    // while(low <= high){
    //     // If entire array is already sorted
    //     if(arr[low] <= arr[high]){
    //         if(arr[low] < mini){
    //             mini = arr[low];
    //             index = low;
    //         }
    //         break;
    //     }
    //     int mid = (low + high) / 2;
    //     // Left half sorted
    //     if(arr[low] <= arr[mid]){
    //         if(arr[low] < mini){
    //             mini = arr[low];
    //             index = low;
    //         }
    //         low = mid + 1;
    //     }
    //     // Right half sorted
    //     else{
    //         if(arr[mid] < mini){
    //             mini = arr[mid];
    //             index = mid;
    //         }
    //         high = mid - 1;
    //     }
    // }
    // return index;

    //! 2nd approach: 
    while (low < high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] > arr[high])
            low = mid + 1;
        else
            high = mid;
    }

    return low;
}

int searchSingleElementInSortedArray(vector<int> &arr, int s){
    if(s == 1) return arr[0]; 
    
    if(arr[0] != arr[1]) return arr[0];
    if(arr[s - 1] != arr[s - 2]) return arr[s - 1]; 

    int low = 1; 
    int high = s - 2; 

    while(low <= high){
        int mid = (low + high) / 2; 
        if(arr[mid] != arr[mid + 1] && arr[mid - 1] != arr[mid]){
            return arr[mid]; 
        }
        else if ((mid % 2 == 0 && arr[mid] == arr[mid + 1]) || (mid % 2 == 1 && arr[mid] == arr[mid - 1]) ) {
            low = mid + 1; 
        }
        else {
            high = mid - 1; 
        }
    }
    return -1; 
}

int peakElementInArray(vector<int> &nums, int s){
    if(s == 1) return nums[0]; 

    if(nums[0] > nums[1]) return nums[0]; 
    if(nums[s-1] > nums[s-2]) return nums[s-1];

    int low = 1; 
    int high = s - 2; 
    while(low <= high){
        int mid = (low + high) / 2; 
        if(nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1]) {
            return nums[mid]; 
        }    
        else if (nums[mid - 1] < nums[mid]) {
            low = mid + 1; 
        }
        else {
            high = mid - 1; 
        }
    }
    return 0; 
}

int sqrt(int n) {
    int low = 0; 
    int high = n / 2; 
    int ans = -1; 
    while(low <= high){
        long long mid = low + (high - low) / 2;
        if(mid * mid == n){
            return mid; 
        }
        else if(mid * mid < n){
            low = mid + 1; 
        }
        else {
            high = mid - 1; 
        }
    }
    return ans; 
}  

int nThRoot(int n, int m) {
    int low = 0; 
    int high = n / 2; 
    int ans = -1; 
    while(low <= high){
        long long mid = low + (high - low) / 2;
        long long val = 1; 
        for(int i = 1; i <= m; i++){
            val *= mid;
            if(val > n) break; 
        }
        if(val == n){
            return ans = mid; 
        }
        else if(val < n){
            low = mid + 1; 
        }
        else {
            high = mid - 1; 
        }
    }
    return ans; 
}

int calulateHours(vector<int> &arr, int s, int k){
    int hours = 0; 
    for(int i = 0; i < s; i++){
        hours += (arr[i] + k - 1) / k; 
    }
    return hours; 
}

int kokoEatingBananas(vector<int> &arr, int s, int h){
    //! brutte force approach:
    // int maxVal = *max_element(arr.begin(), arr.end());
    // for(int i = 1 ; i <= maxVal; i++){
    //     int hours = calulateHours(arr, s, i);
    //     if(hours <= h){
    //         return i; 
    //     }
    // }
    // return maxVal;

    //! Optimal approach:
    int maxVal = *max_element(arr.begin(), arr.end());
    int low = 1;
    int high = maxVal;
    int ans = maxVal;
    while(low <= high){
        int mid = low + (high - low) / 2;
        int hours = calulateHours(arr, s, mid);
        if(hours <= h){
            ans = mid; 
            high = mid - 1; 
        }
        else {
            low = mid + 1; 
        }
    }
    return ans; 
}

int isPossible(vector<int> &arr, int s, int m, int k, int day){
    int bouquets = 0; 
    int flowers = 0; 
    for(int i = 0; i < s; i++){
        if(arr[i] <= day){
            flowers++; 
            if(flowers == k){
                bouquets++; 
                flowers = 0; 
            }
        }
        else {
            flowers = 0; 
        }
    }
    return bouquets >= m; 
}

int minDaysForMBouquets(vector<int> &arr, int s, int m, int k){
    long long totalFlowers = 1LL * m * k;
    if (totalFlowers > arr.size()) return -1; // Not enough flowers

    int low = *min_element(arr.begin(), arr.end());
    int high = *max_element(arr.begin(), arr.end());

    //! Brutte force approach:
    // for(int day = low ;  low <= high; ++day){
    //     if(isPossible(arr, s, m, k, day)){
    //         return day; 
    //     }
    // }
    // return -1;

    //! Optimal approach:
    int ans = -1;
    while(low <= high){
        int mid = low + (high - low) / 2;
        if(isPossible(arr, s, m, k, mid)){
            ans = mid; 
            high = mid - 1; 
        }
        else {
            low = mid + 1; 
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

    //! Search in rotated sorted array-II
    vector<int> arr4 = {7, 8, 1, 2, 3, 3, 3, 4, 5, 6}; 
    int s4 = arr4.size(); 
    // cout << searchInSortedArray2(arr4, s4, 3); 

    //! Minimum in Rotated Sorted Array
    vector<int> arr5 = {4,5,6,7,0,1,2,3};
    int s5 = arr5.size();
    // cout << minInRotatedSortedArray(arr5, s5); 

    //! Find out how many times the array has been rotated
    // cout << howManyTimesArrayIsRotated(arr5, s5); 

    //! Search Single Element in a sorted array
    vector <int> arr6 = {1,1,3,5,5,6,6};
    int s6 = arr6.size(); 
    // cout << searchSingleElementInSortedArray(arr6, s6);

    //! Peak element in Array
    vector <int> arr7 = {1,2,1,3,5,6,4}; 
    int s7 = arr7.size();
    // cout << peakElementInArray(arr7, s7); 

    //! Find square root of a number
    // cout << sqrt(16) << endl;

    //! Nth Root of a Number using Binary Search
    // cout << nThRoot(625, 4) << endl;

    //! Koko Eating Bananas
    vector<int> arr8 = {7, 15, 6, 3};
    int s8 = arr8.size();
    cout << kokoEatingBananas(arr8, s8, 8) << endl;

    //! Minimum days to make M bouquets
    vector <int> arr9 = {7, 7, 7, 7, 13, 11, 12, 7};
    int s9 = arr9.size();
    cout << minDaysForMBouquets(arr9, s9, 2, 3) << endl;

    



    return 0; 
}