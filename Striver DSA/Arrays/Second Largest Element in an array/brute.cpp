#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector <int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    int secondLargest = -1;
    for(int i = n - 2; i >= 0; i--){
        if(v[i] != v[n-1]){ secondLargest = v[i];
            break;
        }
    }

    cout << "Second Largest: " << secondLargest << endl;
    
}