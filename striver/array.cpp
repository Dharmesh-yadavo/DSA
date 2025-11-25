#include <bits/stdc++.h>
using namespace std;

int sortArr(vector<int> &arr) {
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

int main () {
    // int arr = [1, 4, 3, 2, 9, 4] ; 
    // int s = sizeof(arr)/ sizeof(arr[0]);
    vector<int> arr1 = {2, 5, 1, 3, 0};
    vector<int> arr2 = {8, 10, 5, 7, 9};

    //! Find the largest element in the Array: 
    // Brute force approach: 
    cout << "The Largest element in the array is: " << sortArr(arr1) << endl;


    return 0;
}