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

void hashArray() {
    int arr[] = {1, 2, 1, 2, 3} ; 
    int s = sizeof(arr) / sizeof(arr[0]);
    // Brute force approach 
    // int cnt = 0; 
    // int q = 1;
    // for(int i = 0; i < s; i++ ){
    //     if(arr[i] == q){
    //         cnt ++;
    //     }
    // }
    // cout << cnt << endl; 
    //~ Time Complexity: O(N²), Space Complexity: O(N)

    //! optimal approach 
    // int q[] = {1, 2, 3, 4}; 

    int hash[6] = {0};
    for(int i = 0; i < s; i++){
        hash[arr[i]] += 1;
    }
    int q ;
    cin >> q ;
    while (q--) {
        int number;
        cin >> number;
        // fetching:
        cout << hash[number] << endl;
    }
    //~ Time Complexity: O(N), Space Complexity: O(N)
}

void characterHashing() {
    string s = "dharmesh";

    int hash[26] = {0}; 
    for(int i = 0; i < s.size(); i++ ){
        hash[s[i] - 'a'] += 1;
    }

    int q ;
    cin >> q ;
    while (q--) {
       char c;
        cin >> c;
        // fetching:
        cout << hash[c - 'a'] << endl;
    }
 
}

void stringHashing(){
    string s;
    cin >> s;

    //precompute:
    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++;
    }

    int q;
    cin >> q;
    while (q--) {
        char c;
        cin >> c;
        // fetch:
        cout << hash[c] << endl;
    }

}

void highestLowestFreq() {
    int arr[] = {10,5,10,15,10,5};
    int s = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> map;

    for(int i = 0; i < s; i++){
        map[arr[i]] ++;
    }
    int maxFreq = 0, minFreq = s;
    int maxEle = 0, minEle = 0;
    for(auto it: map){
        int element = it.first;
        int count = it.second;

        cout << element << " " << count << endl;

        // Update max frequency element
            if (count > maxFreq) {
                maxFreq = count;
                maxEle = element;
            }

            // Update min frequency element
            if (count < minFreq) {
                minFreq = count;
                minEle = element;
            }
    }
    
    cout << "The highest frequency element is: " << maxEle << "\n";
    cout << "The lowest frequency element is: " << minEle << "\n";
   
}

void leftRotateArray(vector <int> &arr, int s, int k) {
    //! Brute force approach:
    vector<int> res;

    k = k % s; // if k is greater than like size is 7 and k is 10 then k = 7 + 3 means only 3 rotation

    // for(int i = k; i < s; i++)
    //     res.push_back(arr[i]);

    // for(int i = 0; i < k; i++)
    //     res.push_back(arr[i]);

    // arr = res;  // ✅ modify original array 

    //~ TC - O(N), SC - O(N)
    
    //! Optimal approach:
    
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin() + k, arr.end());
    reverse(arr.begin(), arr.end());

    cout << "Left Rotate the Array by K: ";

    for (int num : arr) {
        cout << num << " "; 
    }
    
    //~ TC - O(N), SC - O(1)

}

void moveZeroesToEnd(vector <int> &arr) {
    //! Brute force approach:
    vector <int> res;
    int s = arr.size();

    // int cnt = 0;

    // for(int i = 0; i < s; i++){
    //     if(arr[i] != 0){
    //         res.push_back(arr[i]);
    //     } else {
    //         cnt ++;
    //     }
    // }
    // while(cnt--){
    //     res.push_back(0);
    // }
    // arr = res;
    // cout << "Array after moving zeroes to the end: ";
    // for (int num : arr) {
    //     cout << num << " ";
    // };
    //~ TC - O(N), SC - O(N)

    //! Not Optimal approach:

    // for(int j = 0; j < s; j++){
    //     if(arr[j] == 0){
    //         for(int i = j + 1; i < s; i++){ 
    //             if(arr[i] != 0){
    //                 swap(arr[j], arr[i]);
    //                 break;
    //             }
    //         }
    //     } 
    // }
    // cout << "Array after moving zeroes to the end: ";
    // for (int num : arr) {
    //     cout << num << " ";
    // };  
    //~ TC - O(N^2), SC - O(1)

    //! Optimal approach:

     int j = -1;

        // Find the first zero
        for (int i = 0; i < s; i++) {
            if (arr[i] == 0) {
                j = i;
                break;
            }
        }

        // If no zero found, return
        if (j == -1) return;

        // Start from the next index of first zero
        for (int i = j + 1; i < s; i++) {
            // If current element is non-zero
            if (arr[i] != 0) {
                // Swap with arr[j]
                swap(arr[i], arr[j]);
                // Move j to next zero
                j++;
            }
        }

    cout << "Array after moving zeroes to the end: ";
    for (int num : arr) {
        cout << num << " ";         
    };
    //~ TC - O(N), SC - O(1)
}   

