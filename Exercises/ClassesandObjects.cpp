#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here
class Student {
    private:
        const static int scoreSize = 5;
        int scores[scoreSize];
    public:
        void input() {
            for (int i = 0; i < scoreSize; i++) {
                cin >> scores[i];
            }
            //cin >> scores[0] >> scores[1] >> scores[2] >> scores[3] >> scores[4];
            return;
        }
        
        int calculateTotalScore() {
            int total = 0;
            for (int i = 0; i < scoreSize; i++) {
                total += scores[i];
            }
            return total;
        }
};

int main() {