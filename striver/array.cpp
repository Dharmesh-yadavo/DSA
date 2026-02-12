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

void missingNumber (vector <int> arr, int N) {
    //* Brute Force approach: 
    //  // Loop through numbers from 1 to N
    //     for (int i = 1; i <= N; i++) {
    //         int flag = 0; // To check if i exists in array

    //         // Linear search to check if i is in the array
    //         for (int j = 0; j < N - 1; j++) {
    //             if (arr[j] == i) {
    //                 flag = 1; // i is found
    //                 break;
    //             }
    //         }

    //         // If i was not found, it is the missing number
    //         if (flag == 0) cout << i;
    //     }

    //* Better Approach: 
    // // Sum of first N natural numbers using formula: N*(N+1)/2
    //     int sum = (N * (N + 1)) / 2;

    //     // Sum of elements present in the array
    //     int s2 = 0;
    //     for (int i = 0; i < N - 1; i++) {
    //         s2 += arr[i];
    //     }

    //     // The missing number is the difference between expected and actual sum
    //     cout << sum - s2;

    //* Optimal approach: 
    int xor1 = 0, xor2 = 0, ans;

        // XOR all the array elements and numbers from 1 to N-1
        for (int i = 0; i < N - 1; i++) {
            xor2 = xor2 ^ arr[i];      // XOR of array elements
            xor1 = xor1 ^ (i + 1);   // XOR of numbers from 1 to N-1
        }

        xor1 = xor1 ^ N; // Include N in the XOR

        // XOR of xor1 and xor2 gives the missing number
        ans = xor1 ^ xor2;
        cout << ans;

}


void sumOfSubArray (vector <int> &arr, int k) {
    //* Brute force approach: 

    int n = arr.size(); 
    int maxLn = 0; 
    // for(int startIndex = 0; startIndex < n; startIndex++){

    //     for(int endIndex = 0; endIndex < n; endIndex++) {
    //         int sum = 0;
    //         for(int i = startIndex; i <= endIndex; i ++){
    //             sum += arr[i];
    //         }

    //         if(sum == k){
    //             maxLn = max(maxLn, endIndex - startIndex + 1 );
    //         }

    //     }
    // }
    // cout << "Longest Subarray with given Sum K: " << maxLn ;

    //* Optimal approach: 
    int left = 0, right = 0; 
    int sum = arr[0]; 
    while(right < n){

        // If the sum exceeds K, shrink the window
        while(left <= right && sum > k) {
            sum -= arr[left];
            left++;
        }
            
        // store the maximum length
        if(sum == k) {
            maxLn = max(maxLn, right - left + 1);
        }

        right++;
        if(right < n) sum += arr[right];
    }
    cout << "Longest Subarray with given Sum K: " << maxLn ;
}

bool twoSum(vector<int> &arr, int k) {
    //* Brute force approach:

    int n = arr.size();
    
    // for(int i = 0; i < n; i++) {
    //     for(int j = i + 1; j < n; j++) {
    //         if(arr[i] + arr[j] == k) {
    //             return true;
    //         }
    //     }
    // }
    // return false;

    //* Better approach: 

    // unordered_map<int, int> mp;  // Map to store element -> index
    // for(int i = 0; i < n; i++){
    //     int complement = k - arr[i];
    //     // If complement found, return indices
    //     if(mp.find(complement) != mp.end()){
    //         return true ; //  return {mp[complement], i};
    //     }
    //       // Store current element and index
    //     mp[arr[i]] = i;
    // }
    // return false; //  return {-1, -1};  // No pair found

    //* Optimal approach: 

    int left = 0, right = n - 1; 
    sort(arr.begin(), arr.end());
    while(left < right){
        int sum = arr[left] + arr[right];
        if(sum == k){
            return true;
        }
        else if(sum < k) left++;
        else right--;
    }
    return false;
}

