#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    set<int> s;
    int queries, type, num;
    string output = "";
    
    cin >> queries;
    for (int i = 0; i < queries; i++) {
        cin >> type >> num;
        if ( type == 1 ) {
            s.insert(num);
        }
        else if ( type == 2 ) {
            s.erase(num);
        }
        else {
            if ( s.find(num) == s.end() ) {
                output += "No\n";
            }
            else {
                output += "Yes\n";
            }
        }
    }
    
    cout << output;
    
    return 0;
}



