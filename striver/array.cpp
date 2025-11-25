#include <bits/stdc++.h>
using namespace std;

int largestElement(vector<int> &arr) {
    //* Brute force approach: 
    // sort(arr.begin(), arr.end());
    // return arr[arr.size() - 1]

    //* Optimal approach: 
    int max = arr[0];
    for(int i = 0; i < arr.size() ; i++ ){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    return max; 
}

int secondLargestElement (vector<int> &arr) {
//* Brute force approach: 
// sort(arr.begin(), arr.end());
// return arr[arr.size() - 2];

//* Better approach: 
    // int max = arr[0];
    // int sLargest = -1 ; 
    // for(int i = 0; i < arr.size() ; i++ ){
    //     if(max < arr[i]){
    //         max = arr[i];
    //     }
    // }
    // for(int i = 0; i < arr.size(); i++){
    //     if(arr[i] > sLargest && arr[i] != max){
    //         sLargest = arr[i];
    //     }
    // }
    // return sLargest; 

//* Optimal approach: 
    int max = arr[0];
    int sLargest = -1 ; 
    for(int i = 0; i < arr.size() ; i++ ){
        if(arr[i] > max) {
            sLargest = max;
            max = arr[i];
        } 
        else if (arr[i] > sLargest && arr[i] != max){
            sLargest = arr[i];
        }
    }
    return sLargest ; 
}

int isArraySorted(vector<int> &arr){

//* Brute force approach:
    // for(int i = 0; i < arr.size(); i++){
    //     for(int j = i + 1; j < arr.size(); j++){
    //         if(arr[j] < arr[i]){
    //             return false; 
    //         }
    //     }
    //     return true; 
    // }

//* Optimal approach: 
    for(int i = 0 ; i < arr.size(); i++){
        if (arr[i + 1] < arr[i]) {
            return false; 
        }
    }
    return true; 
    
}

int main () {
    // int arr = [1, 4, 3, 2, 9, 4] ; 
    // int s = sizeof(arr)/ sizeof(arr[0]);
    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};
    vector<int> arr3 = {1, 2, 3, 4, 5, 6}; 

    //! Find the largest element in the Array: 
    // cout << "The Largest element in the array is: " << largestElement(arr2) << endl;

    //! Second largest element in an Array:
    // cout << "The Second Largest element in the array is: " << secondLargestElement(arr2) << endl;

    //! check if array is sorted : 
    cout << "Check if the array is Sorted: " << isArraySorted(arr3) << endl;



    return 0;
}