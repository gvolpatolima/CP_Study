#include <bits/stdc++.h>
using namespace std;

bool comparePairs(const pair<int, string>& a, const pair<int, string>& b) {
    return a.first > b.first; // Compare based on the first element in descending order
}

int main(){
    pair<int,string> p[5];
    p[0] = {1, "John"};
    p[1] = {5, "Alice"};
    p[2] = {8, "Bob"};
    p[3] = {1, "Sarah"};
    p[4] = {3, "Michael"};
        
    sort(p,p+5, comparePairs);

    cout << "Sorted Pair: ";
    for(int i = 0; i < 5; ++i) {
        cout << "(" << p[i].first << "," << p[i].second << ") ";
    }
    cout << "\n";
}