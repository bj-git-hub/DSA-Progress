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
    int visited[n2] = {0}; // maintain a visited to make sure that we copy one element for one.
    for(int i = 0; i < n1; i++){
        for(int j = 0; j < n2; j++){
            if(a[i] == b[j] && visited[j] == 0){
                intersectionArr.push_back(a[i]);
                visited[j] = 1; // update the visited, so mark that the particular element is taken.
                break;
            }
            if(b[j] > a[i]) break; // since the arrays are sorted, we dont go past the current element as we wont find it ahead anywhere.
        }
    }
    

    cout << "Intersection of the two  input sorted arrays are: ";
    for(auto it: intersectionArr){
        cout << it << " ";
    }
    return 0;
}
