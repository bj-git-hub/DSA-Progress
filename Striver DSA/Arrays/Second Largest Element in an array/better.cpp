#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i = 0; i < n; i++ ){
        cin >> arr[i];
    }

    int largest = arr[0];

    for(int i = 0; i < n; i++){
        if(arr[i] > arr[0]){
            largest = arr[i];
        }
    }

    int secondLargest = -1;  //INT_MIN if there are negatives in the array.

    for(int i = 0; i < n; i++){
        if(arr[i] > secondLargest && arr[i] < largest){
            secondLargest = arr[i];
        }
    }
    cout << secondLargest << " ";

}