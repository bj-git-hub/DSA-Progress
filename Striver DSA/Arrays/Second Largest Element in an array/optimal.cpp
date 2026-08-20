/*
slargest and ssmallest as well.
*/
#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector <int> &v, int n){
    int largest = v[0];
    int slargest = INT_MIN;
    
    for(int i = 1; i < n; i++){
        if(v[i] > largest){
            slargest = largest;
            largest = v[i];   
        }

        else if(v[i] > slargest && v[i] < largest){
            slargest = v[i];
        }
        return slargest;
    }
    return slargest;
}

int secondSmallest(vector<int> &v, int n){
    int smallest = v[0];
    int ssmallest = INT_MAX;

    for(int i = 0; i < n; i++){
        if(v[i] < smallest){
            ssmallest = smallest;
            smallest  = v[i];
        }
        else if(v[i] < ssmallest && v[i] > smallest){
            ssmallest = v[i];
        }
    }
    return ssmallest;

}

int main(){
  int n;
  vector<int> v(n);

  for(int i = 0; i < n; i++){
    cin >> v[i];
  }

  cout << secondLargest(v, n) << endl;
  cout << secondSmallest(v, n) << endl;

  return 0;
}