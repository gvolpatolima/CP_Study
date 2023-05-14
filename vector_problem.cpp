#include <bits/stdc++.h>
using namespace std;

// Given N numbers in input, print 2 lines, in first line, all evens integers in sorted order, in second line, all odd integers in sorted order.

int main(){
    int k; // Create a variable to store the amount of numbers
    
    cout << "How many numbers? ";
    cin >> k; // Asks for that amount

    vector<int> v; // Creates 3 vectors to store all the numbers, the even numbers and the odd numbers
    vector<int> evens;
    vector<int> odds;

    for(int i = 0; i < k; ++i){ // Iterates k times
        int n;
        cout << "Enter a number: " << (i + 1) << ": "; //  Asks for a k amount of numbers
        cin >> n;
        v.push_back(n); // Adds those numbers to the v vector

    }

    for (int i : v) { // Iterates over all the elements in v
        if(i % 2 == 0) { // Separates those elements in the two vectors, the even numbers and the odd number
            evens.push_back(i);
        }
        else {
            odds.push_back(i);
        }
    } 

    for (int i : evens) { // Prints the vector containing even numbers
        cout << i << "" ; 
    }
    cout << "\n";

    for (int i : odds) { // Prints the vector containing the odd numbers
        cout << i << "" ; 
    } 
    cout << "\n";
}