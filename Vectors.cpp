#include <iostream>
#include <vector> 
using namespace std ; 


int LinearSearch (vector<int> &number, int target ) {
    int s = number.size() ; 
     for(int i = 0; i < s; i++){
        if(number[i] == target) {
            return i ; 
        }
     }
     return -1 ; 
}

void ReverseVector(vector<int> &number) {
    int start = 0 ; 
    int end = number.size() - 1  ; 
    while(end > start){
        swap(number[start], number[end]);
        start ++ ; 
        end --;
    }
} 

int main() {
    // vector<int> vec ; // by default size is 0 
    vector<int> vec = {1, 2, 3}; // size = 3 
    // cout << vec[0] << endl ; 
    // cout << vec[1] << endl ; 
    // cout << vec[2] << endl ; 
    vector<int> vect(4, 0) ; // size = 5 -> first one is for the size of vec and second one is for the value of vec 
    // cout << vect[0] << endl ; 
    // cout << vect[1] << endl ; 
    // cout << vect[2] << endl ;
    // cout << vect[3] << endl ; 
    
    // we can use for each loop rather than writing cout again & again
    // for(int i: vect) {
    //     cout << i << endl ; 
    // }

    vector<char> name = {'d', 'h', 'a', 'r', 'm', 'e', 's', 'h'};
    // for (char i: name) {
    //     cout << i  << endl ; 
    // }

    //! Vector functions 
    //~ size 
    // cout << "size = " << name.size() << endl ;

    //~ push_back 
    name.push_back('I') ; 
    // for (char i: name) {
    //     cout << i  << endl ; 
    // }

    //~ pop_back
    name.pop_back() ; 
    // for (char i: name) {
    //     cout << i  << endl ; 
    // }

    //~ front -> which will return front value 
    // cout << name.front() << endl ; 

    //~ back -> which will return back value 
    // cout << name.back() << endl ;
    
    //~ at -> used as idex acessing 
    // cout << name.at(0) << endl ;
    // cout << name.at(1) << endl ;
    // cout << name.at(2) << endl ;

    //! Static vs Dynamic memory allocation 
    // static memory allocates at compile time -> it happens in stack  --> eg: array 
    // dynamic memory allocates at run time -> it happens in heap  --> eg: vector 

    vector<int> num ; 
    num.push_back(0); 
    num.push_back(1);
    num.push_back(2);

    // When you add elements dynamically using push_back(), 
    // the vector automatically resizes its capacity to accommodate more elements. The growth is usually:
    // Roughly 2x the current capacity (not square).

    // cout << num.size() << endl ; //3
    // cout << num.capacity() << endl ; //4

    num.push_back(3);
    num.push_back(4);

    cout << num.size() << endl ; //5
    cout << num.capacity() << endl ; //8

    //! Single Number problem 
    // class Solution {
    // public:
    // int singleNumber(vector<int>& nums) {
    //     int ans = 0 ; 
    //     for(int i: nums){
    //         ans = ans ^ i ;
    //     }
    //     return ans ; 
    // }
    // };
 
    //^ Homework 
    //! Linear Searching 
    vector<int> number = {1, 2, 3, 4, 5} ; 
    int target = 4 ; 
    // cout << LinearSearch(number, target ) ; 

    //! reverse vector 
    cout << "ReverseVector" ;
    ReverseVector(number) ;
    int sz = number.size() ; 
    for(int i = 0; i < sz; i++){
        cout << number[i] << endl ; 
    }

    vector<int> rev = {1, 2, 3, 4, 5}; 
    for(int i = rev.size() - 1 ; i >= 0 ; --i){
        rev.push_back() 
    }




    return 0;
}