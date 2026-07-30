/*

Sorting an array logically.


#include <bits/stdc++.h>
using namespace std;

void reverseArray(int arr[], int n){
    int left = 0;
    int right = n - 1;

    while(left < right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main(){
    int arr[5];

    for(int i = 0; i < 5; i++)
        cin >> arr[i];

    reverseArray(arr, 5);

    for(int i = 0; i < 5; i++)
        cout << arr[i] << " ";
}

*/

// ------------Using recursion----------------

// 1. Using two pointers 
#include <bits/stdc++.h>
using namespace std;

void swapArray(int arr[], int l, int r){
    if(l >= r) return; // base case
    swap(arr[l], arr[r]); // actual swap
    swapArray(arr, l+1, r-1); // recursive call
  
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n ; i++){
	    cin >> arr[i];
	}
	int l = 0, r = n-1;
	swapArray(arr, l, r);
	
	  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
}

}

// 2. Using single pointers
#include <bits/stdc++.h>
using namespace std;

void swapArray(int i, int arr[], int n){
    if(i >= n / 2) return;
    swap(arr[i], arr[n-i-1]); // IMP (n-i-1)
    swapArray(i+1, arr, n);
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n ; i++){
	    cin >> arr[i];
	}
	swapArray(0, arr , n);
	for(int i = 0; i < n ; i++){
	    cout << arr[i] << " ";
	}

}
#include <bits/stdc++.h>
using namespace std;

void swapArray(int i, int arr[], int n){
    if(i >= n / 2) return;
    swap(arr[i], arr[n-i-1]);
    swapArray(i+1, arr, n);
}

int main() {
	int n;
	cin >> n;
	int arr[n];
	for(int i = 0; i < n ; i++){
	    cin >> arr[i];
	}
	swapArray(0, arr , n);
	for(int i = 0; i < n ; i++){
	    cout << arr[i] << " ";
	}

}

