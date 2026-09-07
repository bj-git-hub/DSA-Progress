#include <bits/stdc++.h>
using namespace std;

int main(){
    int n1, n2;
    cin >> n1 >> n2;

    vector<int> a(n1), b(n2);

    for(int i = 0; i < n1; i++){
        cin >> a[i];
    }

    for(int i = 0; i < n2; i++){
        cin >> b[i];
    }
    
    vector <int> intersectionArr;
    
    int i = 0;
    int j = 0;
    while(i < n1 && j < n2){
        if(a[i] < b[j]){
            i++;
        }
        else if (a[i] > b[j]){
            j++;
        }
        else{
            intersectionArr.push_back(a[i]);
            i++;
            j++;
        }
    }
    

    cout << "Intersection of the two  input sorted arrays are: ";
    for(auto it: intersectionArr){
        cout << it << " ";
    }
    return 0;
}
