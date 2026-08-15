#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int hash[13] = {0};  // assuming that it's given that max element size in arr is 12.
    for(int i = 0; i < 13; i++){
        hash[arr[i]]+=1;
    }
    int t;
    while(t--){
        int number;
        cin >> number;
        cout << hash[number];

        // fetching
    }
}