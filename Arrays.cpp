#include <iostream> 
using namespace std ; 

//! Pass by reference function 
void changeArr(int a[], int szA) {
    for(int i = 0 ; i < szA ; i++) {
        a[i] =  a[i] * 2 ; 
    }
}

//! linear Search fxn 
int linearSerch(int a[], int szA, int target ){
    for(int i = 0; i < szA; i++){
        if(a[i] == target) {
            return i;
        }
    }
    return -1 ; // if not found 
}

//! Reversing a array 
void reverseArr( int a[], int szA) {
    int start = 0, end = szA - 1 ; 
    while(start < end) {
        swap(a[start], a[end]) ; 
        start ++ ; 
        end -- ; 
    }
}

int main() {

    // int marks [20] ;

    int marks [5] = {99, 23, 56, 94, 90} ;
    
    // double price [] = {76.45, 34.56, 90.43} //! automatically created an array of size 3 

    //! valid index is from 0 to (size - 1)
    // cout << marks[0] << endl ; 
    // cout << marks[1] << endl ; 
    // cout << marks[2] << endl ; 
    // cout << marks[3] << endl ; 
    // cout << marks[4] << endl ; 

    //! to change an index of array 
    marks[0] = 89 ; 
    // cout << marks[0] << endl ; 

    //! to print array through loop 
    int sz = sizeof(marks) / sizeof(marks[0]);
    // cout << sz << endl ; 

    // for(int i = 0; i < sz; i++){
    //     cout << marks[i] << endl ; 
    // }

    //! we can also take input of an array 
    int arr[5] = {} ; 
    int szArr = sizeof(arr) / sizeof(arr[0]) ; 

    for(int i = 0; i < szArr; i++) {
        // cin >> arr[i] ; 
    }

    for(int i = 0; i < szArr; i++) {
        // cout << arr[i] << endl ; 
    }

    //! Smallest and largest in an array 
    int a[5] = {23, 12, 65, 78, 21} ;
    int szA = sizeof(a) / sizeof(a[0]) ;

    //~ 1st way 
    // int smallest = a[0]  ; 
    // int largest = a[0] ; 

    // for(int i = 0; i < szA; i++) {
    //     if(smallest > a[i]) {
    //         smallest = a[i] ; 
    //     }
    //     else if (largest < a[i]) {
    //         largest = a[i] ; 
    //     }
    // }

    //~ 2nd way 
    // int smallest = INT16_MAX;
    // int largest = INT16_MIN ; 

    // for(int i = 0; i < szA; i++){
    //     if(a[i] < smallest){
    //         smallest = a[i] ; 
    //     }
    //     else if(a[i] > largest) {
    //         largest = a[i];
    //     }
    // }

    // cout << smallest << endl ; 
    // cout << largest << endl ; 

    //~ 3rd way 
    int smallest = INT16_MAX;

    for(int i = 0; i < szA; i++){
        smallest = min(a[i], smallest) ; 
    }
    // cout << smallest << endl ; 

    //! Pass by reference 

    // changeArr(a, szA) ; 

    for(int i = 0; i < sz; i++){
        // cout << a[i] << endl ; 
    }

    //! linear search 
    int target = 78 ; 
    cout << linearSerch(a, szA, target) << endl ;


    //! reverse an array 

    for(int i = 0; i < sz; i++){
        cout << "Before Reverse " << endl ; 
        cout << a[i] << endl ; 
    }

    reverseArr(a, szA)  ;

    for(int i = 0; i < sz; i++){
        cout << "After Reverse " << endl ;  
        cout << a[i] << endl ; 
    }

    //^ Homework 

    //! WAF to calculate sum and product of all numbers in array 

    //! WAF to swap the max nd min number of array 

    //! WAF to print all the unique values in array 

    //! WAF to print intersection of 2 arrays 




    return 0 ;
}