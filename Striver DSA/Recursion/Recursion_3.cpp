#include <iostream>
using namespace std;

// parameterized way
void summation(int i, int sum){
    if(i < 1) {
        cout << sum;
        return;
    }
    summation(i-1, sum + i);
}

// functional recursion

int summation2(int n){
    if(n == 0) return 0;
    
    return n + summation2(n-1);
}

int fact(int n){
    if(n == 0) return 1;
    return n * fact(n - 1);
}



int main(){
    int n;
    cin >> n;
    summation(n, 0);
    cout << endl;
    cout << summation2(n);
    cout << endl;
    cout << fact(n);
    return 0;
}