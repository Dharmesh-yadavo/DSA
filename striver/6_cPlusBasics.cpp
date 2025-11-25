#include <bits/stdc++.h>
using namespace std;

void explainPair() {
    
    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second << endl ;

    pair<int, pair<int, int>> num = {10, {11, 12}};

    cout << num.first << " " << num.second.first << " " << num.second.second << endl;

    pair<int, int> arr[] = { {1, 2}, {3, 4}, {5, 6} };

    cout << arr[0].first << " " << arr[0].second << endl;
    cout << arr[1].first << " " << arr[1].second << endl;
    cout << arr[2].first << " " << arr[2].second << endl;
};

int main() {
    explainPair() ;
}
#include <bits/stdc++.h>
using namespace std;

void explainPair() {
    
    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second << endl ;

    pair<int, pair<int, int>> num = {10, {11, 12}};

    cout << num.first << " " << num.second.first << " " << num.second.second << endl;

    pair<int, int> arr[] = { {1, 2}, {3, 4}, {5, 6} };

    cout << arr[0].first << " " << arr[0].second << endl;
    cout << arr[1].first << " " << arr[1].second << endl;
    cout << arr[2].first << " " << arr[2].second << endl;
};

<<<<<<< HEAD
void explainVector() {

    vector<int> v;

    v.push_back(1);
    v.emplace_back(2); // its same like push back 

    cout << v[0] << " " << v[1] << endl << v.at(0) << " " << v.at(1) << endl ; 
    cout << v.back() << endl ; // 2

    vector<pair<int, int>> vec;

    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    // vector<int> v(5, 100); // v = { 100, 100, 100, 100, 100 }
    // vector<int> v(5); // v = { 0, 0, 0, 0, 0 }

    //! for each loop for printing vector: 
    // for(int i: v) {
    //     cout << i << endl ; 
    // }

    vector<int> v1(5, 20);  // v = { 20, 20, 20, 20, 20}
    vector<int> v2(v1);  // v = { 20, 20, 20, 20, 20}

    // for(int i: v1) {
    //     cout << i << endl ; 
    // }

    // cout << endl ; 

    // for(int i: v2) {
    //     cout << i << endl ; 
    // }

    // for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
    //     cout << *(it) << " " ;  // 1 , 2
    // }
    //! auto = vector<int>::iterator  // getting this from libraries 
    // for(auto it = v.begin(); it != v.end(); it++) {
    //     cout << *(it) << " " ;  // 1 , 2
    // }

    //~ v = { 10, 20, 30, 40, 50 }
   
    // v.erase(v.begin()+1); //^ { 10, 30, 40, 50 }

    v.erase(v.begin()+2, v.begin()+4); //^ { 10, 40, 50 }

    //! Insert function:

    vector<int> v3(2, 100); //^ { 100, 100 }
    v3.insert(v3.begin(), 300); //^ { 300, 100, 100 }

    vector<int> copy(2, 50); //^ { 50, 50 }
    v3.insert(v3.begin(), copy.begin(), copy.end()); //^ { 50, 50, 300, 100, 100 }

    cout << v3.size() << endl ; //^ 5

    v3.pop_back(); //^ {  50, 50, 300, 100 }

    // v1 = { 10, 20 }
    // v2 = { 30, 40 }
    // v1.swap(v2); //^  v1 = { 30, 40 }, v2 = { 10, 20 }


    v3.clear(); //^ erase the entire vector 

    cout << v3.empty();

}

void explainList() {
    list<int> ls;

    ls.push_back(2); // { 2 }
    ls.emplace_back(4); // { 2, 4 }

    ls.push_front(5); // { 5, 2, 4 }

    ls.emplace_front(); // {2, 4}

    // rest function same as vector 
    // begin, end, rbegin, rend, clear, insert, size, swap 
}



void explainDeque() {
    deque<int> q;
    q.push_back(1); // { 1 }
    q.emplace_back(2); // { 1, 2 }
    q.push_front(4); // { 4, 1, 2 }
    q.emplace_front(3);// { 3, 4, 1, 2 }

    q.pop_back();// { 3, 4, 1 }
    q.pop_front();// { 4, 1 }
    q.back(); // 1
    q.front(); // 4

    //* rest function same as vector 
    // begin, end, rbegin, rend, clear, insert, size, swap 
}

void explainStack() {
    //! it follows ( LIFO - Last in First out )
    stack<int> st;
    st.push(1); // { 1 }
    st.push(2); // { 2, 1 }
    st.push(3); // { 3, 2, ,1 }
    st.push(3); // { 3, 3, 2, ,1 }
    st.emplace(5) // { 5, 3, 3, 2, ,1 }

    cout << st.top

}



int main() {
    // explainPair() ;
    // explainVector();
    // explainList();
    explainDeque();
=======
int main() {
    explainPair() ;
>>>>>>> f76bb5b7a82d41e358d0c1afabb97709ea348896
}