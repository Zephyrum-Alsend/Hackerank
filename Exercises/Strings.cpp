#include <iostream>
#include <string>
using namespace std;

int main() {
	// Complete the program
    string str1, str2, copy1, copy2, concat;
    int len1, len2;
    
    cin >> str1 >> str2;
    
    len1 = str1.length();
    len2 = str2.length();
    concat = str1 + str2;
    copy1 = str1;
    copy2 = str2;
    copy1[0] = str2[0];
    copy2[0] = str1[0];
    
    cout << len1 << " " << len2 << endl << concat << endl << copy1 << " " << copy2;
  
    return 0;
}