void sortZeroOneTwo(vector <int> arr) {
    int n = arr.size(); 
    //* Brute force aproach: 
    // int count0 = 0, count1 = 0, count2 = 0;
    // sort(arr.begin(), arr.end()); // we can do this by sorting also or by adding it particularly to array
    // for(int i = 0; i < n; i++){
    //     cout << arr[i] << " " ; 
    //     if(arr[i] == 0) count0++;
    //     else if(arr[i] == 1) count1++;
    //     else count2++;
    // }
    // cout << endl << "zero: " << count0 << " " << "one: " << count1 << " "  << "two: " << count2 << endl ; 
    //* 
    // Time Complexity: O(n log n),because sort() dominates everything..
    // Space Complexity: O(n) due to the copy + O(1) extra space

    //* Better approach: 
    // int count0 = 0, count1 = 0, count2 = 0;

    //     // First pass: Count the number of 0s, 1s, and 2s
    // for(int i = 0; i < n; i++){
    //     if(arr[i] == 0) count0++;
    //     else if(arr[i] == 1) count1++;
    //     else count2++;
    // }

    //  // Second pass: Fill the array with 0s, then 1s, then 2s

    //     // Fill the first 'cnt0' elements with 0
    //     for (int i = 0; i < count0; i++) {
    //         arr[i] = 0;
    //     }

    //     // Fill the next 'cnt1' elements with 1
    //     for (int i = count0; i < count0 + count1; i++) {
    //         arr[i] = 1;
    //     }

    //     // Fill the remaining elements with 2
    //     for (int i = count0 + count1; i < arr.size(); i++) {
    //         arr[i] = 2;
    //     }

    //     for(int i = 0; i < arr.size(); i++){
    //         cout << arr[i] ; 
    //     }

    //* 
    // Time Complexity:,O(n) We make two passes through the array: one for counting and one for updating. 
    // So the total time is proportional to the size of the array.
    // Space Complexity:O(1),Only three integer variables (cnt0, cnt1, cnt2) are used for counting.
    //  No extra space is used proportional to the input size.

    //* Optimal approach :  
    //!  Dutch national flag approach 
    int low = 0, mid = 0, high = n-1; 
    while(mid <= high){
        if(arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            mid++; 
            low++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else {
            swap(arr[high], arr[mid]);
            high--;
        }
    }
    for(int i = 0; i < n; i++){
        cout << arr[i] ; 
    }
    
}

void majorityElement(int arr[], int s){
    //! Brute force approach:
    // int cnt = 0;
    // for(int i = 0; i < s; i++){
    //     cnt = 0;
    //     for(int j = 0; j < s; j++){
    //         if(arr[i] == arr[j]){
    //             cnt ++;
    //         }
    //     }
    //     if(cnt > s / 2){
    //         cout << "Majority element is: " << arr[i];
    //         return;
    //     }
    // } 
    //~ TC - O(N^2), SC - O(1)

    //! Better approach:
    // unordered_map<int, int> mp;
    // for(int i = 0; i < s; i++){
    //     mp[arr[i]] ++;
    // }   
    // for(auto it: mp){
    //     if(it.second > s / 2){
    //         cout << "Majority element is: " << it.first ;
    //         return;
    //     }
    // }
    //~ TC - O(N), SC - O(N)

    //! Optimal approach:
    
    //~ TC - O(N), SC - O(1)
    int cnt = 0;
    int el ; 
    for(int i = 0; i < s; i++){
        if(cnt == 0 ){
            el = arr[i];
            cnt ++; 
        }
        else if(arr[i] == el){
            cnt ++;
        } else {
            cnt --;
        }
    }
    // Verify if el is majority element
    int cnt1 = 0;
    for(int i = 0; i < s; i++){
        if(arr[i] == el){
            cnt1 ++;
        }
    }
    if(cnt1 > s / 2){
        cout << "Majority element is: " << el ;
    } else {
        cout << "No Majority element found" ;
    };
    //~ TC - O(N), SC - O(1)
}

void maxmSubarraySum(vector <int> &arr, int n) {
    int sum = 0, maxm = INT_MIN;
    int start = 0, ansStart = 0, ansEnd = 0;

    for (int i = 0; i < n; i++) {
        if (sum == 0) start = i;

        sum += arr[i];

        if (sum > maxm) {
            maxm = sum;
            ansStart = start;
            ansEnd = i;
        }

        if (sum < 0) {
            sum = 0;
        }
    }

    cout << "Maximum Subarray Sum: " << maxm << " from index " << ansStart << " to " << ansEnd;
    //~ TC - O(N), SC - O(1)
}

void buySellStock(vector <int> &arr, int n) {
    int mini = arr[0];
    int maxProfit = 0;
    for(int i = 1; i < n; i++){
        int profit = arr[i] - mini;
        maxProfit = max(maxProfit, profit);
        mini = min(mini, arr[i]);
    }
    cout << "Maximum Profit from Stock Buy and Sell: " << maxProfit ;
    //~ TC - O(N), SC - O(1)
}

void rearrangeArrayByAlternateSign(vector<int> &arr, int s) {
    //! Brutte force approach: 
    // vector<int> pos;
    // vector<int> neg;
    // for(int i = 0; i < s; i++){
    //     if(arr[i] > 0){
    //         pos.push_back(arr[i]); 
    //     } 
    //     else {
    //         neg.push_back(arr[i]);
    //     }
    // }
    // for(int i = 0; i < s/2; i++){
    //     arr[2 * i] = pos[i]; 
    //     arr[2 * i + 1] = neg[i]; 
    // }
    // for(auto x: arr){
    //     cout << x << " " ;
    // }
    //~ TC = O(N), SC = O(N)

    //! Optimal approach: 
    vector <int> ans(s, 0); 
    int posIndex = 0, negIndex = 1 ; 
    for (int i = 0; i < s; i++) {
        if (arr[i] < 0) {
            // Place negative numbers at odd indices
            ans[negIndex] = arr[i];
            negIndex += 2;
        } else {
            // Place positive numbers at even indices
            ans[posIndex] = arr[i];
            posIndex += 2;
        }
    }
    for(auto x: ans){
        cout << x << " ";
    }

}


void nextPermutation(vector<int> &nums){
        // Set index to -1
        int index = -1;

        // Find the first decreasing element from end
        for (int i = nums.size() - 2; i >= 0; i--) {
            // If a smaller element found
            if (nums[i] < nums[i + 1]) {
                // Store index
                index = i;
                break;
            }
        }

        // If no such index found
        if (index == -1) {
            // Reverse the entire array
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find element just greater than nums[index]
        for (int i = nums.size() - 1; i > index; i--) {
            // Swap the two
            if (nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }

        // Reverse the part after index
        reverse(nums.begin() + index + 1, nums.end());

        for(auto x: nums){
            cout << x << " ";
        }
}

void leaderInArray (vector <int> &arr, int s){
    //! Brutte force approach 
    // vector <int> res; 
    // for(int i = 0; i < s; i++){
    //     bool isLeader = true; 

    //     for(int j = i + 1; j < s; j ++){
    //         if(arr[j] > arr[i]){
    //             isLeader = false;
    //             break; 
    //         }
    //     }
    //     if (isLeader) {
    //         res.push_back(arr[i]);
    //     }
    // }
    // for(auto x: res){
    //     cout << x << " ";
    // }

    //! Optimal approach 
    // set <int> ans; 
    // int maxL = 0, maxA = 0; 
    // ans.insert(arr[s-1]); 
    // for(int i = s - 2; i >= 0; i--){
    //     maxL = max(arr[i], arr[i+1]);
    //     maxA = max(maxL, maxA);
    //     if (ans.find(maxA) == ans.end()) {
    //         ans.insert(maxA); 
    //     }
    // }
    // for(auto x: ans){
    //     cout << x << " ";
    // }

    vector <int> ans;
    int maxL = arr[s-1]; 
    ans.push_back(arr[s-1]); 
    for(int i = s - 2; i >= 0; i--){
        if(arr[i] > maxL){
            ans.push_back(arr[i]);
            maxL = arr[i];
        }
    }
    for(auto x: ans){
        cout << x << " "; 
    }; 
}

bool linearSearch(vector <int> &arr, int x){
    for(int i = 0; i < arr.size(); i++){
        if(arr[i] == x){
            return true; 
        }
    }
    return false;
}

void longestConsecutive (vector <int> &arr, int s) {
    //! Brute force approach: 
    // int longest = 1; 
    // for(int i = 0; i < s; i++){
    //     int x = arr[i]; 
    //     int cnt = 1; 
    //     while (linearSearch(arr, x + 1) == true) {
    //         x += 1; 
    //         cnt += 1; 
    //     }
    //     longest = max(cnt, longest); 
    // }
    // cout << longest ; 
    //~ TC = 0(n^3), SC = 0(1)

    //! Better approach: 
    // sort(arr.begin(), arr.end()); 
    // int cnt = 1; 
    // int longest = 1; 
    // for(int i = 0; i < s - 1; i++){
    //     if(arr[i] ==  arr[i+1]){
    //         continue; 
    //     }
    //     else if((arr[i] + 1) == arr[i + 1]){
    //         cnt ++ ; 
    //     } else {
    //         cnt = 1 ; 
    //     }
    //     longest = max(cnt, longest); 
    // }
    // cout << longest ; 
    //~ TC =  O(n log n) , SC = O(1)

    //! Optimal approach: 
     if (arr.empty()){ 
        cout << 0 ; 
        return; 
    };

    unordered_set<int> st(arr.begin(), arr.end());
    int longest = 1;

    for (int x : st) {

        // only start counting if x is the start of a sequence
        if (st.find(x - 1) == st.end()) {

            int curr = x;
            int cnt = 1;

            // expand sequence
            while (st.find(curr + 1) != st.end()) {
                curr++;
                cnt++;
            }

            longest = max(longest, cnt);
        }
    }

    cout <<  longest;

    //~ TC = O(N) , SC = O(N)


}

 void setMatrixZero(vector<vector<int>>& matrix) {
    // Get number of rows
    int m = matrix.size();
    // Get number of columns
    int n = matrix[0].size();

    //! Brutte force approach:  
    // for(int i = 0; i < m ; i ++){
    //     for(int j = 0; j < n ; j++){
    //         if(matrix[i][j] == 0){
    //            for(int col = 0; col < n; col++){
    //             if(matrix[i][col] != 0){
    //                 matrix[i][col] = -1; 
    //             }
    //            }
    //            for(int row = 0; row < m; row++){
    //             if(matrix[row][j] != 0){
    //                 matrix[row][j] = -1; 
    //             }
    //            }
    //         }
    //     }
    // }

    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         if(matrix[i][j] == -1){
    //             matrix[i][j] = 0; 
    //         }
    //     }
    // }

    //! Better Approach: 
    // Create row marker array
    vector<int> row(m, 0);
    // Create column marker array
    vector<int> col(n, 0);

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 0){
                row[i] = 1; 
                col[i] = 1; 
            }
        }
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (row[i] == 1 || col[j] == 1) {
                matrix[i][j] = 0;
            }
        }
    }

    //! Optimal approach: 

    //  vector<int> row(m, 0); // matrix[..][0]
    // vector<int> col(n, 0);  // matrix[0][..]
    int col0 = 1; // so that they dont overlap 
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0; 

                if(j != 0){
                    matrix[0][j] = 0; 
                } 
                else {
                    col0 = 0; 
                }
            }
        }
    }

    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if(matrix[i][j] != 0){
                if(matrix[0][j] == 0 || matrix[i][0] == 0){
                    matrix[i][j] = 0; 
                }
            }
        }
    }
    if(matrix[0][0] == 0){
        for(int j = 0; j < n; j++){
            matrix[0][j] = 0; 
        }
    }
    if(col0 == 0){
       for(int i= 0; i < m; i++){
            matrix[i][0] = 0; 
        }
    }


 }

 void rotateMatrixBy90Degree (vector<vector<int>> &matrix) {
     int m = matrix.size(); 
     int n = matrix[0].size();

    //! Brutte force approach: 
    // vector <int> col; 
    // vector <int> arr; 

    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         col.push_back(matrix[j][i]); 
    //     }
    //     reverse(col.begin(), col.end());  
    //     for(auto x: col){
    //         arr.push_back(x);  
    //     }
    //     col.clear(); 

    // }
    // int index = 0; 

    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         matrix[i][j] = arr[index];
    //         index++;
    //         cout <<  matrix[i][j] << " "; 
    //     }
    // }

    //~ TC = o(N^2) , SC = O(N^2)

    //! Better approach: 

    // vector <int> arrs; 

    // for(int i = 0; i < m; i++){
    //     for(int j = n-1 ; j >= 0; j--){
    //         arrs.push_back(matrix[j][i]); 
    //     }
    // }
    // int index = 0; 
    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         matrix[i][j] = arrs[index];
    //         index++;
    //     }
    // }

    // for(int i = 0; i < m; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << matrix[i][j] << " " ;
    //     }
    // }

    //~ TC = o(N^2) , SC = O(1)

    //!Optimal approach: 

    for(int i = 0; i < m; i++){
        for(int j = i + 1; j < n; j++){
            swap(matrix[i][j], matrix[j][i]);
        }
        reverse(matrix[i].begin(), matrix[i].end()); 
    }

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cout << matrix[i][j] << " " ;
        }
    }

    //~ TC = O(N^2) , SC = O(1)

 };     

