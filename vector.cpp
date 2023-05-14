#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v; // Defines the vector
    v.push_back(5); // Adds numbers to last position of the vector
    v.push_back(6);
    v.push_back(3); 

    for (int i : v) { //Prints out the vector items O(1)
        cout << i << "";
    }   

    v.pop_back(); // Removes the last element O(1)

    cout << "\n";

    for (int i : v) {
        cout << i << "" ;
    } 
    cout << "\n";

    cout << v.size() << "\n"; // Prints out the size of the vector O(1)

    cout << v[1] // Prints the first element of the vector
    // The [] Operator can be used to access elements like in an array and it has a time complexity of O(1)

    v.clear() // Erases all elements in the vector O(n)

    return 0;
}
