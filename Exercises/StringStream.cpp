#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
	// Complete this function
    vector<int> output;
    stringstream ss(str);
    char garbage;
    int temp;
    
    while ( !( ss.eof() ) ) {
        if ( ss >> temp ) {
            output.push_back(temp);
        }
        ss >> garbage;
    }
   
   return output;
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}