void spiralTraversalMatrix(vector<vector<int>> &matrix) {
    int top = 0;
    int bottom = matrix.size() - 1;
    int left = 0;
    int right = matrix[0].size() - 1;
    vector<int> result; 

    // cout << "top: " << top << endl; 
    // cout << "bottom: " << bottom << endl; 
    // cout << "left: " << left << endl; 
    // cout << "right: " << right << endl; 
 
    // Traverse the matrix in spiral order
        while(top <= bottom && left <= right) {

            // Traverse from left to right across the top row
            for(int i = left; i <= right; i++) {
                result.push_back(matrix[top][i]);
            }
            top++; // Move top boundary down

            // Traverse from top to bottom on the right column
            for(int i = top; i <= bottom; i++) {
                result.push_back(matrix[i][right]);
            }
            right--; // Move right boundary left

            // Check if there are rows remaining
            if(top <= bottom) {
                // Traverse from right to left on the bottom row
                for(int i = right; i >= left; i--) {
                    result.push_back(matrix[bottom][i]);
                }
                bottom--; // Move bottom boundary up
            }

            // Check if there are columns remaining
            if(left <= right) {
                // Traverse from bottom to top on the left column
                for(int i = bottom; i >= top; i--) {
                    result.push_back(matrix[i][left]);
                }
                left++; // Move left boundary right
            }
        }
    
}

