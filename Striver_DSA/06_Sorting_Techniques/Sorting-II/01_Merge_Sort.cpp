/*
Merge Sort works on the principle of divide and conquer.
We divide the dataset recursively, until it just has one index each division.
then we combine, and merge the single element array, as we move up the recursion, giving us the final sorted
array.
*/

#include <iostream>
#include <vector>
using namespace std;

void merge(vector <int> &v, int low, int mid, int high);
void mergeSort(vector <int> &v, int low, int high);


int main(){
    int n;
    cin >> n;
    vector <int> v;
    for(int i = 0; i < n; i ++){
        int num;
        cin >> num;
        v.emplace_back(num);
    }
    mergeSort(v, 0, n - 1);

    for(int vi: v){
        cout << vi << " ";
    }
}
void mergeSort(vector <int> &v, int low, int high){

    if (low == high) return; // single element present in array.
    int mid = (low + high)/2;
    mergeSort(v, low, mid ); // calling for left half
    mergeSort(v, mid + 1, high); // calling for right half
    merge(v, low, mid, high);
}

void merge(vector <int> &v, int low, int mid, int high){
    int left = low;
    int right = mid + 1;
    vector <int> temp;
    while(left<= mid && right <= high){
        if(v[left] <= v[right]) {  // main condition
            temp.emplace_back(v[left]);
            left++;
        }
        else{
            temp.emplace_back(v[right]);
            right++;
        }
    }
    while(left <= mid){ // if right array gets exhausted.
        temp.emplace_back(v[left]);
        left++;
    }
    while(right <= high){ // if left array gets exhausted.
        temp.emplace_back(v[right]);
        right++;
    }
    for(int i = low; i <= high; i++){
        v[i] = temp[i - low ]; // can't just be i because the value of low changes at every recursive call
                               // so we need it to be in relation with low.
    }
}
/*
Coding Approach:
In order to code;
Base case must be clear => single element remaining i.e. low == high
two recursive calls inside mergeSort function.
and one merge function call inside the mergeSort function.

*/ 