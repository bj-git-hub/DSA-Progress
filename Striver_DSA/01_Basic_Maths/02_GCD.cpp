#include <iostream>
#include <cmath>
using namespace std;

int gcdBrute(int a, int b){
    a = abs(a);
    b = abs(b);

    for(int i = min(a, b); i >= 1; i--){
        if(a % i == 0 && b % i == 0)
            return i;
    }

    return 1; // IMPORTANT
}

int gcdOptimal(int a, int b){
    a = abs(a);
    b = abs(b);

    while(a > 0 && b > 0){
        if(a > b)
            a %= b;
        else
            b %= a;
    }

    return (a == 0) ? b : a;
}

int main(){
    int a, b;
    cin >> a >> b;

    cout << "Brute GCD: " << gcdBrute(a, b) << '\n';
    cout << "Optimal GCD: " << gcdOptimal(a, b) << '\n';
}