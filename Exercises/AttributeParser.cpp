#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <unordered_map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int codeSize, querySize;
    string temp, key, value;
    stringstream ss;
    unordered_map<string, string> q;
    
    getline(cin, temp);
    ss << temp;
    ss >> codeSize >> querySize;
    string code[codeSize], query[querySize];
    
    for (int i = 0; i < codeSize; i++) {
        getline(cin, temp);
        code[i] = temp;
    }
    for (int i = 0; i < querySize; i++) {
        getline(cin, temp);
        query[i] = temp;
    }
    
    key = "";
    for (int i = 0; i < codeSize; i++) {
        //cout << code[i] << endl;
        ss.str("");
        ss.clear();
        ss << code[i];
        
        while ( !(ss.eof()) ) {
            ss >> temp;
            
            if ( *temp.rbegin() == '>' ) { temp.pop_back(); }
            
            if (temp[0] == '<') {
                if (temp[1] == '/') {
                    size_t pos = key.find_last_of('.');
                    if ( pos == string::npos ) { key = ""; }
                    else { key = key.substr(0, pos); }
                    //cout << key << endl;
                }
                else {
                    if (key == "") { key += temp.substr(1); }
                    else { key += "." + temp.substr(1); }
                    //cout << key << endl;
                }
            }
            else {
                if ( temp.find('"') == string::npos && temp[0] != '=' ) {
                    if ( *temp.rbegin() == '=' ) { temp.pop_back(); }
                    key += "~" + temp;
                    //cout << key << endl;
                }
                else if ( temp.find('"' != string::npos) ) {
                    if ( temp[0] == '=' ) { temp = temp.substr(1); }
                    if ( temp[0] == '"' ) { 
                        temp = temp.substr(1);
                        value = temp;
                        //if ( *value.rbegin() == '"' ) {
                            value.pop_back();
                            //cout << key << "::" << value << endl;
                            q.emplace(key, value);
                        
                            key = key.substr(0, key.rfind('~'));
                        //}
                    }
                }
            }
        }
    }
    
    for (int i = 0; i < querySize; i++) {
        //cout << query[i] << endl;
        if ( q.count(query[i]) > 0 ) {
            cout << q[query[i]] << endl;
        }
        else {
            cout << "Not Found!" << endl;
        }
    }
    
    
    return 0;
}
