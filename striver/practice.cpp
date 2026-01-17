#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    //! Brute force approach 
    int count = 0 ; 
    while (n > 0 ){
        int res = n / 10 ; 
        n = res ;
        count ++;
    }
    return count ;
    //~ as we are dividing its TC is (log10N + 1) = O(logN)

    //! optimal approach 
    // formula 10^(d-1) ≤ N < 10^d N is positive numbar , d = no. of digit in N 
    // if (n == 0) return 1;
    // return floor(log10(abs(n))) + 1;
    //~ TC - O(1)
}

int reverseNumber (int n) {
    int ans = 0 ;
    while(n> 0){
       int res = n % 10; // 5, 4
       ans =  ans * 10 + res; 
       n = n / 10;
    }    
    return ans;
}

void checkPalindrome( int n) {
    int res = reverseNumber(n); 
    if(res == n){
        cout << "The reverse of " << n << " is " <<  res << " and therefore it is palindrome number " ;
    } else {
        cout << "The reverse of " << n << " is " <<  res << " and therefore it is not a palindrome number " ;
    }
}

int findGcd ( int n1, int n2 ) {
    int gcd = 1; 
    for(int i = 1; i < min(n1, n2); i++){
        if(n1 % i == 0 && n2 % i == 0){
            gcd = i;
        }
    }
    return gcd;
    //~ TC is O(min(N1, N2))
}

bool checkArmstrong( int n ){
    int k = 3; // Get number of digits
    int sum = 0;
    int num = n;

    while (n > 0) {
        int ld = n % 10;            
        sum += pow(ld, k);          
        n /= 10;                    
    }

    return sum == num; 
}

void findDivisor(int n ){
    vector<int> arr;
    //! Brute force approach: 
    // for(int i = 1; i < n; i++){
    //     if(n % i == 0){
    //         arr.push_back(i);
    //     }
    // }
    // for(int x : arr){
    //     cout << x << " ";
    // }
    //~ TC - O(N),  SC -  O(N) 

    //! optimal approach: 
   for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            arr.push_back(i);
            if(i != n / i) arr.push_back(n / i);
        }
    }
    for(int x : arr){
        cout << x << " ";
    } 
    //~ TC - O(sqrt(N)),  SC -  O(2*sqrt(N)) 
}

void checkPrime(int n){
    //! Brute force approach
    int cnt = 0;
    // for( int i = 1 ; i <= n; i++){
    //     if(n % i == 0){
    //         cnt ++;
    //     }
    // }
    // if(cnt == 2){
    //     cout << "prime";
    // } else {
    //     cout << "not prime";
    // }
    //! Optimal approach 
    for(int i = 1; i * i <= n; i++){
        if(n % i == 0){
            cnt ++;
            if(i != n / i) {
                cnt ++;
            }
        }
    }
    if(cnt == 2){
        cout << "prime";
    } else {
        cout << "not prime";
    }
    //~ TC - O(sqrt(N)) 
}




int main () {

    int n = 153;
    int r = 4554; 
    int n1 = 9;
    int n2 = 16;
    int n3 = 3;
    // cout << countDigits(n);
    // cout << reverseNumber(n);
    // checkPalindrome(r);
    // cout << findGcd(n1, n2);
    // checkArmstrong(n);
    // findDivisor(n2);
    // checkPrime(n3);

    

    return 0; 
}