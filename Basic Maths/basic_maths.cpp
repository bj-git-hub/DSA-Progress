#include <iostream>
#include <cmath>
#include <bits/stdc++.h>
using namespace std;

void digitExtraction(int n);
int digitCount(int n);
bool isArmstrong(int n);
void allDivisors(int n);
void isPrime(int n);

int main(){
    int n;
    cin >> n;
    digitExtraction(n) ;
    cout << endl;
    cout << digitCount(n) << endl;
    cout << isArmstrong(n) << endl;
    allDivisors(n);



    return 0;
}

void digitExtraction(int n){
    while(n>0){
        int lastDigit = n % 10; // extracts the last digit
        cout << lastDigit << " ";
        n = n / 10; // drops the last digit.
    }
}

int digitCount(int n){
    int count = 0;
    while(n>0){
        
        count++ ;
        n = n / 10; // drops the last digit.
    }
    return count;
}
// 153 = 1^3 + 5^3 + 3^3
bool isArmstrong(int n){
    if (n == 0) return true; // edge-case optimisation
    if(n < 0) return false;
    int digits = 0;
    int org = n;
    int sum = 0;
    while(n!=0){
        digits++;
        n = n/10;
    }
    n = org;
    while(n!=0){
        int lastDigit = n % 10;
        sum += pow(lastDigit, digits);
        n = n / 10;
    }
    if(sum == org) return true;
    return false;

}
//Optimal solution of divisor problem
void allDivisors(int n){
    vector <int> divisors;
    for(int i = 1; i*i <=n; i++){
        if(n%i == 0){
            divisors.push_back(i);
        }
        if(n/i != i){
            divisors.push_back(n/i);
        }
    }
    sort(divisors.begin(), divisors.end());
    
    cout << "Divisors of " << n <<  " are: ";
    for(auto it: divisors){
        cout << it << " ";
    }
}


// Optimal approach for prime number

void isPrime(int n){
    bool isPrime = true;
    if(n <= 1) isPrime = false;
    for(int i = 2; i * i <= n; i++){
        if(n%i == 0) {isPrime = false;  
        break;
        }
    }
    if(isPrime) cout << "It is a Prime Number";
    else{
    cout << "It's not a Prime Number";
    }
}

