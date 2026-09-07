#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n), b(m);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    for(int i = 0; i < m; i++){
        cin >> b[i];
    }

    // Brute-force approach: use a set to store unique elements
    set<int> st;
    for(int i = 0; i < n; i++){
        st.insert(a[i]);
    }
    for(int i = 0; i < m; i++){
        st.insert(b[i]);
    }

    // Copy set elements to a vector for the union
    vector<int> unionArr(st.begin(), st.end());

    for(int i = 0; i < unionArr.size(); i++){
        cout << unionArr[i] << " ";
    }
    cout << endl;

    return 0;
}
