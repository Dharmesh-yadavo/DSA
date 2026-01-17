#include <bits/stdc++.h>
using namespace std;

int main() {
    //! Unordered_set: 
    
    unordered_set<int> s;

    // Insert
    for(int i = 1; i < 5; i++){
        s.insert(i);
    }

    // Display
    cout << "Elements present in the unordered set: ";
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // Size
    cout << "The size of the unordered set is: " << s.size() << endl;

    // Empty check
    if(!s.empty())
        cout << "The unordered set is not empty " << endl;
    else
        cout << "The unordered set is empty" << endl;

    // Clear
    s.clear();

    // cbegin() / cend()
    unordered_set<int> s1 = {1, 2, 3};
    for(auto it = s1.cbegin(); it != s1.cend(); it++){
        cout << *it << " ";
    }
    cout << endl;

    // Correct bucket_size() usage
    cout << "Elements in bucket 0: " << s1.bucket_size(0) << endl;

    // emplace(): Inserts a new element directly into the set, more efficient than insert() in some cases.
    s1.emplace(1);

    // max_size(): Returns maximum number of elements the unordered_set can hold (theoretical limit).
    cout << s.max_size();

    // max_bucket_count()
    // Returns the maximum number of buckets the unordered_set can have.
    // Related to the hash table implementation.
    cout << s.max_bucket_count();

    return 0;
}
