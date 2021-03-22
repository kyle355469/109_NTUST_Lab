#include <iostream>
#include <algorithm>
#include <cstdlib>
using namespace std;
int main() {
	int i, j;
	while (cin >> i >> j) {
		int size = abs(i - j);
		int *arr = new int[size];
		int big = 0;
		for (int k = min(i, j); k <= max(i, j); k++) {
			int doing = k, count = 1;
			while (doing != 1) {
				if (doing % 2) {
					doing = doing * 3 + 1;
					count++;
				}
				else {
					doing /= 2;
					count++;
				}
			}
			if (count > big) {
				big = count;
			}
		}
		cout << i << " " << j << " " << big << endl;
	}
}
