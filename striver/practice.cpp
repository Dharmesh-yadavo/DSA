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

void nTimesName (int i , int n){
    //* forward recursion (printing 1 to n)
    // if(i > n){
    //     return; 
    // }
    // cout << "Dharmesh" << endl; 
    // i++;
    // nTimesName(i, n);

    //* backtracking (printing n to 1)
    // if(i > n){
    //     return; 
    // }
    // nTimesNumber(i + 1, n);
    // cout << i << " " ; 
}


void sumOfFirstNNumbers(int i, int n, int sum){
    // int sum = 0; // if we do like this then while recursion it takes sum = 0 
    if(i> n){
        cout << "Sum of first N number: " << sum << endl;
        return;
    }
    sum += i ;
    sumOfFirstNNumbers(i + 1, n, sum);
}

void factorialOfNumber(int i, int n, int fac){
    if(i > n){
        cout << "factorial of a number: " << fac ;
        return; 
    }
    fac *= i;
    factorialOfNumber(i + 1, n, fac);
}

void reverseArray(int i, int arr[], int s ){
    
    // if(i >= s){
    //     return;
    // }
    // reverseArray(i+1, arr, s );
    // cout << arr[i] << " ";

    int p1 = i;
    int p2 = s - 1;
    while(p1 < p2){
        swap(arr[p1], arr[p2]);
        p1++;
        p2--;
    }
   
}

string reverseString(int i, string s, int sz){
    int p1 = i;
    int p2 = sz - 1;
    while(p1 < p2){
        swap(s[p1], s[p2]);
        p1++;
        p2--;
    }
    return s;
}

void checkPalindromeString(string s, int sz) {
    string rev = reverseString(0, s, sz);
   
    if ( rev == s){
        cout << "Its Palindrome";
    } 
    else {
        cout << "Not a Palindrome";
    }

}

bool checkPalindromeStringOptimalApproach(string s) {
    int l = 0;
    int r = s.size() - 1;
    while (l < r) {
        if (s[l] != s[r]) {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int nFibonacciNumber(int n) {
    if(n <= 1){
        return n;
    }
    if(n < 2){
        return 0;
    }
    int last = nFibonacciNumber(n-1);
    int sLast =  nFibonacciNumber(n-2);
    return last + sLast  ; 
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

    //! recursion 
    
    // nTimesName(1, 3);

    // nTimesNumber(1, 10);

    // sumOfFirstNNumbers(1, 5, 0);

    // factorialOfNumber(1, 5, 1);

    // int arr[] = {5, 4, 3, 2, 1};
    // int size = sizeof(arr) / sizeof(arr[0]);
    // reverseArray(0, arr, size);
    //  for(int x: arr){
    //     cout << x << " ";
    // }

    // string s = "ABCDCBA";
    // int sizeOfString = s.size() ;
    // brute approach: 
    // checkPalindromeString(s, sizeOfString); // extra space used 
    // optimal approach: 
    // checkPalindromeStringOptimalApproach(s); 

    cout << nFibonacciNumber(4);


    

    return 0; 
}