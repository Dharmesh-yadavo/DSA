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

int duplicateElementsInArray (vector<int> &arr) {
    //* Brute force approach:
    // set <int> set; 
    // int index = 0;
    // for(int i = 0; i < arr.size(); i++){
    //     set.insert(arr[i]);
    // }
    // for(auto it: set){
    //     arr[index] = it; 
    //     index ++;
    // }
    // return index; 

    //* Optimal approach:
    // Pointer for the position of last unique element
        int i = 0;

        // Traverse the array starting from the second element
        for (int j = 1; j < arr.size(); j++) {
            // If current element is different from last unique element
            if (arr[j] != arr[i]) {
                // Move pointer for unique element forward
                i++;
                // Place the new unique element at the next position
                arr[i] = arr[j];
            }
        }

    // i is index of last unique element, count = i + 1 
    return i + 1;

}

int rotateArrayByOne(vector <int> &arr) {
    int temp = arr[0];
    for(int i = 1; i < arr.size(); i++){
        arr[i-1] = arr[i]; 
    }
    arr[arr.size() - 1] = temp;

    for (int num : arr) {
        cout << "Left Rotate the Array by One: " << num << " "; 
    }

    return 0;

}

    void reverseArray(int nums[], int start, int end) {
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }

void rotateLeft(int arr[], int s, int k){

    //* Brute force approach:
    // // if k is greater than like size is 7 and k is 10 then k = 7 + 3 means only 3 rotation
    // k = k % s ; 
    // int temp[k];

    // // storing first k elements in an array 
    // for(int i = 0; i < k; i++){
    //     temp[i] = arr[i];
    // }

    // // shifting all other elements of arr
    // for(int i = k; i < s; i++){
    //     arr[i - k] = arr[i];
    // }

    // // copy back the elements to last 
    // for (int i = 0; i < k; i++) {
    //     arr[s - k + i] = temp[i];
    // }

    //* Optimal approach 
    reverseArray(arr, 0, k - 1);
    reverseArray(arr, k, s - 1);
    reverseArray(arr, 0, s - 1);
}

    void rotateRight(int arr[], int s, int k) {

        // // Normalize k if greater than n
        // k = k % s;

        // // Store last k elements in a temporary array
        // int temp[k];
        // for (int i = s - k; i < s; i++) {
        //     temp[i - s + k] = arr[i];
        // }

        // // Shift the first n-k elements to the right by k steps
        // for (int i = s - k - 1; i >= 0; i--) {
        //     arr[i + k] = arr[i];
        // }

        // // Copy back the k elements to the start
        // for (int i = 0; i < k; i++) {
        //     arr[i] = temp[i];
        // }

        //* Optimal approach
        reverseArray(arr, 0, s - 1);
        reverseArray(arr, 0, k - 1);
        reverseArray(arr, k, s - 1);
    }


int main () {
    int arr[] = {1, 4, 3, 2, 9, 6 };
    int s = sizeof(arr)/ sizeof(arr[0]);
    int k = 2;

    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};
    vector<int> arr3 = {1, 2, 3, 4, 5, 6}; 
    vector<int> arr4 = {1, 1, 1, 2, 2, 3, 3, 3};

    //! Find the largest element in the Array: 
    // cout << "The Largest element in the array is: " << largestElement(arr2) << endl;

    //! Second largest element in an Array:
    // cout << "The Second Largest element in the array is: " << secondLargestElement(arr2) << endl;

    //! check if array is sorted : 
    // cout << "Check if the array is Sorted: " << isArraySorted(arr3) << endl;

    //! remove duplicates in place from sorted array:
    // cout << "Remove duplicates from array and tell the count: " << duplicateElementsInArray(arr4) << endl;

    //! Left Rotate the Array by One
    // rotateArrayByOne(arr2) ;

    //! Rotate array by k elements 
    rotateLeft(arr, s, k );
    cout << "Array after left rottation " << k << " steps:\n";
    for(int i = 0; i < s; i++){
        cout << arr[i] << " ";
    }
    rotateRight(arr, s, k); 
    cout << "Array after right rottation " << k << " steps:\n";
    for(int i = 0; i < s; i++){
        cout << arr[i] << " ";
    }
    



    return 0;
}