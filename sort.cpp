#include <bits/stdc++.h>  // Include the standard library header file

using namespace std;  // Use the std namespace

int main() {
    int a[4] = {5, 4, 3, 2};  // Declare and initialize an array of integers

    sort(a, a + 4);  // Sort the array using the sort function

    cout << "Sorted Array: ";
    for (int i = 0; i < 4; ++i) {
        cout << a[i];  // Print the elements of the sorted array
    }
    cout << "\n";

    vector<int> v = {5, 4, 3, 2};  // Declare and initialize a vector of integers

    sort(v.begin(), v.end());  // Sort the vector using the sort function

    cout << "Sorted Vector: ";
    for (int i = 0; i < v.size(); ++i) {
        cout << v[i];  // Print the elements of the sorted vector
    }
    cout << "\n";

    return 0;
}
