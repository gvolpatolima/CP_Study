#include <iostream>
#include <vector>
using namespace std;

// Given N numbers in input, print 2 lines, in first line, all evens integers in sorted order, in second line, all odd integers in sorted order.

int main(){
    int k;

    cout << "How many numbers? ";
    cin >> k;

    vector<int> v;
    vector<int> evens;
    vector<int> odds;

    for(int i = 0; i < k; ++i){
        int n;
        cout << "Enter a number: " << (i + 1) << ": ";
        cin >> n;
        v.push_back(n);

    }

    for (int i : v) {
        if(i % 2 == 0) {
            evens.push_back(i);
        }
        else {
            odds.push_back(i);
        }
    } 

    for (int i : evens) {
        cout << i << "" ; 
    }
    cout << "\n";

    for (int i : odds) {
        cout << i << "" ; 
    } 
    cout << "\n";
}