void linearSearch(vector <int> &arr, int s, int key) {
    //* Brute force approach:
    for(int i = 0; i < s; i++){
        if(arr[i] == key){
            cout << "Element found at index: " << i ;
            return;
        }
    }
    cout << "Element not found" ;

    //~ TC - O(N), SC - O(1)

}   

void unionOfTwoArrays(int arr1[], int arr2[]) {
    //! Brute force approach with help of set / map :
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int m = sizeof(arr2) / sizeof(arr2[0]);    
    // map <int, int> mp;  

    // for(int i = 0; i < n; i++){
    //     mp[arr1[i]] = 1;
    // }
    // for(int j = 0; j < ;m j++){
    //     mp[arr2[j]] = 1;
    // }
    // cout << "Union of two arrays is: ";
    // for(auto it = mp.begin(); it != mp.end(); it++){
    //     cout << it->first << " ";
        
    // }       
    //~ TC - O((N + M) log(N + M)), SC - O(N + M)

    //! Optimal approach : 
    vector<int> Union;
    int i = 0, j = 0;
    while(i <n && j < m){
        if(arr1[i] < arr2[j]){
            if(Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }
        else if(arr2[j] < arr1[i]){
            if(Union.empty() || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }
        else {
            if(Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
            j++;
        }
        
    } 

    // Append remaining elements from arr1
        while (i < n) {
            if (Union.empty() || Union.back() != arr1[i])
                Union.push_back(arr1[i]);
            i++;
        }

    // Append remaining elements from arr2
        while (j < m) {
            if (Union.empty() || Union.back() != arr2[j])
                Union.push_back(arr2[j]);
            j++;
        }

    cout << "Final Union Array" ; 
    for (int val : Union) cout << val << " ";           
    //~ TC - O(N + M), SC - O(N + M)    
    
}

void missingNumberInArray(int arr[], int n) {
    //! Brute force approach:
    // int flag = 0;
    // for(int i = 1; i <= n; i++){
    //     for(int j = 0; j < n - 1; j++){
    //         if(arr[j] == i){
    //             flag = 1;
    //             break;
    //         }
    //     }
    //     if(flag == 0){
    //         cout << "Missing number in the array is: " << i ;
    //         break;
    //     }
    // }
    //~ TC - O(N^2), SC - O(1)
    
    //! Better approach:
    // int expectedSum = n * (n + 1) / 2; 
    // int actualSum = 0; 
    // for(int i = 0; i < n - 1; i++){
    //     actualSum += arr[i];
    // }
    // int missingNumber = expectedSum - actualSum;
    // cout << "Missing number in the array is: " << missingNumber ;
    //~ TC - O(N), SC - O(1)

    //! Optimal approach:
    int xor1 =0, xor2 = 0;
    for(int i =0; i < n; i++){
        xor2 = xor ^ arr[i];
        xor1 = xor1 ^ (i + 1);
    }
    xor1 = xor1 ^ n;
    cout << "Missing number in the array is: " << (xor1 ^ xor2) ;
    //~ TC - O(N), SC - O(1)
  
}

void maxmOnes(int arr[], int n){
    int count = 0, maxm = 0;
    for(int i = 0; i< n; i++ ){
        if(arr[i] ==1){
            count ++;
            maxm = max(maxm, count);
        } else {
            count = 0;
        }

    }
    cout << "Maximum consecutive ones are: " << maxm ;
}






int main () {

    int n = 153;
    int r = 4554; 
    int n1 = 9;
    int n2 = 16;
    // int n3 = 3;
    vector <int> newArr = {5, 4, 3, 2, 1};
    vector <int> newArrWithZero = {5, 0, 4, 0, 0, 3, 2, 0, 0, 1};
    int size = newArr.size();


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

    // cout << nFibonacciNumber(4);

    //! hashing 

    // hashArray();
    
    // characterHashing(); 
    // string containing both uppercase and lowercase then 
    // stringHashing();

    // highestLowestFreq();

    // leftRotateArray(newArr, size, 2);
    // cout << "\n";

    // moveZeroesToEnd(newArrWithZero);

    // linearSearch(newArr, size, 3);

    int arr1[] = {1, 2, 4, 5};
    int arr2[] = {2, 3, 5, 7, 9};
    int arr3[] = {1, 1, 2, 1, 1, 1};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    // unionOfTwoArrays(arr1, arr2);

    // missingNumberInArray(arr1, 5);

    // maxmOnes(arr3, size3);

    

    return 0; 
}