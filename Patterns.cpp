#include <iostream>
using namespace std ; 

int main() {

    //! Square pattern 
    // int n; 
    // cout << "Please enter the number of rows: " ;
    // cin >> n ; 
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

//  g++ ConditionalStatementsAndLoops -o ConditionalStatementsAndLoops.exe     
//! Pyramid pattern 
// for(int i = 0; i < n ; i++){
//     for(int j = 0; j < n-i-1; j++){
//         cout << " " ; 
//     }
//     for(int j = 1; j <= i+1 ; j++){
//         cout << j ; 
//     }
//     for(int j = i ; j > 0; j--){
//         cout << j ; 
//     }
//     cout << endl ;
// }

//~ DSA Striver :::
//! 1  
// int n = 4; 
// for(int i = 0; i < n; i++){
//     for(int j = 0; j < n; j++){
//         cout << "*" ; 
//     }
//     cout << endl ;
// }

//! 2 
// for (int i = 0 ; i < 5; i++){
//     for(int j = 0; j <= i; j++){
//         cout << "*";
//     }
//     cout << endl ;
// }

//! 3 
// for (int i = 1 ; i <= 5; i++){
//     for(int j = 1; j <= i; j++){
//         cout << j;
//     }
//     cout << endl ;
// }

//! 4
// for (int i = 1 ; i <= 5; i++){
//     for(int j = 1; j <= i; j++){
//         cout << i;
//     }
//     cout << endl ;
// }

//! 5
// for(int i = 0; i < 5; i++ ){
//     for(int j = 5; j > i; j --){
//         cout << "*";
//     }
//     cout << endl;
// }

//! 6 
// int n = 5; 
// for(int i = 0; i < n; i++ ){
//     for(int j = 1; j < n - i + 1; j++){
//         cout << j << " ";
//     }
//     cout << endl;
// }

//! 7
// int n = 5;
// for(int i = 0; i < n; i++){
//     //space 
//     for(int j = 0;j < n - i - 1; j++){
//         cout << " ";
//     }
//     //star
//     for(int j = 0; j < 2i + 1; j++){
//         cout << "*";
//     }
//     //space
//     for(int j = 0; j < n - i - 1; j++){
//         cout << " ";
//     }
// }

//! 8 
// for(int i = 0; i<5; i++){
//     for(int j=0; j < i; j++){
//         cout << " ";
//     }
//     for(int j = 9 - 2*i; j > 0; j--){
//         cout << "*";
//     }
//     for(int j=0; j < i; j++){
//         cout << " ";
//     }
//     cout << endl;
// }

//! 9
// 7 + 8

//! 10 

//! 11
// for(int i = 0; i < 5; i++){
//     int arr = [1, 0];
//     for(int j = 0; j < i; j++){
//         cout << arr[j]
//     }
// }

//! 12 
// int n = 4;
// for (int i = 1; i <= n; i++){
//     // number 
//     for(int j = 1; j <= i; j++){
//         cout << j;
//     };
//     // space 
//     for(int j = 1; j <= 2 * ( n - i ); j++){
//         cout << " ";
//     }
//     // number
//     int start = i;
//     for(int j = 1; j <= i; j++){
//         cout << start;
//         start = start - 1;
//     };
//     cout << endl;
// }

//! 13 
// int n = 5;
// int start  = 1; 
// for(int i = 0; i < n; i++){
//     start = start + i; 
//     int res = start;
//     for(int j = 0; j <= i; j++){
//         cout << res << " ";
//         res = res + 1 ; 
//     }
//     cout << endl;
// }

//! 14
// for(int i = 0; i < 5; i++){
//     for(char ch = 'A'; ch <= 'A' + i; ch++){
//         cout << ch << " ";
//     }
//     cout << endl;
// }

//! 15 
// int n = 4; 
// for(int i = 0; i <= n; i++){
//     for(char ch = 'A'; ch <= 'A' + ( n - i ); ch++){
//         cout << ch << " ";
//     }
//     cout << endl;
// }

//! 16
// for(int i = 0; i < 5; i++){
//     char ch = 'A' + i;
//     for(int j = 0; j <= i; j++ ){
//         cout << ch << " ";
//     }
//     cout << endl;
// }

//! 17 
int n = 4;
for(int i = 0; i < n; i++){
    for(int j = 0; j < n - i - 1; j++){
        cout << " " << " ";
    }
    char ch = 'A'; 
    int breakpoint = (2*i+1) / 2; 
    for(int j = 0; j < 2*i + 1; j++){
        cout << ch << " "; 
        if(j <= breakpoint) ch++ ; 
        else ch--;
    }

    for(int j = 0; j < n - i; j++){
        cout << " " << " ";
    }
    cout << endl;
}

//! 18 





    return 0 ; 
}

//^ its remaining i know - i will surely complete  
