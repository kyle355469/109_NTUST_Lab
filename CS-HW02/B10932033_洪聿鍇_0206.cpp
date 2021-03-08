#include <iostream>
#include <iomanip>
using namespace std;
int main() {
	long long n;
	while (cin >> n) {
		cout << fixed << setprecision(2);
		if (n <= 750) {
			cout << n * 0.01;
		}
		else if (n <= 2250) {
			cout << 7.5 + (n - 750) * 0.02;
		}
		else if (n <= 3750) {
			cout << 37.5 + (n - 2250) * 0.03;
		}
		else if (n <= 5250) {
			cout << 82.5 + (n - 3750) * 0.04;
		}
		else if (n <= 7000) {
			cout << 142.5 + (n - 5250) * 0.05;
		}
		else {
			cout << 230 + (n - 7000) * 0.06;
		}
		cout << endl;
	}
}