void countSubArraySum (vector <int> &arr, int s, int k) {
    // int cnt = 0; 
    // for(int i = 0; i < s; i++){
    //     int sum = 0; 
    //     for(int j = i; j < s; j++){
    //         sum += arr[j]; 
    //         if(sum == k){
    //             cnt++; 
    //         }
    //     }; 
    // }
    // cout << cnt ; 
    // ~ TC = O(N^2) , SC = O(1) 

    unordered_map <int, int> mp = {{0, 1}};; 
    int sum = 0; 
    int cnt = 0; 
    for(int i = 0; i < s; i++){
        sum += arr[i];

        if(mp.find(sum - k) != mp.end()){
            cnt += mp[sum - k];
        }

        mp[sum]++;
    }
    cout << cnt ; 
};

void countSubArray (vector<int> &arr, int s){
    //! Brutte force approach: 
    // for(int i = 0; i < s; i++){
    //     int cnt = 1; 
    //     for(int j = i + 1; j < s; j++){
    //         if(arr[i] == arr[j]){
    //             cnt++; 
    //         }
    //     }
    //     if(cnt > s/3 ){
    //         cout << arr[i] << " "; 
    //     }
    // }
    //~ TC = O(N^2), SC = O(N)

    //! Better approach: 
    // map<int, int> mp; 
    // for(int i = 0; i < s; i++){
    //     mp[arr[i]]++;
    // }
    // for(auto x : mp){
    //     if(x.second > s/3){
    //         cout << x.first << " " << endl; 
    //     }
    // }

    //~ TC = O(N) , SC = O(N)

    //! Optimal approach: 
    int cnt1 = 0, cnt2 = 0;
    int el1, el2 ; 
    for(int i = 0; i < s; i++){
        if(cnt1 == 0 && el2 != arr[i]){ 
            el1 = arr[i];
            cnt1 ++; 
        }
        else if(cnt2 == 0 && el1 != arr[i]){
            el2 = arr[i];
            cnt2 ++; 
        }
        else if(arr[i] == el1){
            cnt1 ++;
        }
        else if(arr[i] == el2){
            cnt2 ++;
        } 
        else {
            cnt1--, cnt2--;
        }
    }
    // Verify if el is majority element
    cnt1 = 0, cnt2 = 0; 
        
        for (int i = 0; i < s; i++) {
            if (arr[i] == el1) {
                // Count occurrences of el1
                cnt1++; 
            }
            if (arr[i] == el2) {
                 // Count occurrences of el2
                cnt2++;
            }
        }
    if(cnt1 > s / 3){
        cout << "Majority element is: " << el1 ;
    } 
    else if (cnt2 > s/3) {
        cout << "Majority element is: " << el2 ;
        
    }
    else {
        cout << "No Majority element found" ;
    };
}

