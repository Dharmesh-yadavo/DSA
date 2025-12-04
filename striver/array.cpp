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

void moveZeroes(vector <int> &arr){
    //* Brute force approach:   
    // vector<int> temp(arr.size(), 0);

    //     // Pointer to fill temp
    //     int index = 0;

    //     // Traverse input array
    //     for (int i = 0; i < arr.size(); i++) {
    //         // If non-zero, add to temp
    //         if (arr[i] != 0) {
    //             temp[index] = arr[i];
    //             index++;
    //         }
    //     }

    //     // Copy back temp to original
    //     for (int i = 0; i < arr.size(); i++) {
    //         arr[i] = temp[i];
    //     }

    //     // Return updated array
    //     return arr;

    //* Optimal approach: 
     int j = -1;

        // Find the first zero
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == 0) {
                j = i;
                break;
            }
        }

        // If no zero found, return
        if (j == -1) return;

        // Start from the next index of first zero
        for (int i = j + 1; i < arr.size(); i++) {
            // If current element is non-zero
            if (arr[i] != 0) {
                // Swap with arr[j]
                swap(arr[i], arr[j]);
                // Move j to next zero
                j++;
            }
        }
}

int LinearSearch(vector <int> &arr, int num)
{
    int i;

    // Loop through the array to find the number
    for(i = 0; i < arr.size(); i++)
    {
        // If the current element matches the number, return its index
        if(arr[i] == num)
            return i;
    }

    // If the number is not found, return -1
    return -1;
}

