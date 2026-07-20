/*
Basically dynamic arrays.
lots of functions, learn as used.
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v;
    v.emplace_back(1);
    v.emplace_back(2);
    v.emplace_back(3);
    v.emplace_back(4);
    v.emplace_back(5);


    // ---------------------use of iterator---------------------
    vector<int> :: iterator it = v.begin();
    cout << *it << endl;
    // v.end() points at the memory address just after the vector's last element.
    vector<int> :: iterator it2 = v.end() - 1;
    cout << *it2 << endl;
    
    //other iterators
    // vector<int> :: iterator it3 = v.rend(); // end from the end
    // vector<int> :: iterator it4 = v.rbegin() ; // beginning from the end
    
    // ------------------Vector Traversal Methods-----------------
    
    // like arrays by usage of loops
    for (int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
    
    // by use of iterators
    for(auto it = v.begin(); it!= v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
    
    // accessing in reverse using iterators
    for(auto it = v.rbegin(); it!= v.rend(); it++){
        cout << *it << " ";
    }
    cout << endl;
    
    //using for-in loops
    for(auto it: v){
        cout << it << " ";
        
    }
    cout << endl;

    //-----------------------------------------------------------------
    
}