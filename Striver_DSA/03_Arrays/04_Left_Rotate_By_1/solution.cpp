#include <iostream>
#include <vector>
using namespace std;

void leftRotateBy1(vector<int> &nums, int n){
    int temp = nums[0];
    for(int i = 1; i < n; i++){
        nums[i - 1] = nums[i];
    }
    nums [n - 1] = temp;
}

int main(){
    int n;
    cin >> n;
    vector <int> nums(n);
    

    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    leftRotateBy1(nums,n);

    for(int i = 0; i < n; i++){
        cout <<  nums[i] << " ";
    }


}