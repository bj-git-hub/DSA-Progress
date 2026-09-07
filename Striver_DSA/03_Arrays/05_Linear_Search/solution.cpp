#include <iostream>
#include <vector>
using namespace std;

int linearSearch(const vector<int> &arr, int key)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == key)
            return i; // return 0-based index
    }
    return -1; // not found
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 8, 9, 11};
    int key = 8;

    int pos = linearSearch(arr, key);

    if (pos != -1)
        cout << key << " found at position " << (pos + 1) << "\n";
    else
        cout << key << " NOT found.\n";

    return 0;
}

// ---- Alternative: using STL find() ----
// #include <algorithm>
// auto it = find(arr.begin(), arr.end(), key);
// if (it != arr.end())
//     cout << key << " found at position " << (it - arr.begin() + 1) << "\n";
// else
//     cout << key << " NOT found.\n";