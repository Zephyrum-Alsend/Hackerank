#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);



int main()
{
    string n_temp;
    getline(cin, n_temp);

    int n = stoi(ltrim(rtrim(n_temp)));

    // Write your code here
    string output;
    
    switch (n) 
    {
        case 1:
            output = "one";
            break;
        case 2:
            output = "two";
            break;
        case 3:
            output = "three";
            break;
        case 4:
            output = "four";
            break;
        case 5:
            output = "five";
            break;
        case 6:
            output = "six";
            break;
        case 7:
            output = "seven";
            break;
        case 8:
            output = "eight";
            break;
        case 9:
            output = "nine";
            break;
        default:
            output = "Greater than 9";
    }
    
    cout << output << endl;

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
