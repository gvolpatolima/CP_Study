#include <bits/stdc++.h>  // Include the standard library header file

using namespace std;  // Use the std namespace

// Function to compare pairs based on the first element in descending order
bool comparePairs(const pair<int, string>& a, const pair<int, string>& b) {
    return a.first > b.first;  // Compare the first elements of the pairs
}

int main() {
    pair<int, string> p[5];  // Declare an array of 5 pairs

    // Initialize the pairs with values
    p[0] = {1, "John"};
    p[1] = {5, "Alice"};
    p[2] = {8, "Bob"};
    p[3] = {1, "Sarah"};
    p[4] = {3, "Michael"};

    sort(p, p + 5, comparePairs);  // Sort the pairs using the comparePairs function

    cout << "Sorted Pair: ";

    // Print the sorted pairs
    for (int i = 0; i < 5; ++i) {
        cout << "(" << p[i].first << "," << p[i].second << ") ";
    }

    cout << "\n";

    return 0;
}
