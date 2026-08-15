#include <bits/stdc++.h>
using namespace std;

// classic implementation of fibonacci sequence using multiple calls.

int fib(int n){
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main(){
    int n;
    cin >> n;
    cout << fib(n);
}

// Multiple recursion takes place when the function is called
// multiple times within itself only.

// Concept of Recursive tree can show the calls graphically.

// Multiple recursive calls follow compiler-behaviour (The function which is compiled first, is called first )