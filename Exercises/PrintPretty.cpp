#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;

		/* Enter your code here */
        cout.width(0);
        cout << nouppercase << hex << showbase << long(A) << endl;

        cout.width(15);
        cout << right << setfill('_') << fixed << setprecision(2) << showpos << B << endl;
        
        cout.width(0);
        cout << uppercase << left << noshowpos << scientific << setprecision(9) << C << endl;
	}
	return 0;

}