int nCr (int n, int r){
    long long res = 1;
    for(int i = 0; i < r; i++){
        res = res * (n - i);
        res = res / (i + 1); 
    }
    return res; 
}

void pascalTriangle1(int r, int c) {
    // (r - 1) C (c - 1) 
    int res = nCr(r - 1, c - 1); 
    cout << res; 
}

void pascalTriangle2(int r){
    for(int i = 1; i <= r; i++){
        int res = nCr(r-1, i-1);
        cout << res << " " ; 
    }
    cout << endl; 
    //~ TC = O(N^2) , SC = O(1)

    int ans = 1 ;
    cout << ans << " "; 
    for(int i = 1 ; i < r; i++){
        ans = ans * (r-i);
        ans = ans / i; 
        cout << ans << " ";
    }
    //~ TC = O(N) , SC = O(1)
}

void pascalTriangle3(int r){
    // for(int i = 1; i <= r; i++){
    //     for(int j = 1; j <= i; j++){
    //         int res = nCr(i-1, j-1);
    //         cout << res << " " ; 
    //     }
    //     cout << endl;
    // }
    //~ TC = O(N^3) , SC = o(1)

    for(int i = 1; i <= r; i++){
        int ans = 1 ;
        cout << ans << " "; 
        for(int j = 1 ; j < i; j++){
            ans = ans * (i-j);
            ans = ans / j; 
            cout << ans << " ";
        }
        cout << endl;
    }
    //~ TC = O(N^2) , SC = O(1)

}

