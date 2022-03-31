#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int queries, type, num;
    map<string, int> m;
    map<string, int>::iterator it;
    string output = "", name;
    
    cin >> queries;
    
    for (int i = 0; i < queries; i++) {
        cin >> type >> name;
        if ( type == 1 ) {
            cin >> num;
            
            it = m.find(name);
            if ( it == m.end() ) {
                m.emplace(name, num);
            }
            else {
                it->second += num;
            }
        }
        else if ( type == 2 ) {
            m.erase(name);
        }
        else {
            it = m.find(name);
            if ( it == m.end() ) {
                output += "0\n";
            }
            else {
                output += to_string(it->second) + "\n";
            }
        }
    }
    
    cout << output;
    
    return 0;
}



