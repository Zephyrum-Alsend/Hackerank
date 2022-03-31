#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int size, queries, temp;
    vector<int> vec, ask;
    vector<int>::iterator ind;
    
    cin >> size;
    for (int i = 0; i < size; i++) {
        cin >> temp;
        vec.push_back(temp);
    }
    
    cin >> queries;
    for (int i = 0; i < queries; i++) {
        cin >> temp;
        ask.push_back(temp);
    }
    
    for (vector<int>::iterator it = ask.begin(); it != ask.end(); ++it) {
        ind = lower_bound(vec.begin(), vec.end(), *it);
        if (*ind == *it) {
            cout << "Yes " << (ind - vec.begin() + 1) << endl;
        }
        else {
            cout << "No " << (ind - vec.begin() + 1) << endl;
        }
    }
    
    return 0;
}
