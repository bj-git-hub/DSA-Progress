#include <iostream>
using namespace std;

// Recursion is when a function calls itself, until a specified condition is met.
// The specified condition is also known as base condition.

void printName(int i, int n){
    if(i > n) return;
    cout << "Bhavesh" << endl;
    printName(i+1, n);
}

void print1toN(int i, int n){
    if(i > n) return;
    cout << i << " ";
    print1toN(i+1, n);
}

void printNto1(int i, int n){
    if(i > n ) return;
    cout << n << " ";
    printNto1(1, n-1);
}

int main(){
    int n;
    cin >> n;
    printName(1, n);
    print1toN(1,n);
    cout << endl;
    printNto1(1, n);

    
}