void threeSum(vector <int> &arr, int s){
    //! Brutte force approach: 
    // set<vector<int>> st; 
    // for(int i = 0; i < s; i++){
    //     for(int j = i + 1; j < s; j++){
    //         for(int k = j + 1; k < s; k++){
    //             if(arr[i] + arr[j] + arr[k] == 0 ){
    //                 vector<int> temp ={ arr[i], arr[j], arr[k]}; 
    //                 sort(temp.begin(), temp.end()); 
    //                 st.insert(temp); 
    //             }
    //         }
    //     }
    // } 
    // for (auto x : st) {
    //     for (int num : x) {
    //         cout << num << " ";
    //     }
    //     cout << endl;
    // }
    //~ TC = O(N³ * log (M = number of unique triplets) )  ≈  O(N³ log N) 
    //~ SC = 2 * O(no. of triplet)

    //! Better approach: 
    // set<vector<int>> ans;
    // for (int i = 0; i < s; i++) {
    //     unordered_set<int> st;
    //     for (int j = i + 1; j < s; j++) {
    //         int third = -(arr[i] + arr[j]);
    //         if (st.find(third) != st.end()) {
    //             vector<int> temp = {arr[i], arr[j], third};
    //             sort(temp.begin(), temp.end());
    //             ans.insert(temp);
    //         }
    //         st.insert(arr[j]);
    //     }
    // }
    // for (auto x : ans) {
    //     for (int num : x) cout << num << " ";
    //     cout << endl;
    // }
    //~ TC = O(N² * log N) , SC = O(N)

    //! Optimal approach: 
    sort(arr.begin(), arr.end()); 
    for(int i = 0; i < s; i++) {
        if(i > 0 && arr[i] == arr[i-1]) continue;
        int j = i + 1; 
        int k = s - 1; 
        while(j < k){
            int sum = arr[i] + arr[j] + arr[k];
            if(sum < 0){
                j++; 
            }
            else if(sum > 0){
                k--;
            }
            else {
                cout << arr[i] << " " << arr[j] << " " << arr[k] << endl; 
                j++;
                k--;
                while(j < k && arr[j] == arr[j - 1]) j++; 
                while(j < k && arr[k] == arr[k + 1]) k--; 
            }
        }
    }
    //~ TC = O(N log N + N²)  ≈  O(N²) , Sc = O(1) 
}

void fourSum(vector <int> &arr, int s, int m) {
    //! Brutte force approach: 
    // set<vector<int>> ans;
    // for(int i = 0; i < s; i++) {
    //     for(int j = i + 1; j < s; j++){
    //         unordered_set<int> st;
    //         for(int k = j + 1; k < s; k++) {
    //             int fourth = m - (arr[i] + arr[j] + arr[k]); 
    //             if (st.find(fourth) != st.end()) {
    //                 vector<int> temp = {arr[i], arr[j], arr[k], fourth };
    //                 sort(temp.begin(), temp.end());
    //                 ans.insert(temp);
    //             }
    //             st.insert(arr[k]);
    //         }
    //     }
    // }
    // for (auto x : ans) {
    //     for (int num : x) cout << num << " ";
    //     cout << endl;
    // }
    //~ TC = O(N^3 * log M), SC = O(2 * no. of the quadruplets) 

    //! Better approach: 
    sort(arr.begin(), arr.end());
    for(int i = 0; i < s; i++) {
        if(i > 0 && arr[i] == arr[i-1]) continue;
        for(int j = i + 1; j < s; j++){
            if (j > i + 1 && arr[j] == arr[j - 1]) continue;
            int k = j + 1;
            int l = s - 1; 

            while(k < l) {
                int sum = arr[i] + arr[j] + arr[k] + arr[l];
                if(sum < m){
                    k++; 
                }
                else if(sum > m){
                    l--;
                }
                else {
                    cout << arr[i] << " " << arr[j] << " " << arr[k] << " " << arr[l] << " " << endl; 
                    k++;
                    l--;
                    while(k < l && arr[k] == arr[k - 1]) k++; 
                    while(k < l && arr[l] == arr[l + 1]) l--; 
                }
            }
        } 
    }
}

void longestSubarrayWithSumZero(vector <int> &arr, int s){
    //! Brutte force approach: 
    // int maxCnt = 0; 
    // for(int i = 0; i < s; i++){
    //     int sum = arr[i]; 
    //     for(int j = i + 1; j < s; j++){
    //         sum += arr[j];
    //         if(sum == 0){
    //             maxCnt = max(maxCnt, j - i + 1);
    //         }
    //     }
    // }
    // cout << maxCnt ; 
    //~ TC = O(N^2) , SC = O(1)

    //! Optimal approach: 
    unordered_map<int, int> mp; 
    int maxi = 0, sum = 0; 
    for(int i = 0; i < s; i++){
        sum += arr[i]; 
        if(sum == 0){
            maxi = i + 1; 
        }
        else {
            if(mp.find(sum) != mp.end()){
                maxi = max(maxi, i - mp[sum]); 
            }
            else{
                mp[sum] = i;
            }
        }
    }
    cout << maxi ; 
    //~ TC = O(N) , SC = O(1)

}; 

