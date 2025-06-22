#include <iostream> 
using namespace std ;

int decimalToBinary(int n) {
    int pow = 1 ; 
    int res = 0 ; 
    while (n > 0){
        int rem = n % 2 ; 
        n = n / 2 ; 
        res += (rem * pow) ;
        pow = pow * 10 ;
    }
    return res ;
}

int binaryToDecimal(int n) {
   int pow = 1 ; 
    int res = 0 ; 
    while (n > 0){
        int rem = n % 10 ; 
        n = n / 10 ; 
        res += (rem * pow) ;
        pow = pow * 2 ;
    }
    return res ; 
}

int main() {
    int n ;
    // cout << "PLease enter the decimal number: " ; 
        cout << "PLease enter the binary number: " ;    
    cin >> n ; 
    // cout << decimalToBinary(n) << endl ;
    cout << binaryToDecimal(n) << endl ; 
}