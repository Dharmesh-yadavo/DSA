#include <bits/stdc++.h>
using namespace std;

void unorderedSet() {
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
}

void vectorFun() {
    vector <int> v;

    for(int i = 0; i < 5; i++){
        v.push_back(i);
    }

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " " ;
    }

    cout << endl;

    auto it = v.begin();
    v.erase(it);


    v.pop_back();

    cout << "\nThe front element of the vector: " << v.front();  //The front element of the vector
    cout << "\nThe last element of the vector: " << v.back(); //The last element of the vector
    cout << "\nThe size of the vector: " << v.size();  //The size of the vector

    v.clear();

    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " " ;
    }
}

vector<int> findDivisors(int n) {
    vector<int> arr;

    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            arr.push_back(i);
        }
    }

    return arr;
}

void printVector(vector<int> &v) {
    for (int x : v) {
        cout << x << " ";
    }
}

void setFun() {
    set<int> s;
    for(int i = 1; i < 10; i++){
        s.insert(i);
    }
   
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    cout << s.count(2) << endl;

    s.erase(s.begin());

    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;

    cout << s.size() << endl;

    s.clear();

    cout << s.empty() << endl;

}

void mapFun(){
    map < int, int > mp;
  for (int i = 1; i <= 5; i++) {
    mp.insert({i , i * 10});
  }

  cout << "Elements present in the map: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  int n = 2;
  if (mp.find(2) != mp.end())
    cout << n << " is present in map" << endl;

  mp.erase(mp.begin());
  cout << "Elements after deleting the first element: " << endl;
  cout << "Key\tElement" << endl;
  for (auto it = mp.begin(); it != mp.end(); it++) {
    cout << it -> first << "\t" << it -> second << endl;
  }

  cout << "The size of the map is: " << mp.size() << endl;

  if (mp.empty() == false)
    cout << "The map is not empty " << endl;
  else
    cout << "The map is empty" << endl;
  mp.clear();
  cout << "Size of the map after clearing all the elements: " << mp.size();
}


int main() {

    //! short notes 
//     STL Containers – One-Page Memory Note
// 🔹 vector

// 👉 Indexed, fast traversal
// 👉 Use when order matters & duplicates allowed
// ⏱ O(1) access

// 🔹 unordered_set

// 👉 Unique elements, fastest lookup
// 👉 Order doesn’t matter
// ⏱ O(1) avg

// 🔹 set

// 👉 Unique + sorted
// 👉 Use when you need min/max or sorted order
// ⏱ O(log N)

// 🔹 unordered_multiset

// 👉 Duplicates allowed, no order
// 👉 Fast frequency-style storage
// ⏱ O(1) avg

// 🔹 multiset

// 👉 Duplicates + sorted
// 👉 Use for median, ordered duplicates
// ⏱ O(log N)

// 🔹 unordered_map

// 👉 Key → value, fastest
// 👉 Frequency counting, hashing problems
// ⏱ O(1) avg

// 🔹 map

// 👉 Key → value + sorted keys
// 👉 Range queries, ordered traversal
// ⏱ O(log N)

// 🔹 unordered_multimap

// 👉 One key → many values, no order
// 👉 Grouping, adjacency lists
// ⏱ O(1) avg

// 🧠 Golden Rule (REMEMBER THIS)

// Need order? → map / set
// Need speed? → unordered_*
// Need duplicates? → multi*
// Need indexing? → vector
    
    //! Unordered set 
    // unorderedSet();

    //! Vector 
    // vectorFun();

    // function returning array 
    // vector<int> res = findDivisors(10);

    // Function that takes a vector as argument
    // printVector(res);   

    //!set
    // setFun();

    //! map 
    mapFun();

    return 0;
}