void countOfSubArrayWithXorK(vector <int> &arr, int s, int k){
    //! Brutte approach: 
    // int cnt = 0; 
    // for(int i = 0; i < s; i++){
    //     int res = arr[i]; 
    //     if(res == k){
    //         cnt++; 
    //     }
    //     for(int j = i + 1; j < s; j++){
    //         res = res ^ arr[j]; 
    //         if(res == k){
    //             cnt++; 
    //         }
    //     }
    // }
    // cout << cnt; 
    //~ TC = O(N^2) , SC = O(1)

    //! Optimal approach: 
    unordered_map<int, int> mp; 
    int cnt = 0, res = 0; 
    for(int i = 0; i < s; i++){
        if(arr[i] == k) cnt++; 
        res = res ^ arr[i]; 
        if(res == k) cnt++;
        else {
            if(mp.find(res) != mp.end()){
                 cnt++; 
            }
            else{
                mp[res] = i;
            }
        }
    }
    cout << cnt ;
    //~ TC = O(N) , SC = O(1)
}

void mergeOverlappingSubInterval(vector<vector<int>> &arr, int s) {
    vector<vector<int>> ans; 
    sort(arr.begin(), arr.end());
    //! Brutte force approach:     
    // for(int i = 0; i < s;){
    //     int start = arr[i][0]; 
    //     int end = arr[i][1];

    //     int j = i + 1; 
    //     while(j < s && arr[j][0] <= end){
    //         end = max(end, arr[j][1]); 
    //         j++; 
    //     }
    //     ans.push_back({start, end}); 
    //     i = j;
    // }
    // for(auto x : ans){
    // cout << x[0] << " " << x[1] << endl;
    // }
    //~ TC = O(N^2), SC = O(N)

    //! Optimal approach: 
    for(auto x: arr){
        if(ans.empty() || ans.back()[1] < x[0] ){
            ans.push_back(x); 
        } else {
            ans.back()[1] = max(ans.back()[1], x[1]);
        }
    }
    for(auto x : ans){
        cout << x[0] << " " << x[1] << endl;
    }
    //~ TC = O(N * logN), SC = O(N)

}

void mergeTwoSotedArrays(vector<int> arr1, vector<int> arr2) {
    int n = arr2.size(); 
    int m = arr1.size() - n; 
    //! Brutte force approach: 
    // vector<int> res; 
    // for(int i = m; i < m + n; i++){
    //     arr1[i] = arr2[i - m]; 
    // }
    // sort(arr1.begin(), arr1.end()); 
    // for(auto x: arr1){
    //     cout << x << " "; 
    // }
    //~ TC = O((m+n) log(m+n)) , SC = O(1) 

    //! Optimal approach: 
    int i = m - 1; 
    int j = n - 1; 
    int k = m + n - 1; 
    while(i >= 0 && j >= 0){
        if(arr1[i] > arr2[j]){
            arr1[k] = arr1[i]; 
            i--;
            k--;
        }
        else {
            arr1[k] = arr2[j]; 
            j--;
            k--;
        }
    }
    while(j >= 0){
        arr1[k] = arr2[j]; 
        k--;
        j--;
    }
    for(auto x: arr1){
        cout << x << " "; 
    }
    //~ TC = O(N) , SC = O(1)

}

