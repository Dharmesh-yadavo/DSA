#include <iostream> 
using namespace std ;

int main() {
    //! Bitwise AND (&):
    // 0 & 0 = 0,
    // 0 & 1 = 0, 
    // 1 & 0 = 0, 
    // 1 & 1 = 1 
    //eg: a = 4, b = 8 --> a & b --> 100 & 1000 = 0000 = (0) 
    cout << (4 & 8) << endl ;

    //! Bitwise OR (|):
    // 0 | 0 = 0,
    // 0 | 1 = 1,
    // 1 | 0 = 1,
    // 1 | 1 = 1 
    //eg: a = 4, b = 8 --> a & b --> 100 | 1000 = 1100 = (12) 
    cout << (4 | 8) << endl ;

    //! Bitwise XOR (^):
    // 0 ^ 0 = 0,
    // 0 ^ 1 = 1,
    // 1 ^ 0 = 1,
    // 1 ^ 1 = 0 
    //eg: a = 3, b = 7 --> a ^ b --> 011 | 111 =  = 100 = (4)
    cout << (3 ^ 7) << endl ;

    //! Bitwise LeftShift (<<)
    // numbers will be shifted left side according to the number given 
    // eg: 4 << 1 = 100 << 1 = 1000 = (8) 
    // shortcut: (a << b) ---> ans = a * 2^b 
    cout << (4 << 1) << endl ;

    //! Bitwise RightShift (>>)
    // numbers will be shifted right side according to the number given 
    // eg: 4 >> 1 = 100 >> 1 = 010 = (2)
    // eg: 10 >> 2 = 1010 >> 2 = 0010 = (2)
    // shortcut: (a >> b) ---> ans = a / 2^b 
    cout << (10 >> 2) << endl ;

    //^ Homework:
    // 6 & 10 --> 0110 & 1010 = 0010 = (2) 
    // 6 | 10 --> 0110 | 1010 = 1110 = (14)
    // 6 ^ 10 --> 0110 ^ 1010 = 1100 = (12) 
    // 10 << 2 --> 1010 << 2 = 101000 = (40)
    // 10 >> 1 --> 1010 >> 1 = 0101 = (5)
    cout << "Homework" << endl ;
    cout << (6 & 10) << endl ; 
    cout << (6 | 10) << endl ; 
    cout << (6 ^ 10) << endl ; 
    cout << (10 << 2) << endl ; 
    cout << (10 >> 1) << endl ; 


    return 0 ; 
}

