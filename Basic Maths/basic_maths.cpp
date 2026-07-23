#include <iostream>
using namespace std;

void digitExtraction(int n);
int digitCount(int n);

int main(){
    int n;
    cin >> n;
    digitExtraction(n) ;
    cout << endl;
    cout << digitCount(n);

    return 0;
}

void digitExtraction(int n){
    while(n>0){
        int lastDigit = n % 10; // extracts the last digit.
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