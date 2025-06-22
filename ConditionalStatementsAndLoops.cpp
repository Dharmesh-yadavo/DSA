#include <iostream>
using namespace std ; 

int main(){
    //! conditional statement
    // int n ;
    // cout << "Please Enter the age:";
    // cin >> n ;
    // if ( n >= 18){
    //     cout << "You can vote";
    // }else{
    //     cout << "You can't vote";
    // }

    // int n ;
    // cout << "Please Enter a number:";
    // cin >> n ;
    // if ( n % 2 == 0){
    //     cout << "It's a even number\n";
    // }else{
    //     cout << "It's a odd number\n";
    // }

    // int n ;
    // cout << "Please Enter marks:";
    // cin >> n ;
    // if ( n >= 90){
    //     cout << "A\n";
    // }else if (n >= 80 && n < 90) {
    //     cout << "B\n";
    // }else{
    //     cout << "It's a odd number\n";
    // }

    // char ch ;  
    // cout << "Please enter the character:";
    // cin >> ch ; 
    // if(ch >= 'a' && ch < 'z'){
    //     cout << "Lowercase";
    // }else{
    //     cout << "Uppercase";
    // }

//* lowercase ASCII - 97 to 122
//* uppercase ASCII - 65 to 90 
//    char ch ;  
//     cout << "Please enter the character:";
//     cin >> ch ; 
//     if(ch >=  65 && ch < 90){
//         cout << "Uppercase";
//     }else{
//         cout << "Lowercase";
//     } 

    //! Ternary statement

    // int n ;
    // cout << "Please Enter the number:";
    // cin >> n ;
    // cout << ( n >= 0 ? "positive\n" : "negative\n") ;
    // ( n >= 0 ? cout << "positive\n" : cout << "negative\n") ; 

    //~Loops
    //! while Loops:

    // int i = 1 ; 
    // while(i <= 5) {
    //     cout << i << endl ;
    //     i++ ; 
    // }

    //! for loop 
    // for ( int i = 1; i <= 10 ; i ++){
    //     cout << i << " " ; 
    // }

    //! calculating sum of numbers 1 to 10 
    // int sum = 0 ; 
    // for ( int i = 1 ; i <= 10; i++){
    //     sum += i ;
    // }
    // cout << sum ;

    //! calculating sum of ODD numbers: 
    // int sum = 0 ; 
    // for ( int i = 1 ; i <= 10; i++){
    //     if( i % 2 != 0){
    //         sum += i ;
    //     }
    // }
    // cout << sum ;

    //^ Homework:
    //! calculating sum of ODD numbers with while loop:
    // int sum = 0, n, i = 0 ; 
    // cout << "Please enter the number:" ; 
    // cin >> n ;
    // while ( i <= n ){
    //     if( i % 2 != 0){
    //         sum += i ;
    //     }
    //     i++ ; 
    // }
    // cout << sum ; 



    //! calculating sum of EVEN  numbers:
    // int sum = 0, n ;
    // cout << "Please enter the number:" ; 
    // cin >> n ;
    // for( int i = 0 ; i <= n ; i++){
    //     if( i % 2 == 0){
    //         sum += i ;
    //     } 
    // }
    // cout << sum ; 
    
    //! do while loop
    // int n = 10 ; 
    // int i = 1 ;
    // do{
    //     cout << i << " "; 
    //     i ++ ; 
    // }while( i <= n) ; 

    // cout << endl ;

    //! checking is a number is prime number or not 
    // int n ; 
    // cout << "Please enter the number: ";
    // cin >> n ;
    // for (int i = 2 ; i < n ; i++){
    //     if( n % i == 0){
    //         cout << n << " is not a prime number\n" ; 
    //         break ; 
    //     }
    // }
    // cout << n << " is a prime number\n" ; 
    //! one more way : we can check till 2 to ✓n
    int n ; 
    cout << "Please enter the number: ";
    cin >> n ;
    for (int i = 2 ;  i * i < n ; i++){
        if( n % i == 0){
            cout << n << " is not a prime number\n" ; 
            break ; 
        }
    }
    cout << n << " is a prime number\n" ; 



    return 0 ;

}