#include <bits/stdc++.h>
using namespace std;

int main(){
    // Pair is a way of creating a Composite-Datatype composed of 2 different primitive/composite datatypes. 
    
    // pair<int,int> p; // a pair of 2 ints

    // pair<int,string> p; // a pair of an int and a string

    // pair<int,pair<int,string>> p; // a pair of int and (pair of int and string)

    // pair<vector<int>,string> p; // a pair of a (vector of int) and a string

    pair<string, int> p = {"hello", 6};
    cout << p.first << " "<< p.second; // prints: hello 6
    cout << "\n";

}