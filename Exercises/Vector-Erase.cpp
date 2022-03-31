#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int count, temp, temp2;
    vector<int> vec;
    
    cin >> count;
    for (int i = 0; i < count; i++) {
        cin >> temp;
        vec.push_back(temp);
    }
    
    cin >> temp;
    vec.erase(vec.begin()+temp-1);
    cin >> temp >> temp2;
    vec.erase(vec.begin()+temp-1, vec.begin()+temp2-1);
    
    count = vec.size();
    cout << count << endl;
    for (int i = 0; i < count; i++) {
        cout << vec[i] << ' ';
    }
    
    return 0;
}