void unionofArr(vector <int> &arr1, vector <int> &arr2 ){
    //* Brute force approach with help of set :   
    // set <int> set; 
    // for(int i = 0; i < arr1.size(); i++){
    //     set.insert(arr1[i]);
    // }
    // for(int j = 0; j < arr2.size(); j++){
    //     set.insert(arr2[j]);
    // }
    // // for(auto it = set.begin(); it != set.end(); it++){
    // //     cout << *it << " ";
    // // }
    //  // Convert set to vector
    //     vector<int> unionArr(set.begin(), set.end());
    //     for(int i = 0; i < unionArr.size(); i++){
    //         cout << unionArr[i] << " "; 
    //     }

    //* Optimal approach : 

    vector<int> Union;

    int i = 0, j = 0;
    int n = arr1.size();
    int m = arr2.size();

    while(i < n && j < m){
        if(arr1[i] < arr2[j]){
            if(Union.empty() || Union.back() != arr1[i]){
                Union.push_back(arr1[i]);
                i++;
            }
        }
        else if (arr1[j] < arr2[i]){
            if(Union.empty() || Union.back() != arr2[j]){
                Union.push_back(arr2[j]);
                i++;
            }
        }
        else {
            if(Union.empty() || Union.back() != arr1[i]){
                Union.push_back(arr1[i]);
                i++;
                j++;
            }
        }

    }

    // Append remaining elements from arr1
        while (i < n) {
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }

    // Append remaining elements from arr2
        while (j < m) {
            if (Union.empty() || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }

    cout << "Final Union Array" ; 
    for (int val : Union) cout << val << " ";

    
}

void intersectionOfArr (vector <int> &arr1, vector <int> &arr2) {
    //* Brute force approach: 
    // vector <int> visited(arr2.size(), 0);
    // vector <int> intersection;
    // for(int i = 0 ; i < arr1.size(); i++){
    //    for(int j = 0 ; j < arr2.size(); j++){
    //     if(arr1[i] == arr2[j] && visited[j] == 0){
    //         intersection.push_back(arr1[i]);
    //         visited[j] = 1;
    //         break;
    //     }
    //     if(arr1[i] < arr2[j]) break;
    //    }  
    // }
    // cout << "Final Intersected Array " << endl  ; 
    // for (int i = 0; i < intersection.size(); i++) {
    //     cout << intersection[i] << " " ;
    // }

    //* Optimal approach: 
    int i = 0, j = 0;
    int n = arr1.size();
    int m = arr2.size();

    vector <int> ans;

    while (i < n && j < m){
        if(arr1[i] < arr2[j]){
            i++;
        }
        else if(arr2[i] < arr1[j]) {
            j++ ;
        }
        else {
           ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }

    cout << "Final Intersected Array " << endl  ; 
    for (int i = 0; i < ans.size(); i++) {
        cout << ans[i] << " " ;
    }


}

void maxmOnes(vector <int> &arr) {
    int max = 0; 
    int count = 1; 
    for(int i = 0; i < arr.size(); i++) {
        int j = i + 1; 
        if(arr[i] == arr[j]){
            count++;
            cout << "j: " << j << " count: "<< count << endl;
            j++;
        };
        if(max < count){
            max = count;
            count = 1; 
        };
    };
    cout << "Maxm 1s are: " << max ;
};

void numaberOccursOnce(vector <int> &arr){
    //* Brute Force Approach: 
    int n = arr.size();
    // for (int i = 0; i < n; i++) {
    //     int num = arr[i]; // current element to check
    //     int cnt = 0;

    //     // Count occurrences of this element
    //     for (int j = 0; j < n; j++) {
    //         if (arr[j] == num)
    //             cnt++;
    //     }

    //     // If it occurs only once, return it
    //     if (cnt == 1) cout << num;
    // }

    //* Better Approach: 
    
    // // Step 1: Find the maximum value in the array
    // int maxi = arr[0];
    // for(int i = 0; i < n; i++){
    //     maxi = max(maxi, arr[i]);
    // }

    // // Step 2: Declare and initialize hash array of size maxi+1
    // vector <int> hash(maxi + 1, 0);

    // // Step 3: Count the frequency of each number
    // for(int i =0; i < n; i++){
    //     hash[arr[i]]++;
    // }

    // // Step 4: Find the element that occurs exactly once
    // for(int i =0; i < n; i++){
    //     if(hash[arr[i]] == 1){
    //         cout << arr[i];
    //     }
    // }
    

    //* Optimal approach: 
    int xorr = 0;

    // XOR all elements. Duplicates cancel out, leaving the single element.
    for (int i = 0; i < n; i++) {
        xorr = xorr ^ arr[i];
    }

    cout << xorr ; 
    
}




int main () {
    int arr[] = {1, 4, 3, 2, 9, 6 };
    int s = sizeof(arr)/ sizeof(arr[0]);
    int k = 2;

    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};
    vector<int> arr3 = {1, 2, 3, 4, 5, 6}; 
    vector<int> arr4 = {1, 1, 1, 2, 2, 3, 3, 3};
    vector <int> arr5 = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    vector <int> arr6 = {1, 2, 3, 4, 5};
    vector <int> arr7 = {2, 3, 4, 4, 5};
    vector <int> arr8 = {1, 1, 0, 1, 1, 1}; 
    vector <int> arr9 = {4,1,2,1,2};

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
    // rotateLeft(arr, s, k );
    // cout << "Array after left rottation " << k << " steps:\n";
    // for(int i = 0; i < s; i++){
    //     cout << arr[i] << " ";
    // }
    // rotateRight(arr, s, k); 
    // cout << "Array after right rottation " << k << " steps:\n";
    // for(int i = 0; i < s; i++){
    //     cout << arr[i] << " ";
    // }

    //! Move all Zeros to the end of the array
    // moveZeroes(arr5) ; 
    // for(int i = 0; i < arr5.size(); i++){
    //     cout << arr[i] << " ";
    // }

    //! Linear Search 
    // int num = 5; 
    // cout << LinearSearch(arr1, num) << endl ; 

    //! Union of Two Sorted Arrays 
    // unionofArr(arr6, arr7); 

    //! Intersection of Two Sorted Arrays 
    // intersectionOfArr(arr6, arr7);
    
    //! Count Maximum Consecutive One's in the array
    // maxmOnes(arr8);

    //! Find the number that appears once, and the other numbers twice
    numaberOccursOnce(arr9);

    return 0;
}