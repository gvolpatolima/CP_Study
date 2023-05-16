#include <bits/stdc++.h>
using namespace std;

int main() {
    // set<string> s;
    set<int> s; // Defines the set

    s.insert(4); // Insert the value x into set, do nothing if already present. O(log N)
    s.insert(3);
    s.insert(6); 

    s.erase(4); // erase the value x from set if present. O(log N)

    for (int i : s) {
        cout << i << " " ;
    } 
    cout << "\n";

    s.clear() // erase all elements. O(n)

    s.size() // returns the current size of the set. O(1)

}
