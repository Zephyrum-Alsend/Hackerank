#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

/*Write the class AddElements here*/
template <class T>
class AddElements final {
    T element;
    public:
        AddElements(T e) {
            element = e;
        }
        T add(const T& e) {
            element += e;
            return element;
        }
        string concatenate(const string& e) {
            element += e;
            return element;
        }
};

/*template <>
class AddElements<string> {
    private:
        string element;
    public:
        AddElements(string e) {
            element = e;
        }
        string concatenate(string e) {
            string f = element + e;
            return f;
        }
};*/

int main () {
  int n,i;
  cin >> n;
  for(i=0;i<n;i++) {
    string type;
    cin >> type;
    if(type=="float") {
        double element1,element2;
        cin >> element1 >> element2;
        AddElements<double> myfloat (element1);
        cout << myfloat.add(element2) << endl;
    }
    else if(type == "int") {
        int element1, element2;
        cin >> element1 >> element2;
        AddElements<int> myint (element1);
        cout << myint.add(element2) << endl;
    }
    else if(type == "string") {
        string element1, element2;
        cin >> element1 >> element2;
        AddElements<string> mystring (element1);
        cout << mystring.concatenate(element2) << endl;
    }
  }
  return 0;
}
