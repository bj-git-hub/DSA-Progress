#include <iostream>
#include <vector>

using namespace std;

int partition(vector <int> &v, int low, int high);

void quickSort(vector<int> &v, int low, int high){
    if(low < high){
        int pIndex = partition(v, low,  high);
        quickSort(v, low, pIndex -1);
        quickSort(v, pIndex + 1, high);

    }
}

int partition(vector <int> &v, int low, int high){
    int i = low;
    int j = high;
    int pivot = v[low]; // selecting the pivot
    while(i < j){       // while i doesn't cross j
        while(v[i] >= pivot && i <= high){
            i++;
        }
        while(v[j] < pivot && j >= low){
            j--;
        }

        if(i < j) swap (v[i], v[j]);
    }
    swap(v[low],v[j]);
    return j;
}

int main(){
    int n;
    cin >> n;
    vector <int> v(n);

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    quickSort(v, 0, n - 1);

    for(int i: v){
        cout << i << " ";
    }

    
}