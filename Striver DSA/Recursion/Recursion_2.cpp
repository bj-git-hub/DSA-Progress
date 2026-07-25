
// Backtracking basics
#include <iostream>
using namespace std;

void function1toN(int i, int n){
    if(i < 1) return;
    function1toN(i-1 , n);
    cout  << i << " ";

}

void functionNto1(int i, int n){
    if(i > n) return;

    functionNto1(i + 1, n);
    cout << i << " ";
}


int main(){
    
    int n;
    cin >> n;
    function1toN(n, n);
    functionNto1(1, n);
    return 0;
}