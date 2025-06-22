#include <iostream>
using namespace std ;
//! function defination
// void printHello() {
//     cout << "Hello world" ;
// }

// int printHello () { 
//     cout << "Hello world\n" ; 
//     return 3  ;
// }

//! sum of 2 numbers 
int sum(int a, int b) {
    int s = a + b ;
    return s ; 
}

//! min of 2  numbers
int min(int a, int b) {
    return (a > b ) ? b : a ;
} 

//! sum of n numbers
int sumOfn (int n) {
    int sum = 0 ; 
    for(int i = 1; i <= n ; i++){
        sum += i ; 
    }
    return sum ; 
}

//! factorial of n numbers
int fact(int n ) {
    int f = 1 ; 
    for(int i = 1 ; i <= n ; i++){
        f *= i ; 
    }
    return f ; 
}

//! sum of digits of a number 
int sumOfDigits (int n) {
    int digSum = 0 ;
    while (n > 0) {
        int lastDig = n % 10 ; 
        n = n / 10 ;
        digSum += lastDig ;  
    }
    return digSum ; 
}

//! Caluclate nCr 
int nCr (int n, int r){
    int res = 0 ;
    int factN = fact(n); 
    int factR = fact(r); 
    int factNr = fact(n-r);
    res = factN / (factR * factNr) ;
    return res ;
}

//! checking prime number 
int checkPrime(int n) {
    if(n == 2){
        return 1 ; 
    }else{
    for(int i = 1 ; i < n ; i++){
        if(n % i == 0 ){
            return 0 ;
            break ; 
        }else{
            return 1 ;
        }
    }
}
}

//! print n prime number
int primeNumber (int n) {
    if(n == 0 || n == 1 ){
        // cout << "There is no prime number" ; 
        return 0 ; 
    }else if(n == 2){
        // cout << n << " " ; 
        return n ; 
    }else{
        for(int i = 2; i <= n ; i++) {
            for(int j = 2 ; j < i ; j++){
                if(n % j == 0){
                    break ; 
                }else{
                    // cout << j << " " ;
                    return j ;
                }
            }

        }
    }     
    // return 0 ; 
}


int main () {
//! function called 
// printHello() ;

// int res = printHello() ; 
// cout << res << endl ; 

// cout << printHello() << endl ;

// cout << sum(12, 13) << endl ;

// cout << min(34, 23) << endl ;

// cout << sumOfn(3) << endl ; 

// cout << fact(4) << endl ;

//! Pass by Value 

// cout << sumOfDigits(2345) << endl ;

// cout << nCr(8, 2) << endl ;

//^ Homework:

// int res = checkPrime(2) ; 
// if(res == 1){
//     cout << "Its a prime number\n " ;
// }else{
//     cout << "It's not a prime number\n ";
// }

cout << primeNumber(10) << " " ;


    return 0 ;
}