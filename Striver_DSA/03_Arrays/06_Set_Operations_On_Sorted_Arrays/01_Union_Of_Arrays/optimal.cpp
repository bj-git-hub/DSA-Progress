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

   

    vector <int> unionArr;
    int i = 0;
    int j = 0;
    // Pushing the unique elements in unionArr by taking benefit of the fact that the arrays are sorted.
    while(i < n1 && j < n2){
        if(a[i] <= b[j]){
            if(unionArr.size() == 0 || unionArr.back() != a[i]){
                unionArr.push_back(a[i]);
            }
            i++;
        }

        else{
            if(unionArr.size() == 0 || unionArr.back() != b[j]){
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    // handling the case where one array gets exhausted.
    while (i < n1){ // when b is exhausted
        if(unionArr.back() != a[i]){
            unionArr.push_back(a[i]);
        }
        i++;
    }
    while (j < n2){ // when a is exhausted
        if(unionArr.back() != b[j]){
            unionArr.push_back(b[j]);
        }
        j++;
    }

    cout << "Union of the two input arrays are: ";
    for(auto it: unionArr){
        cout << it << " ";
    }
    return 0;
}
