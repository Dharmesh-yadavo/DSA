#include <iostream>
using namespace std ; 

int main() {

    //! Square pattern 
    int n; 
    cout << "Please enter the number of rows: " ;
    cin >> n ; 
    // for(int i = 1 ; i <= n ; i++){
    //     for(int j = 1 ; j <= 4 ; j++){
    //         cout << j << " " ; 
    //     }
    //     cout << endl ;
    // }

    
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < n  ; j++){
    //         cout << "* "  ;
    //     }
    //     cout << endl ;
    // } 


    // for(int i = 0 ; i < n ; i++){
    //     char ch = 'A' ;
    //     for(int j = 0 ; j < n ; j++){
    //         cout << ch  ;
    //         ch = ch + 1 ; 
    //     }
    //     cout << endl ;
    // }


/* 1 2 3 4 
5 6 7 8
9 10 11 12
13 14 15 16 */

    // int num = 1 ; 
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < n ; j++){
    //         cout << num << " " ;
    //         num = num + 1 ; 
    //     }
    //     cout << endl ;
    // }

    //^ Homework question 
    
/*A B C D 
E F G H
I J K L
M N O P */

    // char ch = 'A' ; 
    // for(int i = 0 ; i < n ; i++){
    //     for(int j = 0 ; j < n ; j++){
    //         cout << ch << " " ;
    //         ch = ch + 1 ; 
    //     }
    //     cout << endl ;
    // }


    //! Square pattern :

    // for (int i = 0 ; i < n ; i++){
    //     for ( int j = 0 ; j < i + 1 ; j++) {
    //         cout << "* " ; 
    //     }
    //     cout << endl ; 
    // }

    // // int num = 1 ; 
    // for (int i = 0 ; i < n ; i++){
    //     for ( int j = 0 ; j < i + 1 ; j++) {
    //         // cout << num << " " ; 
    //         cout << (i + 1) << " " ; 
    //     }
    //     cout << endl ; 
    //     // num = num + 1 ; 
    // }

    //^ Homework 

/*A 
B B
C C C
D D D D */

    // char ch = 'A' ;
    // for(int i = 0 ; i < n ; i++) {
    //     for (int j = 0 ; j < i + 1 ; j++){
    //         cout << ch << " " ;
    //     }
    //     cout << endl ; 
    //     ch = ch + 1 ; 
    // }

/*1
1 2
1 2 3
1 2 3 4 */
//one way 
    // for ( int i = 0 ; i < n ; i++){
    //     int num = 1 ; 
    //     for(int j = 0; j < i + 1; j++){
    //         cout << num << " " ; 
    //         num = num + 1 ;
    //     }
    //     cout << endl ;
    // }
// second way 
// for ( int i = 0 ; i < n ; i++){
//         for(int j = 1; j <= i + 1 ; j++){
//             cout << j << " " ; 
//         }
//         cout << endl ;
//     }

/*1 
2 1
3 2 1
4 3 2 1 */

// one way
//         int num = 1 ; 
// for ( int i = 0 ; i < n ; i++){

//         for(int j = 0; j < i + 1; j++){
//             cout << num << " " ; 
//             num = num - 1 ;
//         }
//         num = num + 1 + i + 1;
//         cout << endl ;
        
//     }

// second way 
// for (int i = 0; i < n ; i++) {
//     for (int j = i + 1; j > 0 ; j--){
//         cout << j << " " ;
//     }
//     cout << endl ; 
// }

//! Floyds Triangle pattern: 
// int num =  1 ; 
// for ( int i = 0 ; i < n ; i++){
//     for(int j = 0 ; j < i + 1 ; j++){
//         cout << num << " " ;
//         num = num + 1 ; 
//     }
//     cout << endl ;
// }

//! Inverted Triangle 
// for( int i = 0 ; i < n ; i++){
//     for (int j = 0 ; j < i ; j++){
//         cout << " " ;    
//     }
//     for ( int j = 0 ; j < n - i ; j++){
//             cout << (i+1) ;
//         }
//     cout << endl ;
// }

//! Pyramid pattern 
for(int i = 0; i < n ; i++){
    for(int j = 0; j < n-i-1; j++){
        cout << " " ; 
    }
    for(int j = 1; j <= i+1 ; j++){
        cout << j ; 
    }
    for(int j = i ; j > 0; j--){
        cout << j ; 
    }
    cout << endl ;
}

    return 0 ; 
}

//^ its remaining i know - i will surely complete 
