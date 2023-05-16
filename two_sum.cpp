#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {3, 6, 11, 15};
    vector<int> set;

    int t = 9;
    for(int i : v) {
        set.push_back(i);
        int complement = t - i;
        auto it = find(v.begin(), v.end(), complement);
        if( it != v.end()){
            cout << "(" << complement << ", " << i << ")";
            break;
        }
    }
    
}