#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {10, 15, 12, 5, 20};
    auto it = v.begin();

    cout << *it << "\n";      // Print the value at the current iterator position (10)
    it++;
    cout << *it << "\n";      // Print the value at the next iterator position (15)
    it--;
    cout << *it << "\n";      // Print the value at the previous iterator position (10)
    cout << *(it + 3) << "\n";   // Print the value at the iterator position + 3 (5)

    int a[5] = {10, 15, 12, 5, 20};
    int *p = a;

    cout << *p << "\n";       // Print the value at the current pointer position (10)
    p++;
    cout << *p << "\n";       // Print the value at the next pointer position (15)
    p--;
    cout << *p << "\n";       // Print the value at the previous pointer position (10)
    cout << *(p + 3) << "\n";    // Print the value at the pointer position + 3 (5)

    return 0;
}
