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

    vector<int> :: iterator it = v.begin();
    cout << *it;
}