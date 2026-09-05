#include <iostream>
#include <utility>
using namespace std;

int main(){
    // initialisation
    pair <int, int> p = {1,2};
    cout << p.first << " " << p.second;

    // nested pair
    pair <int , pair <int, int>>p2 = {1,{2,3}};
    cout << p2.first << " " << p2.second.first << " " << p2.second.second;

    pair <pair <int, int> , pair<int, int>> p3 = {{1,2}, {3,4}};
    
    cout << p3.first.first << " " << p3.first.second << " " 
    << p3.second.first << " " << p3.second.second;
    // and so on....

    // pair can also be array's data type
    pair<int, int> arr[] = {{1,2},{3,4},{4,5}};
    cout << arr[0].first;
}