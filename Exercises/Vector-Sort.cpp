#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int count;
    int temp;
    vector<int> vec;
    
    cin >> count;
    for (int i = 0; i < count; i++) {
        cin >> temp;
        vec.push_back(temp);
    }
    
    sort(vec.begin(), vec.end());
    vec.shrink_to_fit();
    count = vec.size();
    for (int i = 0; i < count; i++) {
        cout << vec[i] << ' ';
    }
    
    return 0;
}
