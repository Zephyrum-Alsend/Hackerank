#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    vector<vector<int>> vec;
    int arr_count, query_count, size, temp, idx1, idx2;
    string output = "";
    
    cin >> arr_count >> query_count;
    //vec.resize(arr_count);
    
    for (int i = 0; i < arr_count; i++) {
        cin >> size;
        vector<int> arr;
        //arr.resize(size);
        
        for (int j = 0; j < size; j++) {
            cin >> temp;
            arr.push_back(temp);
        }
        arr.shrink_to_fit();
        
        vec.push_back(arr);
    }
    vec.shrink_to_fit();
    
    for (int i = 0; i < query_count; i++) {
        cin >> idx1 >> idx2;
        output += to_string(vec[idx1][idx2]) + "\n";
    }
    
    cout << output;
    
    return 0;
}
