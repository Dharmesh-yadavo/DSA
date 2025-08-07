#include <iostream>
using namespace std ; 

int main () {

    //! Subarray 
    // It means a continouse part in a array 
    //^ for eg:
    // SubArray of [1, 2, 3, 4, 5]
    // 1 element: 1, 2, 3, 4, 5
    // 2 element: 12, 23, 34, 45
    // 3 element: 123, 234, 345
    // 4 element: 1234, 2345
    // 5 element: 12345
    // ? Formula for knowing total subarray in a array: n*(n+1) / 2 
    //^ code
    // concept:
    // start        end 
    // 0:           0, 1, 2, 3, 4 ; 
    // 1:           1, 2, 3, 4 ; 
    // 2:           2, 3, 4 ; 
    // 3:           3, 4 ; 
    //^ Time Complexity: O(n^3)

    int arr[] = {1, 2, 3, 4, 5} ; 
    int n = sizeof(arr) / sizeof(arr[0]) ; 
    for(int st = 0; st < n ; st ++){
        for(int end = st; end < n ; end++){
            for(int i = st; i <= end; i++ ){
                // cout << arr[i] ;
            }
            // cout << " " ; 
        }
        // cout << endl ; 
    }

    //! Maximum Subarray Sum 
    // it means a continouse part of an array with greatest sum 
    //^ for eg:
    //  Input:  [-2, 1, -3, 4, -1, 2, 1, -5, 4]
    // Output: 6
    // Explanation: The subarray [4, -1, 2, 1] has the maximum sum = 6
    // ^ Time Complexity: O(n^2)
    //^ Code: 
    
    // int maxSum = 0 ; 
    // for (int st = 0 ; st < n ; st++){
    //     int curSum = 0 ; 
    //     for(int end = st ; end < n ; end ++){
    //         curSum += arr[end];
    //         maxSum = max(curSum, maxSum) ; 
    //     }
    // }
    // cout << "Maximum SubArray Sum: " << maxSum << endl ; 

    // ! Kadane's Algorithm
    // ^ Time Complexity: O(n) 
    // ^ code 

    int curSum = 0 ; 
    int maxSum = INT8_MIN ; 
    for( int i = 0 ; i < n ; i++){
        curSum += arr[i] ;
        maxSum = max(curSum, maxSum) ;
        if (curSum < 0) { 
            curSum = 0 ; 
        } 
    }

    cout << "Maximum SubArray Sum: " << maxSum << endl ; 







    return 0; 
}