int main () {
    int arr[] = {1, 4, 3, 2, 9, 6 };
    int s = sizeof(arr)/ sizeof(arr[0]);
    // int k = 2;

    vector<int> arr1 = {2, 5, 1, 3, 0}; 
    vector<int> arr2 = {8, 10, 5, 7, 9};
    vector<int> arr3 = {1, 2, 3, 4, 5, 6}; 
    vector<int> arr4 = {1, 1, 1, 2, 2, 3, 3, 3};
    vector <int> arr5 = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    vector <int> arr6 = {1, 2, 3, 4, 5};
    vector <int> arr7 = {2, 3, 4, 4, 5};
    vector <int> arr8 = {1, 1, 0, 1, 1, 1}; 
    vector <int> arr9 = {4,1,2,1,2};
    vector <int> arr10 = {1,2,4,5};
    vector <int> arr11 = {10, 5, 2, 7, 1, 9};
    vector <int> arr12 = {1, 0, 2, 1, 0};

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
    // numaberOccursOnce(arr9);

    //! Find the missing number in an array
    // int N = 5;
    // missingNumber(arr10, N);

    //! Longest Subarray with given Sum K(Positives)
    // int k = 15;
    // sumOfSubArray(arr11, k); 

    //! two sum 
    // int k = 15; 
    // twoSum(arr11, k); 
    // cout << twoSum(arr11, k) ;

    //! Sort an array of 0s, 1s and 2s
    // sortZeroOneTwo(arr12);

    //! Majority Element
    int arr13[] = {7, 0, 0, 1, 7, 7, 2, 7, 7};
    int size13 = sizeof(arr13) / sizeof(arr13[0]);

    // majorityElement(arr13, size13);

    //! maxm subarray sum (Kadane's Algorithm)

    vector<int> arr14 = {-2, -3, -7, -2, -10, -4};
    int n14 = arr14.size();
    // maxmSubarraySum(arr14, n14);

    vector<int> arr15 = {7,1,5,3,6,4};
    int n15 = arr15.size();

    // buySellStock(arr15, n15);
    
    //! Rearrange Array Elements by alternate Sign 

    vector<int> arr16 = {1,2,-3,-1,-2,3};
    int n16 = arr16.size();

    // rearrangeArrayByAlternateSign(arr16, n16);

    //! Next permutation: 
    
    vector <int> arr17 = {1, 3, 2}; 
    // nextPermutation(arr17); 

    //! Leaders in an Array problem: 

    vector <int> arr18 = {10, 8, 9, 7}; 
    int n18 = arr18.size(); 

    // leaderInArray(arr18, n18); 

    //! Longest Consecutive Sequence in an Array

    vector <int> arr19= {0, 3, 7, 2, 5, 8, 4, 6, 0, 1}; 
    int n19 = arr19.size(); 

    // longestConsecutive(arr19, n19); 

    //! Set MAtrix Zero 

    vector<vector<int>> matrix = {{1,1,1},{1,0,1},{1,1,1}};

    // setMatrixZero(matrix);

     // Print final matrix
    // for (auto row : matrix) {
    //     for (auto val : row) {
    //         cout << val << " ";
    //     }
    //     cout << endl;
    // }
    
    //! Rotate Image by 90 degree
    vector<vector<int>> matrix1 = {{1,2,3},{4,5,6},{7,8,9}};
    // rotateMatrixBy90Degree(matrix1); 

    //! Spiral Traversal of Matrix 
    // spiralTraversalMatrix(matrix1); 

    //! Count Subarray sum Equals K
    // vector <int> arr20 = {3, 1, 2, 4}; 
    // int n20 = arr20.size(); 
    // countSubArraySum(arr20, n20, 6); 

    //! count more than N/3 times: 
    // vector<int> arr21 =  {1, 2, 1, 1, 3, 2, 2}; 
    // int n21 = arr21.size(); 
    // countSubArray(arr21, n21); 

    //! Pascal Triangle: 
    //~ Given row and column find that element 
    // pascalTriangle1(5, 3);

    //~ print any nth row of pascal triangle 
    // pascalTriangle2(4); 

    //~ Given n = row and print the entire pascal triangle 
    // pascalTriangle3(5); 

    //! 3 sum: 
    // vector <int> arr22 = {-1,0,1,2,-1,-4}; 
    // int n22 = arr22.size(); 
    // threeSum(arr22, n22); 

    //! 4 sum: 
    // vector <int> arr23 = {4,3,3,4,4,2,1,2,1,1}; 
    // int n23 = arr23.size(); 
    // fourSum(arr23, n23, 9); 

    //! Length of the longest subarray with zero Sum : 
    vector<int> num1 = {9, -3, 3, -1, 6, -5}; 
    int s1 = num1.size(); 
    // longestSubarrayWithSumZero(num1, s1); 

    //! Count the number of subarrays with given xor K : 
    vector <int> num2 = {4, 2, 2, 6, 4}; 
    int s2 = num2.size(); 
    // countOfSubArrayWithXorK(num2, s2, 6); 

    //! Merge Overlapping Sub-intervals : 
    vector<vector<int>> num3 = {{1, 3}, {2, 6}, {5, 8}, {10, 15}, {12, 23}};
    int s3 = num3.size(); 
    // mergeOverlappingSubInterval(num3, s3);

    //! Merge two Sorted Arrays Without Extra Space : 
    vector <int> num4 = {0, 2, 7, 8, 0, 0, 0}; 
    vector <int> num5 = {-7, -3, -1};
    mergeTwoSotedArrays(num4, num5); 








    
    return 0;
}