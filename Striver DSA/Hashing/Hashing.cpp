// Hashing fundamentally is about pre-computing something and then fetch it when required.
// It is done to save resources.


// --------------- Basic integer array hashing -------------------------
// *Elements of the arr is used as indexes in the hash array.*
// size of hash array = highest element in arr + 1
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int hash[13] = {0};  // assuming that it's given that max element size in arr is 12.
    for(int i = 0; i < n; i++){
        hash[arr[i]]+=1;
    }
    int t;
    cin >> t;
    while(t--){
        int number;
        cin >> number;
        cout << hash[number] << endl;
        // fetching
    }
}

// -------------------------Character Hashing---------------------------
// ASCII value of the  is used as indexes in the hash array
#include <iostream>
using namespace std;

int main(){
    string s;
    cin >> s;
    
    // pre-compute
    int hash[256] = {0}; // Total ASCII characters => 256
    for(int i = 0; i < s.size(); i++ ){
        hash[s[i]]+=1;
    }

    int t; // Number of test cases
    cin >> t;
    while(t--){
        char c;
        cin >> c;
        cout << hash[c] << endl; //fetch
        
    }
    return 0;

} 

// ----------------Use of map for hashing ---------------------
#include <bits/stdc++.h>
using namespace std;
/*
    map < key , value > mp1
           |      |
           V      V
        number   freq   
*/

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    // pre-compute
    map <int , int > mpp;
    for(int i = 0; i < n; i ++){
        mpp[arr[i]]++;
    }

    int t;
    cin >> t;
    while(t--){
        int number;
        cin >> number;
        cout << mpp[number] << endl;
        // fetch
    }
    return 0;
}