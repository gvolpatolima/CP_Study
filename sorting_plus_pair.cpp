#include <bits/stdc++.h>  // Include the standard library header file

using namespace std;  // Use the std namespace

int main() {
    pair<int, int> p[5];  // Declare an array of pairs of integers

    p[0] = {1, 2};  // Initialize the first pair with values 1 and 2
    p[1] = {5, 2};  // Initialize the second pair with values 5 and 2
    p[2] = {8, 1};  // Initialize the third pair with values 8 and 1
    p[3] = {1, 0};  // Initialize the fourth pair with values 1 and 0
    p[4] = {3, 4};  // Initialize the fifth pair with values 3 and 4
    
    sort(p, p + 5);  // Sort the array of pairs

    cout << "Sorted Pair: ";
    for (int i = 0; i < 5; ++i) {
        cout << "(" << p[i].first << "," << p[i].second << ") ";  // Print the elements of the sorted pair
    }
    cout << "\n";

    return 0;
}
