#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[4] = {5,4,3,2};

    sort(a, a+4);

    cout << "Sorted Array: ";
    for(int i = 0; i < 4; ++i) {
        cout << a[i];
    }
    cout << "\n";

    vector<int> v = {5, 4, 3, 2};

    sort(v.begin(), v.end());
    
    cout << "Sorted Vector: ";
    for(int i = 0; i < v.size(); ++i) {
        cout << v[i];
    }
    cout << "\n";
    
}